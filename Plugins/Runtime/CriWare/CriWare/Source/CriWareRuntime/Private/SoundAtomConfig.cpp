/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2015-2017 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom Config File
 * File     : SoundAtomConfig.cpp
 *
 ****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* モジュールヘッダ */
#include "SoundAtomConfig.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareRuntimePrivatePCH.h"

/* Unreal Engine 4関連ヘッダ */
#include "UObject/Package.h"
#include "Misc/Paths.h"

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/
#define LOCTEXT_NAMESPACE "SoundAtomConfig"

/***************************************************************************
 *      処理マクロ
 *      Macro Functions
 ***************************************************************************/

/***************************************************************************
 *      データ型宣言
 *      Data Type Declarations
 ***************************************************************************/
/* バージョン番号 */
namespace SoundAtomConfig
{
	enum Type
	{
		/* バージョン番号が付与される前 */
		BeforeCustomVersionWasAdded = 0,

		/* UAssetImportDataによるアセット管理に対応 */
		IncludeAssetImportData,

		/* 最新バージョンの番号を取得するための番兵 */
		VersionPlusOne,

		/* 最新バージョンの番号を指す */
		LatestVersion = VersionPlusOne - 1,
	};
}

/***************************************************************************
 *      変数宣言
 *      Prototype Variables
 ***************************************************************************/

/***************************************************************************
 *      クラス宣言
 *      Prototype Classes
 ***************************************************************************/

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/***************************************************************************
 *      変数定義
 *      Variable Definition
 ***************************************************************************/
/* バージョン番号 */
const int32 FAtomConfigVersion::AssetVersion = SoundAtomConfig::LatestVersion;

/* GUID */
const FGuid FAtomConfigVersion::AssetGuid(0x5E386D6A, 0xA41D11E7, 0xB7FFF832, 0xE49EFF0B);

/* バージョン登録 */
FCustomVersionRegistration GAtomConfigVersion(
	FAtomConfigVersion::AssetGuid, FAtomConfigVersion::AssetVersion, TEXT("AtomConfigAssetVersion"));

/***************************************************************************
 *      クラス定義
 *      Class Definition
 ***************************************************************************/
FAtomCategoryInfoParam::FAtomCategoryInfoParam()
: Name(""),
category_id(0),
group_no(0),
volume(1.0),
isPaused(false)
{
}

USoundAtomConfig::USoundAtomConfig(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
#if WITH_EDITOR
	/* Localization of unreal properties metadata with LOCTEXT markups and reflection */
	CRI_LOCCLASS(GetClass());
#endif
}

USoundAtomConfig* USoundAtomConfig::LoadAcfAsset(FString AcfFileName)
{
	/* パスの分解 */
	FString FileDir, FileName, FileExt;
	FPaths::Split(AcfFileName, FileDir, FileName, FileExt);

	/* 拡張子を含まないフルパスを作成 */
	FString PackageName;
	if (FPaths::IsRelative(AcfFileName)) {
		PackageName = "/Game/" + FileDir + "/" + FileName;
	} else {
		PackageName = FileDir + "/" + FileName;
	}

	/* 「/」の重複を回避 */
	/* 注意）「/」の重複があるとLoadObject内で例外が発生する。 */
	FPaths::RemoveDuplicateSlashes(PackageName);

	/* ACFアセットのロード */
	/* 備考）UE4.8以降は以下の処理だけでアセットがロードできる模様。 */
	USoundAtomConfig* AcfObject = LoadObject<USoundAtomConfig>(NULL, *PackageName);

	/* LoadObject失敗時（UE4.7以前）は別の方法でロードを試みる */
	if (AcfObject == NULL) {
		/* パッケージのロード */
		UPackage* Package = LoadPackage(NULL, *PackageName, 0);
		if (Package != NULL) {
			/* パッケージが完全にロード済みかどうかチェック */
			bool IsLoaded = Package->IsFullyLoaded();
			if (IsLoaded == false) {
				/* 完全にロードされていない場合はロード */
				Package->FullyLoad();
			}

			/* ACFアセットの取得 */
			AcfObject = FindObject<USoundAtomConfig>(Package, *FileName);
		}
	}

	/* エラーチェック */
	if (AcfObject == NULL) {
		UE_LOG(LogCriWareRuntime, Error, TEXT("Could not load uasset %s."), *PackageName);
		return NULL;
	}

	return AcfObject;
}

TArray<FAtomCategoryInfoParam> USoundAtomConfig::GetCategoryInfoArray()
{
	TArray<FAtomCategoryInfoParam> category_info_array;
	FAtomCategoryInfoParam tmp_parm;

	int32 num_category = criAtomExAcf_GetNumCategories();
	for (int32 iter = 0; iter < num_category; iter++) {
		CriAtomExCategoryInfo info;
		if (criAtomExAcf_GetCategoryInfo(iter, &info) == CRI_TRUE) {
			tmp_parm.Name = info.name;
			tmp_parm.category_id = info.id;
			tmp_parm.group_no = info.group_no;
			tmp_parm.volume = info.volume;
			tmp_parm.isPaused = (criAtomExCategory_IsPausedByName(info.name) == CRI_TRUE);
			category_info_array.Add(tmp_parm);
		}
	}
	return category_info_array;
}

void USoundAtomConfig::PostInitProperties()
{
#if WITH_EDITORONLY_DATA
	if (!HasAnyFlags(RF_ClassDefaultObject)) {
		AssetImportData = NewObject<UAssetImportData>(this, TEXT("AssetImportData"));
	}
#endif

	Super::PostInitProperties();
}

void USoundAtomConfig::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);

	/* アセットバージョンの使用を通知 */
	Ar.UsingCustomVersion(FAtomConfigVersion::AssetGuid);

#if WITH_EDITORONLY_DATA
	if ((Ar.IsLoading()) && (AssetImportData == nullptr)) {
		// AssetImportData should always be valid
		AssetImportData = NewObject<UAssetImportData>(this, TEXT("AssetImportData"));
	}
#endif

	/* バージョンチェック */
	if (Ar.IsLoading()) {
		/* アーカイブのバージョンをチェック */
		int32 ArchiveVer = Ar.CustomVer(FAtomConfigVersion::AssetGuid);

		/* 初期バージョン専用の処理 */
		if (ArchiveVer < SoundAtomConfig::IncludeAssetImportData) {
#if WITH_EDITORONLY_DATA
			/* 旧バージョンではアセットパスがAcfFilePathに格納されている */
			AssetImportData->UpdateFilenameOnly(AcfFilePath);
#endif
		}
	}

	/* ACFデータのシリアライズ */
	RawData.Serialize(Ar, this);
}

#if WITH_EDITORONLY_DATA
void USoundAtomConfig::GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const
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
/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/
#undef LOCTEXT_NAMESPACE

/* --- end of file --- */
