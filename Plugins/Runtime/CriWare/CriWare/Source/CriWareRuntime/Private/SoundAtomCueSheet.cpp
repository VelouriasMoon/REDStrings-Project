/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013-2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom Sound Data (CueSheet)
 * File     : SoundAtomCueSheet.cpp
 *
 ****************************************************************************/

#include "SoundAtomCueSheet.h"

#include "CriWareRuntimePrivatePCH.h"
#include "AtomSoundData.h"
#include "AtomAsrRack.h"

#include "UObject/Package.h"
#include "Serialization/CustomVersion.h"
#include "Misc/Paths.h"
#include "Misc/PackageName.h"
#include "HAL/FileManager.h"

#if WITH_EDITOR
#include "Misc/FileHelper.h"
#endif

#if STATS
#include "CriWareInitializer.h"
DECLARE_MEMORY_STAT_EXTERN(TEXT("Atom CueSheet Bytes"), STAT_CriWare_CueSheetBytes, STATGROUP_CriWare, );
#endif


#define LOCTEXT_NAMESPACE "SoundAtomCueSheet"


typedef struct CriWareAcbContextTag {
	CriFsBinderHn Binder;
	void *ResourceData;
} CriWareAcbContext;


static void CRIAPI criware_on_acb_released_func(void *obj);


/* バージョン番号 */
struct FAtomCueSheetVersion
{
	enum Type
	{
		/* バージョン番号が付与される前 */
		BeforeCustomVersionWasAdded = 0,

		/* ACBファイルの取り込みに対応 */
		IncludeAcb,

		/* UAssetImportDataによるアセット管理に対応 */
		IncludeAssetImportData,

		/* キューシート名をアセットに保持 */
		StoreCueSheetName,

		/* スロット数をアセットに保持 */
		StoreNumSlots,

		/* Use async loading */
		LoadAsync,

		/* Can save additional data form Json file */
		StoreAdditionalData,

		/* Refrence SoundAtomCue using this CueSheet */
		ReferenceSoundAtomCueAssets,

		/* 最新バージョンの番号を取得するための番兵 */
		VersionPlusOne,

		/* 最新バージョンの番号を指す */
		LatestVersion = VersionPlusOne - 1,
	};

	/* GUID */
	static const FGuid GUID;
};

const FGuid FAtomCueSheetVersion::GUID(0x29391EC5, 0xA293410D, 0x88C35FCB, 0x2E48DBBC);

/* バージョン登録 */
FCustomVersionRegistration GAtomCueSheetVersion(
	FAtomCueSheetVersion::GUID, FAtomCueSheetVersion::LatestVersion, TEXT("AtomCueSheetAssetVersion"));

#if STATS
/* 総メモリ確保サイズ */
DEFINE_STAT(STAT_CriWare_CueSheetBytes);
#endif

//----------------------------------------
// FAtomAttenuationDistanceParam struct
//----------------------------------------
FAtomAttenuationDistanceParam::FAtomAttenuationDistanceParam()
	: MinDistance(0.0f)
	, MaxDistance(5000.0f)
{
#if WITH_EDITOR
	/* Localization of unreal properties metadata with LOCTEXT markups and reflection */
	CRI_LOCSTRUCT(StaticStruct());
#endif
}

//----------------------------------------
// FAtomCueInfo struct
//----------------------------------------
FAtomCueInfo::FAtomCueInfo()
	: Id(-1)
	, Name()
	, Duration(0)
	, UserData() // MAY BE BIG -> FIXME ONLY EDITOR 
	, AttenuationDistance()
	, bLooping(false)
	, bIsParameterPalletAssigned(false)
{
#if WITH_EDITOR
	/* Localization of unreal properties metadata with LOCTEXT markups and reflection */
	CRI_LOCSTRUCT(StaticStruct());
#endif
}

//----------------------------------------
// USoundAtomCueSheet class
//----------------------------------------
USoundAtomCueSheet::USoundAtomCueSheet(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, bIsRequestingAcbLoadData(false)
{
#if WITH_EDITOR
	/* Localization of unreal properties metadata with LOCTEXT markups and reflection */
	CRI_LOCCLASS(GetClass());
#endif

	bOverrideAwbDirectory = false;
	NumSlots = -1;
	Binder = NULL;
	ResourceData = NULL;
	AcbHn = NULL;
	ReferenceCount.Reset();
}

USoundAtomCueSheet* USoundAtomCueSheet::Find(FName AcbName, FString PackagePath, UObject* InObjectPackage)
{
	/* ACBファイル名の取得 */
	FString AcbNameString = AcbName.ToString();

	/* 既存ACBオブジェクトの検索 */
	USoundAtomCueSheet* AcbData = (USoundAtomCueSheet*)StaticFindObject(
		USoundAtomCueSheet::StaticClass(), InObjectPackage, *AcbNameString);

	if ((AcbData == nullptr) && (!PackagePath.IsEmpty())) {
		/* ACBオブジェクトが見つからない場合はパッケージを検索してロード */
		/* 備考）フルパスでのサーチを優先。 */
		FString PackageName = PackagePath + "/" + AcbNameString;
		UPackage* Pkg = FindPackage(nullptr, *PackageName);
		if (Pkg == nullptr) {
			Pkg = LoadPackage(nullptr, *PackageName, LOAD_None);
		}

		/* ACBオブジェクトの再検索 */
		AcbData = (USoundAtomCueSheet*)StaticFindObject(
			USoundAtomCueSheet::StaticClass(), InObjectPackage, *AcbNameString);
	}

	if (AcbData == nullptr) {
		/* フルパスでACBオブジェクトが見つからない場合はアセット名のみで再検索 */
		UPackage* Pkg = FindPackage(nullptr, *AcbNameString);
		if (Pkg == nullptr) {
			Pkg = LoadPackage(nullptr, *AcbNameString, LOAD_None);
		}

		/* ACBオブジェクトの再検索 */
		AcbData = (USoundAtomCueSheet*)StaticFindObject(
			USoundAtomCueSheet::StaticClass(), InObjectPackage, *AcbNameString);
	}

	if (AcbData == nullptr) {
		/* ACBオブジェクトが見つからない場合はuassetファイル自体を検索 */
		FString AssetFileName = AcbName.ToString() + TEXT(".uasset");
		UE_LOG(LogCriWareRuntime, Verbose, TEXT("'%s' is loaded to memory from storage."), *AssetFileName);
		TArray<FString> AssetFiles;
		IFileManager::Get().FindFilesRecursive(
			AssetFiles, *FPaths::ProjectContentDir(), *AssetFileName, true, false);
		for (FString& AssetPath : AssetFiles) {
			UPackage* Package = LoadPackage(nullptr, *AssetPath, LOAD_None);
		}

		/* ACBオブジェクトの再検索 */
		AcbData = (USoundAtomCueSheet*)StaticFindObject(
			USoundAtomCueSheet::StaticClass(), InObjectPackage, *AcbNameString);
	}

	/* エラーチェック */
	if (AcbData == nullptr && InObjectPackage != NULL) {
		UE_LOG(LogCriWareRuntime, Error, TEXT("Failed to load '%s' (Atom Cue Sheet)."), *AcbNameString);
		return nullptr;
	}

	return AcbData;
}

USoundAtomCueSheet* USoundAtomCueSheet::LoadAtomCueSheet(USoundAtomCueSheet* CueSheet, bool bAddToLevel)
{
	/* レベルに紐づけるかどうかチェック */
	if (bAddToLevel == false) {
		if (!CueSheet->IsLoaded()) {
			/* 紐づけが不要な場合は使用可能な状態にだけしておく */
			CueSheet->AsyncLoadCueSheet();
		}
		return CueSheet;
	}

	/* オブジェクトを管理するActorを作成 */
	/* 備考）USoundAtomCueSheet単体ではプレビュー終了時等にACBをReleaseできない	*/
	/* 　　　（終了を検知できない）ため、破棄処理専用の管理アクタを作成する。	*/
	AAtomSoundData* NewActor = GWorld->SpawnActor<AAtomSoundData>();

	/* キューシートの実体をロード */
	NewActor->LoadCueSheet(CueSheet);

	return CueSheet;
}

USoundAtomCueSheet* USoundAtomCueSheet::LoadAcb(FName AcbName, bool bAddToLevel)
{
	/* ファイル名だとエディタでしか読めないのでパスで指定する */
	FString AcbPath = AcbName.ToString();

	/* パスの分解 */
	FString FileDir, FileName, FileExt;
	FPaths::Split(AcbPath, FileDir, FileName, FileExt);

	/* 拡張子を含まないフルパスを作成 */
	FString PackageName;
	if (FPaths::IsRelative(AcbPath)) {
		PackageName = "/Game/" + FileDir + "/" + FileName;
	} else {
		PackageName = FileDir + "/" + FileName;
	}

	/* 「/」の重複を回避 */
	/* 注意）「/」の重複があるとLoadObject内で例外が発生する。 */
	FPaths::RemoveDuplicateSlashes(PackageName);

	/* 既存ACBオブジェクトの検索 */
	FPaths::Split(PackageName, FileDir, FileName, FileExt);
	USoundAtomCueSheet* AcbData = USoundAtomCueSheet::Find(FName(*FileName), FileDir);

	/* AtomCueSheetの有効化 */
	AcbData = USoundAtomCueSheet::LoadAtomCueSheet(AcbData, bAddToLevel);

	return AcbData;
}

void USoundAtomCueSheet::ReleaseAcb(FName AcbName)
{
	/* 不具合対策のため機能を無効化 */
}

/* ローカライズされたアセットのパスを取得 */
FString USoundAtomCueSheet::GetLocalizedAssetPath(FString AssetPath)
{
	/* パスを分離 */
	/* 備考）GetLocalizedPackagePathにはAssetの拡張子を省いたものを指定する。 */
	FString SplitPath, Extension;
	AssetPath.Split(".", &SplitPath, &Extension, ESearchCase::IgnoreCase, ESearchDir::FromEnd);

	/* ローカライズされたアセットがないか確認 */
	/* 備考）パスが見つからなかったら元のパスが指定される。 */
	FString LocalizedSplitPath = FPackageName::GetLocalizedPackagePath(SplitPath);

	/* 拡張子を付けてパスを復元 */
	FString LocalizedPath = LocalizedSplitPath + "." + Extension;

	return LocalizedPath;
}

/* ロード済みのローカライズされたアセットを取得 */
USoundAtomCueSheet* USoundAtomCueSheet::GetLocalizedAtomCueSheet(USoundAtomCueSheet* CueSheet)
{
	if (CueSheet == nullptr) {
		return nullptr;
	}

	/* アセットのパスを取得 */
	FString AssetPath = CueSheet->GetPathName();

	/* ローカライズされたアセットのパスを取得 */
	FString LocalizedPath = GetLocalizedAssetPath(AssetPath);
	if (LocalizedPath == AssetPath) {
		/* ローカライズ非対応時はキューシートを差し替えない */
		return CueSheet;
	}

	/* ローカライズされたアセットがロード済みかどうかチェック */
	USoundAtomCueSheet* LocalizedCueSheet = (USoundAtomCueSheet*)StaticFindObject(
		USoundAtomCueSheet::StaticClass(), ANY_PACKAGE, *LocalizedPath);

#if WITH_EDITOR
	if (LocalizedCueSheet == nullptr) {
		/* プレビュー用にアセットのロードを試みる */
		LocalizedCueSheet = (USoundAtomCueSheet*)StaticLoadObject(
			USoundAtomCueSheet::StaticClass(), NULL, *LocalizedPath);
	}
#endif

	if (LocalizedCueSheet == nullptr) {
		/* ローカライズされたアセットがロードされていない場合は既存のアセットを使用 */
		return CueSheet;
	}

	return LocalizedCueSheet;
}

void USoundAtomCueSheet::AddRef(void)
{
	/* リソースの確保 */
	AsyncLoadCueSheet();

	/* リファレンスカウンタの更新 */
	int32 Result = ReferenceCount.Increment();
	if (Result != 1) {
		return;
	}

	/* GCを回避 */
	AddToRoot();
}

void USoundAtomCueSheet::Release(void)
{
	/* 既にリリース済みの場合は何もしない */
	int32 Current = ReferenceCount.GetValue();
	if (Current == 0) {
		return;
	}

	/* リファレンスカウンタの更新 */
	int32 Result = ReferenceCount.Decrement();
	if (Result != 0) {
		return;
	}

	/* GCを許可 */
	RemoveFromRoot();

	/* 備考）この時点ではリソースは破棄しない。 */
	/* 　　　SoundAtomCueSheetが参照されている間は再度発音される可能性があるため、	*/
	/* 　　　GCのタイミングまでACBハンドルはキープしておく。						*/
}

void USoundAtomCueSheet::AsyncLoadCueSheet()
{
	FScopeLock Lock(&CriticalSection);

	/* 既にロード済みの場合は何もしない */
	if (AcbHn || bIsRequestingAcbLoadData) {
		return;
	}

	/* RawデータからACBを展開 */
	if (ResourceData == nullptr) {
		if (RawData.GetBulkDataSize() > 0) {
			/* コピーしたメモリ領域を取得 */
			RawData.GetCopy((void**)&ResourceData, false);

#if STATS
			/* 総メモリ確保サイズの更新 */
			if (ResourceData != nullptr) {
				uint32 BytesInUseCount = FMemory::GetAllocSize(ResourceData);
				INC_MEMORY_STAT_BY(STAT_CriWare_CueSheetBytes, BytesInUseCount);
			}
#endif
		}
	}

	// enter in loading mode, GC cannot collect until this flag goes false. 
	bIsRequestingAcbLoadData = true;

	float DistanceFactor = UCriWareInitializer::GetDistanceFactor();
	auto ContentDir = UCriWareInitializer::GetContentDir();

	// call to file loading  - criAtomExAcb_LoadAcbData is a synchroneous function
	// must be asynchroneous task to ensure non-blocking in unreal and avoid thread lock with asset manager!
	LoadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([&, DistanceFactor, ContentDir]() {
		// code to execute on background thread here

		FScopeLock Lock(&CriticalSection);

		/* データディレクトリの取得 */
		FString BaseName;
		if (bOverrideAwbDirectory == false) {
			BaseName = ContentDir;
		}
		else {
			BaseName = FPaths::ProjectContentDir() + AwbDirectory.Path;
		}

		/* パスの終端に「/」を付加 */
		if (BaseName.EndsWith(TEXT("/")) == false) {
			BaseName += "/";
		}

		/* キューシート名を付加 */
		BaseName += CueSheetName;

		/* ACBファイル名、AWBファイル名の作成 */
		FString AcbName = BaseName + TEXT(".acb");
		FString AwbName = BaseName + TEXT(".awb");

		CriAtomExAcbHn Handle = nullptr;

		// ACBファイルのロード */
		if (ResourceData) {
			// uasset内にACBデータが保持されている場合はメモリからロード
			Handle = criAtomExAcb_LoadAcbData(
				reinterpret_cast<void*>(ResourceData), static_cast<CriSint32>(RawData.GetBulkDataSize()), Binder, TCHAR_TO_UTF8(*AwbName), nullptr, 0);
		} else {
			// uasset内にACBデータが保持されていない場合はファイルからロード（旧バージョンのデータが該当）
			Handle = criAtomExAcb_LoadAcbFile(nullptr, TCHAR_TO_UTF8(*AcbName), Binder, TCHAR_TO_UTF8(*AwbName), nullptr, 0);
		}

		// ロード結果の表示
		if (Handle) {
			UE_LOG(LogCriWareRuntime, Verbose, TEXT("'%s' is loaded."), *GetFullName());
		}

		AcbHn = Handle;

		// populate cue info
		if (AcbHn) {
			// todo: find old ref and update to same name cue info and update children cue sound automaticaly - delete unused ones!
			TArray<FAtomCueInfo> NewCueInfos;
			
			int32 NumCue = criAtomExAcb_GetNumCues(AcbHn);
			for (int32 i = 0; i < NumCue; i++) {
				// find cue info if exist
				CriAtomExCueInfo AtomExCueInfo = {};
				if (criAtomExAcb_GetCueInfoByIndex(AcbHn, i, &AtomExCueInfo) == CRI_FALSE) {
					// malformed acb ?
					break;
				}

				// retrive existing cue info by cue name
				FAtomCueInfo CueInfo = FAtomCueInfo();
				FString Name = FString(UTF8_TO_TCHAR(AtomExCueInfo.name));
				for (auto& Info : CueInfos) {
					if (Info.Name == Name) {
						CueInfo = Info;
						break;
					}
				}
				
				// update cue info
				LoadCueInfo(AtomExCueInfo, CueInfo, DistanceFactor);

				NewCueInfos.Add(CueInfo);
			}

			// replace array with new array elements
			CueInfos = NewCueInfos;
		}
		
		// use a safe oject
		TWeakObjectPtr<USoundAtomCueSheet> CueSheetPtr = this;

		// signal game thread for blueprints and update children cue assets
		AsyncTask(ENamedThreads::GameThread, [CueSheetPtr]() {

			if (CueSheetPtr != nullptr && !CueSheetPtr->HasAnyFlags(RF_BeginDestroyed | RF_FinishDestroyed)) {
				// update cue assets
				for (auto& Info : CueSheetPtr->CueInfos) {
					// remove empty/invalid entries
					Info.SoundAtomCues.RemoveAll([](TSoftObjectPtr<USoundAtomCue> InCue) { return !InCue.Get(); });
				
					// update local cue assets values
					for (TSoftObjectPtr<USoundAtomCue> SoftCueAsset : Info.SoundAtomCues) {
						USoundAtomCue* CueAsset = SoftCueAsset.Get();
						if (CueAsset) {
							CueAsset->CacheAggregateValues();
						}
					}
				}

				// broadcast event
				if (CueSheetPtr->OnLoadCompleted.IsBound()) {
					CueSheetPtr->OnLoadCompleted.Broadcast(CueSheetPtr.Get());
				}
			}
		});
		
		// exit in loading mode, GC can collect cuesheet
		bIsRequestingAcbLoadData = false;
	}, TStatId(), NULL, ENamedThreads::AnyBackgroundThreadNormalTask);
}

void USoundAtomCueSheet::MakeSureCueSheetIsLoaded()
{
	// try to load the cue sheet
	AsyncLoadCueSheet();
	// wait completion if not loaded
	if (LoadTask.IsValid() && !LoadTask->IsComplete()) {
		FTaskGraphInterface::Get().WaitUntilTaskCompletes(LoadTask);
	}
}

void USoundAtomCueSheet::LoadCueInfo(const CriAtomExCueInfo& AtomExCueInfo, FAtomCueInfo& CueInfo, float DistanceFactorToApply) const
{
	if (!AcbHn) {
		return;
	}

	CueInfo.Id = static_cast<int32>(AtomExCueInfo.id);
	CueInfo.Name = FString(UTF8_TO_TCHAR(AtomExCueInfo.name));

	// キューの長さを取得
	// Duration (ms -> ticks)
	CueInfo.Duration = AtomExCueInfo.length >= 0 ? FTimespan(AtomExCueInfo.length * 10000UL) : FTimespan::FromSeconds(INDEFINITELY_LOOPING_DURATION);

	// ループ情報の取得
	// Loop
	CueInfo.bLooping = AtomExCueInfo.length == -1;

	// ユーザーデータの取得[
	// UserData
	if (AtomExCueInfo.user_data != nullptr) {
		CueInfo.UserData = FString(UTF8_TO_TCHAR(AtomExCueInfo.user_data));
	}

	// カテゴリ名一覧の取得
	// CategoryName list
	CueInfo.CategoryNames.Reset();
	for (size_t i = 0; i < CRIATOMEXCATEGORY_MAX_CATEGORIES_PER_PLAYBACK; i++) {
		CriAtomExCategoryInfo CategoryInfo;
		CriBool result = criAtomExAcf_GetCategoryInfo(AtomExCueInfo.categories[i], &CategoryInfo);
		if (result == CRI_FALSE) {
			break;
		}
		CueInfo.CategoryNames.Add(CategoryInfo.name);
	}

	// Attenuation distances
	CueInfo.AttenuationDistance.MaxDistance = AtomExCueInfo.pos3d_info.max_distance / DistanceFactorToApply;
	CueInfo.AttenuationDistance.MinDistance = AtomExCueInfo.pos3d_info.min_distance / DistanceFactorToApply;

	// AISACコントロール名一覧の取得
	// AISACControlName list
	CueInfo.AisacControlNames.Reset();
	CriSint32 NumControls = criAtomExAcb_GetNumUsableAisacControlsById(AcbHn, CueInfo.Id);
	for (int i = 0; i < NumControls; i++) {
		CriAtomExAisacControlInfo ControlInfo;
		CriBool result = criAtomExAcb_GetUsableAisacControlById(
			AcbHn, CueInfo.Id, (CriUint16)i, &ControlInfo);
		if (result != CRI_FALSE) {
			CueInfo.AisacControlNames.Add(ControlInfo.name);
		}
	}

	// キューシートからパラメータパレットが設定されているかどうかを取得
	// ParameterPalletAssigned
	CueInfo.bIsParameterPalletAssigned = criAtomExAcb_IsParameterPalletAssignedByName(AcbHn, TCHAR_TO_UTF8(*CueInfo.Name));
}

void USoundAtomCueSheet::ForceUnload(bool bUseAsync)
{
	FScopeLock Lock(&CriticalSection);

	/* リソースが解放済みの場合は何もしない */
	if (AcbHn == NULL) {
		return;
	}

#if STATS
	/* 総メモリ確保サイズの更新 */
	if (ResourceData != nullptr) {
		uint32 BytesInUseCount = FMemory::GetAllocSize(ResourceData);
		DEC_MEMORY_STAT_BY(STAT_CriWare_CueSheetBytes, BytesInUseCount);
	}
#endif

#if WITH_EDITOR
	/* クック時やコンテンツブラウザからのロード時はACBハンドルを同期処理で解放 */
	if (GIsCookerLoadingPackage || GIsEditorLoadingPackage) {
		if ((criAtomEx_IsInitialized() != CRI_FALSE) && (AcbHn != NULL)) {
			/* リリースの通知 */
			UE_LOG(LogCriWareRuntime, Verbose, TEXT("'%s' is released."), *GetFullName());

			/* ACBハンドルのリリース */
			criAtomExAcb_Release(AcbHn);
			AcbHn = NULL;
		}
	}
#endif

	/* ライブラリが初期化済みかどうかチェック */
	/* 注意）GC処理の順序によっては、ライブラリ初期化後にここに来る可能性がある。	*/
	/* 備考）criAtomExAcb_LoadAcbFile関数失敗時はAcbHnがNULLになる。				*/
	if ((criAtomEx_IsInitialized() != CRI_FALSE) && (AcbHn != NULL)) {
		/* 非同期解放処理用に情報を保存 */
		CriWareAcbContext* Context = new CriWareAcbContext();
		Context->Binder = Binder;
		Context->ResourceData = ResourceData;

		/* 非同期解放処理の開始を通知 */
		UE_LOG(LogCriWareRuntime, Verbose, TEXT("Starting asynchronous release of '%s'."), *GetFullName());

		/* ACBハンドルの非同期解放 */
		if (bUseAsync) 
		{
			criAtomExAcb_ReleaseAsync(AcbHn, criware_on_acb_released_func, Context);
		}
		else 
		{
			criAtomExAcb_Release(AcbHn);
			criware_on_acb_released_func(Context);
		}

		/* リソースの参照をクリア */
		AcbHn = NULL;
		Binder = NULL;
		ResourceData = nullptr;
	}

	/* 同期処理時はバインダも合わせて破棄 */
	if ((criAtomEx_IsInitialized() != CRI_FALSE) && (Binder != NULL)) {
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
		Binder = NULL;
	}

	/* 同期処理時はメモリも合わせて解放 */
	if (ResourceData != nullptr) {
		FMemory::Free(ResourceData);
		ResourceData = nullptr;
	}
}

bool USoundAtomCueSheet::IsLoaded()
{
	return (AcbHn != NULL);
}

USoundAtomCue* USoundAtomCueSheet::GetAtomCueByIndex(int32 CueIndex)
{
	/* キューシートハンドルへのアクセスを保証 */
	if (!IsLoaded()) {
		AsyncLoadCueSheet();
		UE_LOG(LogCriWareRuntime, Warning, TEXT("In GetAtomCueByIndex: CueSheet '%s' is Loading."), *GetFullName());
		return nullptr;
	}

	/* キュー情報の取得 */
	CriAtomExCueInfo CueInfo;
	CriBool bResult = criAtomExAcb_GetCueInfoByIndex(AcbHn, CueIndex, &CueInfo);
	if (bResult == CRI_FALSE) {
		return nullptr;
	}

	/* キューオブジェクトの作成 */
	USoundAtomCue* NewAtomCue = NewObject<USoundAtomCue>(this);

	/* パラメータの設定 */
	NewAtomCue->CueName = UTF8_TO_TCHAR(CueInfo.name);
	NewAtomCue->CueSheet = this;

	return NewAtomCue;
}

USoundAtomCue* USoundAtomCueSheet::GetAtomCueById(int32 CueId)
{
	/* キューシートハンドルへのアクセスを保証 */
	if (!IsLoaded()) {
		AsyncLoadCueSheet();
		UE_LOG(LogCriWareRuntime, Warning, TEXT("In GetAtomCueById: CueSheet '%s' is Loading."), *GetFullName());
		return nullptr;
	}

	/* キュー情報の取得 */
	CriAtomExCueInfo CueInfo;
	CriBool bResult = criAtomExAcb_GetCueInfoById(AcbHn, CueId, &CueInfo);
	if (bResult == CRI_FALSE) {
		return nullptr;
	}

	/* キューオブジェクトの作成 */
	USoundAtomCue* NewAtomCue = NewObject<USoundAtomCue>(this);

	/* パラメータの設定 */
	NewAtomCue->CueName = UTF8_TO_TCHAR(CueInfo.name);
	NewAtomCue->CueSheet = this;

	return NewAtomCue;
}

USoundAtomCue* USoundAtomCueSheet::GetAtomCueByName(FString CueName)
{
	/* キューシートハンドルへのアクセスを保証 */
	if (!IsLoaded()) { AsyncLoadCueSheet(); 
		UE_LOG(LogCriWareRuntime, Warning, TEXT("In GetAtomCueByName: CueSheet '%s' is Loading."), *GetFullName());
		return nullptr;
	}

	/* キュー情報の取得 */
	CriAtomExCueInfo CueInfo;
	CriBool bResult = criAtomExAcb_GetCueInfoByName(AcbHn, TCHAR_TO_UTF8(*CueName), &CueInfo);
	if (bResult == CRI_FALSE) {
		return nullptr;
	}

	/* キューオブジェクトの作成 */
	USoundAtomCue* NewAtomCue = NewObject<USoundAtomCue>(this);

	/* パラメータの設定 */
	NewAtomCue->CueName = UTF8_TO_TCHAR(CueInfo.name);
	NewAtomCue->CueSheet = this;

	return NewAtomCue;
}

void USoundAtomCueSheet::AttachDspBusSetting(FString SettingName)
{
	UAtomAsrRack* asr_rack = UAtomAsrRack::GetDefaultAsrRack();

	/* ライブラリが初期化済みかどうかチェック */
	/* 注意）GC処理の順序によっては、ライブラリ初期化後にここに来る可能性がある。 */
	if (criAtomEx_IsInitialized() != CRI_FALSE) {
		/* DSPバス設定の適用 */
		asr_rack->AttachDspBusSetting(SettingName);
	}
}

void USoundAtomCueSheet::DetachDspBusSetting()
{
	UAtomAsrRack* asr_rack = UAtomAsrRack::GetDefaultAsrRack();

	/* ライブラリが初期化済みかどうかチェック */
	/* 注意）GC処理の順序によっては、ライブラリ初期化後にここに来る可能性がある。 */
	if (criAtomEx_IsInitialized() != CRI_FALSE) {
		/* DSPバス設定の無効化 */
		asr_rack->DetachDspBusSetting();
	}
}

void USoundAtomCueSheet::ApplyDspBusSnapshot(FString SnapshotName, int32 Milliseconds)
{
	UAtomAsrRack* asr_rack = UAtomAsrRack::GetDefaultAsrRack();

	/* ライブラリが初期化済みかどうかチェック */
	/* 注意）GC処理の順序によっては、ライブラリ初期化後にここに来る可能性がある。 */
	if (criAtomEx_IsInitialized() != CRI_FALSE) {
		/* DSPバススナップショットの適用 */
		asr_rack->ApplyDspBusSnapshot(SnapshotName, Milliseconds);
	}
}

void USoundAtomCueSheet::PostInitProperties()
{
#if WITH_EDITORONLY_DATA
	if (!HasAnyFlags(RF_ClassDefaultObject)) {
		AssetImportData = NewObject<UAssetImportData>(this, TEXT("AssetImportData"));
	}
#endif

	Super::PostInitProperties();
}

bool USoundAtomCueSheet::IsReadyForFinishDestroy()
{
	// GC cannot collect while a loading task is not running
	return Super::IsReadyForFinishDestroy() && (bIsRequestingAcbLoadData == false);
}

void USoundAtomCueSheet::FinishDestroy()
{
	// release memory
	ForceUnload();

	Super::FinishDestroy();
}

void USoundAtomCueSheet::Serialize(FArchive& Ar)
{
    if (HasAnyFlags(RF_ClassDefaultObject))
    {
        return;
    }
	
    // Always force the cue info list to be updated when we are saving or cooking
    if (Ar.IsSaving() || Ar.IsCooking())
    {
        MakeSureCueSheetIsLoaded();
    }

	Super::Serialize(Ar);

	/* アセットバージョンの使用を通知 */
	Ar.UsingCustomVersion(FAtomCueSheetVersion::GUID);

#if WITH_EDITORONLY_DATA
	if ((Ar.IsLoading()) && (AssetImportData == nullptr)) {
		// AssetImportData should always be valid
		AssetImportData = NewObject<UAssetImportData>(this, TEXT("AssetImportData"));
	}
#endif

	/* バージョンチェック */
	if (Ar.IsLoading()) {
		/* アーカイブのバージョンをチェック */
		int32 ArchiveVer = Ar.CustomVer(FAtomCueSheetVersion::GUID);

		/* 初期バージョン専用の処理 */
		if (ArchiveVer < FAtomCueSheetVersion::IncludeAcb) {
			// this import the ACB file to the archive
			SerializeACBFile(Ar);
		}

		/* Ver.1アセットはVer.2アセットに変換 */
		if (ArchiveVer < FAtomCueSheetVersion::IncludeAssetImportData) {
			UpdateAsset();
		}

		/* キューシート名がない場合は補完 */
		if (ArchiveVer < FAtomCueSheetVersion::StoreCueSheetName) {
			CueSheetName = GetFName().ToString();
		}

		/* スロット数がない場合は補完 */
		if (ArchiveVer < FAtomCueSheetVersion::StoreNumSlots) {
			NumSlots = -1;
		}
	}

	/* ACBデータのシリアライズ */
	RawData.Serialize(Ar, this);
}

bool USoundAtomCueSheet::BP_GetCueInfoFromIndex(int32 Index, FAtomCueInfo& CueInfo) const
{
	FScopeLock Lock(&CriticalSection);
	if (Index >= 0 && Index < CueInfos.Num()) {
		CueInfo = CueInfos[Index];
		return true;
	}
	CueInfo = FAtomCueInfo();
	return false;
}

bool USoundAtomCueSheet::BP_GetCueInfoFromName(const FString& Name, FAtomCueInfo& CueInfo) const
{
	FScopeLock Lock(&CriticalSection);
	for (auto Info : CueInfos) {
		if (Info.Name == Name) { CueInfo = Info; return true; }
	}
	CueInfo = FAtomCueInfo();
	return false;
}

bool USoundAtomCueSheet::BP_GetCueInfoFromId(int32 Id, FAtomCueInfo& CueInfo) const
{
	FScopeLock Lock(&CriticalSection);
	for (auto Info : CueInfos) {
		if (Info.Id == Id) { CueInfo = Info; return true; }
	}
	CueInfo = FAtomCueInfo();
	return false;
}

bool USoundAtomCueSheet::RegisterSoundAtomCue( USoundAtomCue* SoundAtomCue)
{
	if (IsValid(SoundAtomCue)) {
		auto Info = const_cast<FAtomCueInfo*>(GetCueInfoFromName(SoundAtomCue->CueName));
		if (Info) {
			Info->SoundAtomCues.AddUnique(SoundAtomCue);
			return true;
		}
	}
	return false;
}

bool USoundAtomCueSheet::UnregisterSoundAtomCue(USoundAtomCue* SoundAtomCue)
{
	if (IsValid(SoundAtomCue)) {
		auto Info = const_cast<FAtomCueInfo*>(GetCueInfoFromName(SoundAtomCue->CueName));
		if (Info) {
			Info->SoundAtomCues.Remove(SoundAtomCue);
			return true;
		}
	}
	return false;
}

#if WITH_EDITOR
void USoundAtomCueSheet::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	bool bIsRelative = FPaths::IsRelative(AwbDirectory.Path);
	if (bIsRelative == false) {
		FPaths::MakePathRelativeTo(AwbDirectory.Path, *FPaths::ProjectContentDir());
	}
	
	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

/* 旧バージョンデータの読み込み */
void USoundAtomCueSheet::SerializeACBFile(FArchive& Ar)
{
	UE_LOG(LogCriWareRuntime, Log, TEXT("Update Atom Cue Sheet asset. ACB file is imported to the archive. (%s)"), *GetFName().ToString());

	/* パス文字列のチェック */
	/* 注意）2013/10以前のACBアセットには本パラメータが含まれない。 */
	if (AcbFilePath_DEPRECATED.IsEmpty() == false) {
		/* ACBファイルパスを保存 */
		Ar << AcbFilePath_DEPRECATED;
	}

	/* ACBデータのチェック */
	/* 注意）2015/02以前のACBアセットには本パラメータが含まれない。 */
	if ((RawData.IsBulkDataLoaded()) && (RawData.GetElementSize() > 0)) {
		/* ACBデータの保存 */
		RawData.Serialize(Ar, this);
	}

	/* キューシート名の補完 */
	CueSheetName = GetFName().ToString();
}

void USoundAtomCueSheet::UpdateAsset()
{
	/* ACBファイルパスが指定されている場合はインポート用のパスとして使用。 */
	FString ResolvedSourceFilePath = AcbFilePath_DEPRECATED;
	if (AcbFilePath_DEPRECATED.IsEmpty() == false) {
		if ((ResolvedSourceFilePath.Contains(":") == false)
			&& (ResolvedSourceFilePath.StartsWith("/") == false)
			&& (ResolvedSourceFilePath.StartsWith("\\") == false)) {
			ResolvedSourceFilePath = FPaths::Combine(*UCriWareInitializer::GetContentDir(), *ResolvedSourceFilePath);

			/* 旧ACBファイルディレクトリをAWBファイルディレクトリに設定 */
			AwbDirectory.Path = ResolvedSourceFilePath;
			FPaths::MakePathRelativeTo(AwbDirectory.Path, *FPaths::ProjectContentDir());
		}

		/* AWBディレクトリの上書きを有効化 */
		bOverrideAwbDirectory = true;

		// delete deprecated path
		AcbFilePath_DEPRECATED.Empty();
	}

#if WITH_EDITORONLY_DATA
	/* 旧ACBファイルディレクトリパスを元にACBファイルパス名を特定 */
	/* 備考）ファイルが存在するかどうか不明なのでパス情報のみを更新。 */
	const FString FileName = GetName() + ".acb";
	ResolvedSourceFilePath = FPaths::Combine(*ResolvedSourceFilePath, *FileName);
	AssetImportData->UpdateFilenameOnly(ResolvedSourceFilePath);
#endif
}

static void CRIAPI criware_on_acb_released_func(void *obj)
{
	/* コンテキストの取得 */
	CriWareAcbContext* Context = (CriWareAcbContext*)obj;
	if (Context == nullptr) {
		return;
	}

	/* バインダの解放 */
	if (Context->Binder != NULL) {
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
	}

	/* リソースの解放 */
	if (Context->ResourceData != nullptr) {
		FMemory::Free(Context->ResourceData);
	}

	/* コンテキストの解放 */
	delete Context;

	/* 非同期処理の完了を通知 */
	UE_LOG(LogCriWareRuntime, Verbose, TEXT("Asynchronous release of Atom Cue Sheet is completed."));
}

#if WITH_EDITORONLY_DATA
void USoundAtomCueSheet::GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const
{
	if (AssetImportData) {
		/* AssetImportDta の内容を JSON 形式に変換してタグ付けする */
		/* これをやっておかないと FAutoReimportManager::ProcessModifications 関数の実行時にアセット情報を正しく認識してもらえない */
		OutTags.Add(
			FAssetRegistryTag(
				SourceFileTagName(), 
				AssetImportData->GetSourceData().ToJson(),
				FAssetRegistryTag::TT_Hidden
			)
		);
	}

	Super::GetAssetRegistryTags(OutTags);
}
#endif


#undef LOCTEXT_NAMESPACE
