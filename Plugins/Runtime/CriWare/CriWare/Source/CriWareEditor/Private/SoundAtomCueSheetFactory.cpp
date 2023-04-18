/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013-2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Factory of Atom Data
 * File     : SoundAtomCueSheetFactory.cpp
 *
 ****************************************************************************/

#include "SoundAtomCueSheetFactory.h"

#include "Editor.h"
#include "PropertyHandle.h"
#include "PackageTools.h"
#include "ObjectTools.h"
#include "Logging/MessageLog.h"
#include "Misc/UObjectToken.h"
#include "Misc/MessageDialog.h"
#include "Misc/FileHelper.h"
#include "SourceControlHelpers.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Dialogs/Dialogs.h"
#include "Dialogs/CustomDialog.h"
#include "Misc/MessageDialog.h"
#include "Runtime/Launch/Resources/Version.h"

#include "CriWareEditorPrivatePCH.h"
#include "CriWareInitializer.h"
#include "CriWarePluginSettings.h"
#include "CriWarePreviewer.h"
#include "SoundAtomCueSheet.h"
#include "SoundAtomCue.h"
#include "AtomComponent.h"
#include "SAtomCueSheetFactoryDialog.h"


#define LOCTEXT_NAMESPACE "SoundAtomCueSheetFactory"


USoundAtomCueSheetFactory::USoundAtomCueSheetFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, Options(NewObject<USoundAtomCueSheetImportOptions>(GetTransientPackage(), TEXT("Atom CueSheet Import Settings")))
{
	/* Content BrowserでACBファイルをImportできるようにする */
	Formats.Add(TEXT("acb;Atom CueSheet File"));

	/* バイナリとして読み込む */
	bText = false;
	bCreateNew = false;
	bEditorImport = true;
	bEditAfterNew = true;

	/* パラメータのリセット */
	CueSheet = nullptr;

	SupportedClass = USoundAtomCueSheet::StaticClass();
}

bool USoundAtomCueSheetFactory::ConfigureProperties()
{
	return true;
}

CriAtomExAcbHn USoundAtomCueSheetFactory::SyncLoadACBDataFromBuffer(UObject* InParent, const uint8*& Buffer, const uint8* BufferEnd)
{
	int DataSize = BufferEnd - Buffer;
	void* Data = const_cast<void*>(static_cast<const void*>(Buffer));
	CriAtomExAcbHn AcbHn = FCriWareApi::criAtomExAcb_LoadAcbData(Data, DataSize, nullptr, nullptr, nullptr, 0);

	/* エラーチェック */
	if (AcbHn == nullptr) {
		/* エラー発生時 */
		FString PackageName = InParent->GetOutermost()->GetName();
		FMessageDialog::Open(EAppMsgType::Ok,
			FText::Format(NSLOCTEXT("UnrealEd", "Error_ImportFailed_f", "Import failed for {0}"), FText::FromString(PackageName)));
		return nullptr;
	}

	return AcbHn;
}

TArray<TSoftObjectPtr<USoundAtomCue>> USoundAtomCueSheetFactory::GetExistingCueAssets(UObject* InParent, FString PackagePath)
{
	TArray<TSoftObjectPtr<USoundAtomCue>> Results;

	if (CueSheet) {
		for (int i = 0; i < CueSheet->GetNumCues(); i++) {
			const FAtomCueInfo* CueInfo = CueSheet->GetCueInfoFromIndex(i);
			if (CueInfo) {
				Results.Append(CueInfo->SoundAtomCues);
			}
		}
	}

	// remove empty/invalid entries
	Results.RemoveAll([](TSoftObjectPtr<USoundAtomCue> InCue) { return !InCue.Get(); });

	return Results;
}

void USoundAtomCueSheetFactory::SetupAwbOptions(CriAtomExAcbHn AcbHn)
{
	Options->NumAwbFiles = FCriWareApi::criAtomExAcb_GetNumAwbFileSlots(AcbHn);

	if (CueSheet)
	{
		if (!Options->bUseSameOptions)
		{
			// setup original path
			Options->bOverrideAwbDirectory = CueSheet->bOverrideAwbDirectory;
		}

		// keep original path
		Options->AwbDirectory = CueSheet->AwbDirectory.Path;
	}
}

bool USoundAtomCueSheetFactory::GetImportOptions(CriAtomExAcbHn AcbHn, TArray<TSoftObjectPtr<USoundAtomCue>> ExistingCues, bool bForceDialog)
{
	GetMutableDefault<UCriWarePluginSettings>()->LoadConfig();

	// generate cue items list if not existing yet
	if (Options->Items.Num() == 0)
	{
		// get cue info from ACB
		CriSint32 NumCues = FCriWareApi::criAtomExAcb_GetNumCues(AcbHn);

		bool bDefaultNewCue = Options->NewCuePreset == EAtomNewCuePresets::Create;
		bool bDefaultExistingCue = Options->ExistingCuePreset == EAtomExistingCuePresets::Keep;
		bool bDefaultDeletedCue = false; // by default always delete AtomCue assets of cues does not exist anymore in acb

		TMap<FString, TArray<USoundAtomCue*>> OldCues;
		for (auto Cue : ExistingCues)
		{
			if (Cue)
			{
				const FAtomCueInfo* CueInfo = Cue->GetCueInfo();
				if (CueInfo)
				{
					auto* List = OldCues.Find(CueInfo->Name);
					if (List)
					{
						List->Add(Cue.Get());
					} 
					else
					{
						TArray<USoundAtomCue*> NewList;
						NewList.Add(Cue.Get());
						OldCues.Add(CueInfo->Name, NewList);
					}
				}
			}
		}

		/* ACBファイルの情報を列挙 */
		for (int i = 0; i < NumCues; i++)
		{
			/* キュー情報の取得 */
			CriAtomExCueInfo AtomExCueInfo;
			CriBool bResult = FCriWareApi::criAtomExAcb_GetCueInfoByIndex(AcbHn, i, &AtomExCueInfo);
			if (bResult == CRI_FALSE)
			{
				UE_LOG(LogCriWareEditor, Error, TEXT("Failed to get cue information of '%s'."), UTF8_TO_TCHAR(AtomExCueInfo.name));
				continue;
			}

			/* プライベートキューを除外 */
			if (AtomExCueInfo.header_visibility == 0)
			{
				continue;
			}

			FString CueName = UTF8_TO_TCHAR(AtomExCueInfo.name);

			/* 「/」を含むキューを除外 */
			/* 備考）インゲームプレビュー用バイナリを使用すると、       */
			/* 　　　サブシンセが「/」を含むキュー名が出力されるため。  */
			int32 Index;
			if (CueName.FindChar('/', Index))
			{
				continue;
			}

			auto ImportStatus = EAtomCueImportStatus::NewCue;

			// add cue entry
			auto CueItem = MakeShared<FAtomCueListItem>(false, FText::FromString(CueName),
				AtomExCueInfo.id, ImportStatus, AcbHn);
			Options->Items.Add(CueItem);

			// check and remove same cue
			auto CueList = OldCues.Find(CueName);
			if (CueList)
			{
				ImportStatus = EAtomCueImportStatus::ExistCue;
				CueItem->ImportStatus = ImportStatus;

				// add existing asset entries
				for (auto Cue : *CueList)
				{
					CueItem->Children.Add(MakeShared<FAtomCueListItem>(bDefaultExistingCue, FText::FromString(CueName),
						ImportStatus, Cue));
					CueItem->Selected |= bDefaultExistingCue;
				}
				
				OldCues.Remove(CueName);
			}
			
			if (ImportStatus == EAtomCueImportStatus::NewCue)
			{
				// add new asset entry if new cue
				CueItem->Children.Add(MakeShared<FAtomCueListItem>(bDefaultNewCue, FText::FromString(CueName),
					ImportStatus, nullptr, CreateUniqueCueAssetPackageName(CueName)));
				CueItem->Selected |= bDefaultNewCue;
			}
		}

		// remaining cues are thoses that was deleted in acb
		for (auto CueInfoPair : OldCues)
		{
			// add cue entry
			auto CueItem = MakeShared<FAtomCueListItem>(bDefaultDeletedCue, FText::FromString(CueInfoPair.Key),
				CueInfoPair.Value[0]->GetCueInfo()->Id, EAtomCueImportStatus::DeletedCue, nullptr);
			Options->Items.Add(CueItem);

			// add existing asset entries
			for (auto Cue : CueInfoPair.Value)
			{
				CueItem->Children.Add(MakeShared<FAtomCueListItem>(bDefaultDeletedCue, FText::FromString(CueInfoPair.Key),
					EAtomCueImportStatus::DeletedCue, Cue));
			}
		}
	}

	// AWB file importation options
	SetupAwbOptions(AcbHn);

	// result 
	if (IsAutomatedImport())
	{
		Options->OkClicked = true;
	}
	else if (!Options->bUseSameOptions || bForceDialog)
	{
		// show dialog
		TSharedRef<SWindow> Window = SNew(SWindow)
			.Title(Options->bIsAReimport ?
				LOCTEXT("CreateAtomCueSheetFactoryReimportDialogTitle", "Reimport Atom Cue Sheet") :
				LOCTEXT("CreateAtomCueSheetFactoryImportDialogTitle", "Import Atom Cue Sheet"))
			.ClientSize(FVector2D(600, 700))
			.SupportsMinimize(false)
			.SupportsMaximize(false);


		Window->SetContent(SNew(SAtomCueSheetFactoryDialog, Options.Get(), Window));
		GEditor->EditorAddModalWindow(Window);
	}

	return Options->OkClicked;
}

// Get an unique name for a new asset that will be created
FString USoundAtomCueSheetFactory::CreateUniqueCueAssetPackageName(FString CueName)
{
	const FString& Prefix = Options->bUseCueSheetNameAsPrefix
		? FPaths::GetBaseFilename(Options->CueSheetPackageName) + TEXT("_") + Options->AssetFilenamePrefix
		: Options->AssetFilenamePrefix;
	const FString& Suffix = Options->AssetFilenameSuffix;
	const FString& BaseName = FPaths::GetPath(Options->CueSheetPackageName) / Prefix + CueName;
	
	FString PackageName;
	FString AssetName;

	FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");
	AssetToolsModule.Get().CreateUniqueAssetName(BaseName, Suffix, PackageName, AssetName);

	return PackageName;
}

UClass* USoundAtomCueSheetFactory::ResolveSupportedClass()
{
	return USoundAtomCueSheet::StaticClass();
}

void USoundAtomCueSheetFactory::PostInitProperties()
{
	Super::PostInitProperties();
}

void USoundAtomCueSheetFactory::BeginDestroy()
{
	Super::BeginDestroy();
}

UObject* USoundAtomCueSheetFactory::FactoryCreateBinary
(
	UClass*				Class,
	UObject*			InParent,
	FName				Name,
	EObjectFlags		Flags,
	UObject*			Context,
	const TCHAR*		FileType,
	const uint8*&		Buffer,
	const uint8*		BufferEnd,
	FFeedbackContext*	Warn,
	bool&				bOutOperationCanceled
)
{
	// Get ACB handle
	CriAtomExAcbHn AcbHn = SyncLoadACBDataFromBuffer(InParent, Buffer, BufferEnd);
	if (AcbHn == nullptr) {
		return nullptr;
	}

	FString PackagePath = FPackageName::GetLongPackagePath(InParent->GetOutermost()->GetName());
	Options->CueSheetPackageName = FPaths::Combine(PackagePath, Name.ToString());

	// seek for re-importaion of same acb file and get corresponding CueSheet 
	if (!CueSheet) {
		/* その他のケースでは念のため同名のアセットを検索 */  // (?)
		CueSheet = USoundAtomCueSheet::Find(*Name.ToString(), PackagePath, NULL);
	}

	// ensure we have access to cue info
	if (CueSheet) {
		CueSheet->MakeSureCueSheetIsLoaded();
		Options->bIsAReimport = true;
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION < 26
		Options->bUseSameOptions = false; // UFactory do not support this for reimport
#endif
	}

	// collect exsisting SoundAtomCue assets using this CueSheet
	auto ExistingAssets = GetExistingCueAssets(InParent, PackagePath);

	// show import options widget
	bool Result = GetImportOptions(AcbHn, ExistingAssets);

	// importation cancelled
	if (!Result)
	{
		bOutOperationCanceled = true;
		
		// clean
		FCriWareApi::criAtomExAcb_Release(AcbHn);
		CueSheet = nullptr;
		Options->Reset();
		
		return nullptr;
	}

	// copy AWB files to desired folder
	while (!ImportAwbFiles())
	{
		// go back to import window if not automated import else cancel import
		if (IsAutomatedImport() || !GetImportOptions(AcbHn, ExistingAssets, true))
		{
			if (!IsAutomatedImport())
			{
				bOutOperationCanceled = true;
			}

			// clean
			FCriWareApi::criAtomExAcb_Release(AcbHn);
			CueSheet = nullptr;
			Options->Reset();

			return nullptr;
		}
	}

	/* Atom Cue Sheetアセットが見つからない場合は新規に作成 */
	if (CueSheet == nullptr) {
		CueSheet = NewObject<USoundAtomCueSheet>(InParent, Name, Flags);
	}

	// Import ACB data to Asset

	/* ACB使用中は強制的にアンロード */
	CueSheet->ForceUnload();

	/* ACBデータをuasset内に取り込む */
	CueSheet->RawData.Lock(LOCK_READ_WRITE);
	void* LockedData = CueSheet->RawData.Realloc(BufferEnd - Buffer);
	FMemory::Memcpy(LockedData, Buffer, BufferEnd - Buffer);
	CueSheet->RawData.Unlock();

	/* ACBファイル情報の保存領域を確保 */
	if (CueSheet->AssetImportData == nullptr) {
		CueSheet->AssetImportData = NewObject<UAssetImportData>(CueSheet, TEXT("AssetImportData"));
	}

	/* ACBファイル再インポート用に情報を保存 */
	if (CueSheet->AssetImportData != nullptr) {
		CueSheet->AssetImportData->Update(CurrentFilename);
	}

	/* キューシート名の保存 */
	if (CueSheet->AssetImportData != nullptr && CueSheet->AssetImportData->SourceData.SourceFiles.Num() > 0) {
		FString AcbFilePath = CueSheet->AssetImportData->SourceData.SourceFiles[0].RelativeFilename;
		CueSheet->CueSheetName = FPaths::GetBaseFilename(AcbFilePath);
	};

	/* CueSheetName はこの後のキューのロード時に必要な情報なので注意 */
	if (CueSheet->CueSheetName.Len() <= 0) {
		CueSheet->CueSheetName = Name.ToString();
	}

	// update cue sheet
	CueSheet->MakeSureCueSheetIsLoaded();

	// generate selection
	/* === ACB内のキューの列挙 === */
	TArray<UObject*> AssetsToDelete;

	for (auto CueItem : Options->Items) {
		// import
		/* アセット名、パッケージ名の生成 */
		FString CueName = CueItem->CueName.ToString();

		for (auto Item : CueItem->Children) {
			/* 既存アセットの取得 */
			USoundAtomCue* CueAsset = Item->CueAsset;

			// create asset
			if (Item->ImportStatus == NewCue && Item->Selected) {
				check(CueAsset == nullptr);
	
				FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");
				FString AssetPackageName = CreateUniqueCueAssetPackageName(CueName);
				FString AssetName = FPackageName::GetShortName(AssetPackageName);
				FString AssetPackagePath = FPackageName::GetLongPackagePath(AssetPackageName);
				CueAsset = (USoundAtomCue*)AssetToolsModule.Get().CreateAsset(AssetName, AssetPackagePath, USoundAtomCue::StaticClass(), nullptr);
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 25
				// register to addtional imports
				AdditionalImportedObjects.Add(CueAsset);
#endif
			}

			// delete asset
			if ((Item->ImportStatus == DeletedCue && Item->Selected) ||
				(Item->ImportStatus == ExistCue && !Item->Selected)) {
				if (CueAsset) {
					AssetsToDelete.Add(CueAsset);
					continue;
				}
			}

			/* アセットの作成に成功したかどうかチェック */
			/* 注意）アセットの上書きを行わなかった（行えなかった）場合、NULLが返される。 */
			if (CueAsset == nullptr) {
				continue;
			}

			// serialize asset with cuesheet information
			bool bUpdated = false;

			/* キュー情報の保存 */
			if (CueAsset->CueSheet != CueSheet)
			{
				CueAsset->CueSheet = CueSheet;
				bUpdated = true;
			}

			if (CueAsset->CueName != CueName)
			{
				CueAsset->CueName = CueName;
				bUpdated = true;
			}

			if (Item->ImportStatus == NewCue)
			{
				if (CueAsset->CueColor != Options->CueColor)
				{
					CueAsset->CueColor = Options->CueColor;
					bUpdated = true;
				}

				if (Options->bEnableEconomicTick != CueAsset->IsEconomicTickEnabled()) {
					CueAsset->EnableEconomicTick(Options->bEnableEconomicTick);
					bUpdated = true;
				}

				if (Options->bEnableDistanceCulling != CueAsset->IsDistanceCullingEnabled()) {
					CueAsset->EnableDistanceCulling(Options->bEnableDistanceCulling);
					bUpdated = true;
				}
			}

			CueSheet->RegisterSoundAtomCue(CueAsset);

			/* キューアセットのプリセットを更新するため */
			CueAsset->PostInitProperties();

			CueAsset->TakeFirstWaveSnapshot();

			if (bUpdated) {
				CueAsset->MarkPackageDirty();
			}
		}
	}

	// delete asset list
	int32 NumAssetToDelete = AssetsToDelete.Num();
	if (NumAssetToDelete > 0) {
		// Delete the existing object
		bool bDeleteSucceeded = (ObjectTools::ForceDeleteObjects(AssetsToDelete, true) == NumAssetToDelete);

		if (bDeleteSucceeded) {
			// Force GC
			//CollectGarbage(GARBAGE_COLLECTION_KEEPFLAGS);
		} else {
			// failed to delete
			FMessageLog("CriWare").Error()
				->AddToken(FUObjectToken::Create(this))
				->AddToken(FTextToken::Create(
					LOCTEXT("CriWare_SoundAtomCueSheetFactory_CannotDeleteObjects", "Cue wasn't deleted.\n\nSome assets are referenced by other contents.")));
		}
	}

	// other ACB info for cuesheet 

	/* AWBスロット数の取得 */
	CueSheet->NumSlots = FCriWareApi::criAtomExAcb_GetNumAwbFileSlots(AcbHn);

	if (Options->bOverrideAwbDirectory)
	{
		CueSheet->bOverrideAwbDirectory = true;
		CueSheet->AwbDirectory.Path = Options->AwbDirectory;
	}

	/* ACBのリリース */
	FCriWareApi::criAtomExAcb_Release(AcbHn);

	/* Json読み込み部分 */
	if (!LoadAdditionalCueSheetDataFile()) {
		CueSheet->AdditionalData = nullptr;
	}

	USoundAtomCueSheet* OutCueSheet = CueSheet;

	// clean up this import
	CueSheet = nullptr;
	Options->Reset();

	return OutCueSheet;
}

void USoundAtomCueSheetFactory::CleanUp()
{
	// remove this flag
	Options->bUseSameOptions = false;

	// save for next usage
	Options->SaveConfig();

	Super::CleanUp();
}

bool USoundAtomCueSheetFactory::ImportAwbFiles()
{
	if (Options->NumAwbFiles <= 0)
	{
		return true;
	}

	// get the source file
	// current rule : ACB and AWB must have same name and be same place 
	// TODO: lets load any file from anywhere -> AWB Assets !
	const FString SrcAwbFile = FPaths::ChangeExtension(CurrentFilename, TEXT(".awb"));
	
	// get the destination directory
	// sanitize path
	FPaths::NormalizeDirectoryName(Options->AwbDirectory);
	FPaths::CollapseRelativeDirectories(Options->AwbDirectory);
	FPaths::RemoveDuplicateSlashes(Options->AwbDirectory);
	// make the final path
	const FString DestDir = FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir()) / Options->AwbDirectory;
	const FString DestAwbFile = DestDir / FPaths::GetCleanFilename(SrcAwbFile);

	bool bCopyFile = Options->bCopyAwbFiles.Get(false);
	bool bOverwriteFile = false;

	// check if ovewridding
	if (FPaths::FileExists(DestAwbFile))
	{
		bCopyFile = Options->bOverwriteAwbFiles.Get(false);
		bOverwriteFile = true;
	}

	// ask to user if not enforced
	if (!bCopyFile || !IsAutomatedImport())
	{
		bool bCancelByUser = false;
		bool bUseSameResultForAll = false;

		if (!bOverwriteFile)
		{
			FText MessageBoxTitle = LOCTEXT("AtomWaveBinaryImportCopyTitle", "Copy Atom Wave Binary File");
			FText MessageBoxContent = FText::Format(LOCTEXT("AtomWaveBinaryImportCopyWarning",
				"This Atom Wave Binary File needs to be copied into your project, would you like to copy the file now?"
				"\n"
				"\n\tFrom: {0}"
				"\n\tTo: {1}"),
				FText::FromString(SrcAwbFile), FText::FromString(DestDir)
			);

			// Show message box
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 24
			TSharedRef<SCustomDialog> ImportWarningDialog = SNew(SCustomDialog)
				.Title(MessageBoxTitle)
				.DialogContent(SNew(STextBlock).Text(MessageBoxContent))
				.Buttons({
					SCustomDialog::FButton(LOCTEXT("AtomWaveBinaryImport_Copy", "Copy")),
					SCustomDialog::FButton(LOCTEXT("AtomWaveBinaryImport_DontCopy", "Don't Copy")),
					SCustomDialog::FButton(LOCTEXT("AtomWaveBinaryImport_CopyAll", "Always Copy")),
					SCustomDialog::FButton(LOCTEXT("AtomWaveBinaryImport_DontCopyAll", "Never Copy")),
				});

			// returns 0 when OK is pressed, 5 when Cancel is pressed, -1 if the window is closed
			int Result = ImportWarningDialog->ShowModal();
			bCancelByUser = Result == -1;
			bCopyFile = Result == 0 || Result == 2;
			bUseSameResultForAll = Result == 2 || Result == 3;
#else
			auto Result = FMessageDialog::Open(EAppMsgType::YesNoYesAllNoAllCancel, MessageBoxContent, &MessageBoxTitle);
			bCancelByUser = Result == EAppReturnType::Type::Cancel;
			bCopyFile = Result == EAppReturnType::Type::Yes || Result == EAppReturnType::Type::YesAll;
			bUseSameResultForAll = Result == EAppReturnType::Type::YesAll || Result == EAppReturnType::Type::NoAll;
#endif
		}
		else
		{
			FText MessageBoxTitle = LOCTEXT("AtomWaveBinaryImportOverwriteTitle", "Copy Atom Wave Binary File");
			FText MessageBoxContent = FText::Format(LOCTEXT("AtomWaveBinaryImportOverwriteWarning",
				"This Atom Wave Binary File needs to be copied into your project, but the file already exist."
				"\n"
				"\nWould you like to overwrite the file now?"
				"\n"
				"\n\tFrom: {0}"
				"\n\tTo: {1}"),
				FText::FromString(SrcAwbFile), FText::FromString(DestDir)
			);

			// Show message box
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 24
			TSharedRef<SCustomDialog> ImportWarningDialog = SNew(SCustomDialog)
				.Title(MessageBoxTitle)
				.DialogContent(SNew(STextBlock).Text(MessageBoxContent))
				.Buttons({
					SCustomDialog::FButton(LOCTEXT("AtomWaveBinaryImport_Overwrite", "Overwrite")),
					SCustomDialog::FButton(LOCTEXT("AtomWaveBinaryImport_DontOverwrite", "Don't Overwrite")),
					SCustomDialog::FButton(LOCTEXT("AtomWaveBinaryImport_OverwriteAll", "Always Overwrite")),
					SCustomDialog::FButton(LOCTEXT("AtomWaveBinaryImport_DontOverwriteAll", "Never Overwrite")),
				});

			// returns 0 when OK is pressed, 5 when Cancel is pressed, -1 if the window is closed
			int Result = ImportWarningDialog->ShowModal();
			bCancelByUser = Result == -1;
			bCopyFile = Result == 0 || Result == 2;
			bUseSameResultForAll = Result == 2 || Result == 3;
#else
			auto Result = FMessageDialog::Open(EAppMsgType::YesNoYesAllNoAllCancel, MessageBoxContent, &MessageBoxTitle);
			bCancelByUser = Result == EAppReturnType::Type::Cancel;
			bCopyFile = Result == EAppReturnType::Type::Yes || Result == EAppReturnType::Type::YesAll;
			bUseSameResultForAll = Result == EAppReturnType::Type::YesAll || Result == EAppReturnType::Type::NoAll;
#endif
		}

		// Copy Cancelled
		if (bCancelByUser)
		{
			return false;
		}

		// Enforce result
		if (bUseSameResultForAll)
		{
			if (bOverwriteFile)
			{
				Options->bOverwriteAwbFiles = bCopyFile;
			}
			else
			{
				Options->bCopyAwbFiles = bCopyFile;
			}
		}
	}

	if (bCopyFile)
	{
		// check if AWB file exist
		if (!FPaths::FileExists(SrcAwbFile))
		{
			if (!IsAutomatedImport()) { Options->bCopyAwbFiles.Reset(); }

			FNotificationInfo FailureInfo(FText::FromString(FString(TEXT("AWB File Not Found."))));
			FailureInfo.ExpireDuration = 3.0f;
			FSlateNotificationManager::Get().AddNotification(FailureInfo);
			return false;
		}

		if (bOverwriteFile && IsValid(CueSheet))
		{
			CueSheet->ForceUnload(false);
		}

		// copy the file
		FText FailReason;

		if (!SourceControlHelpers::CopyFileUnderSourceControl(DestAwbFile, SrcAwbFile, LOCTEXT("AWBFileDescription", "sound"), FailReason))
		{
			if (!IsAutomatedImport()) { Options->bCopyAwbFiles.Reset(); }

			FNotificationInfo FailureInfo(FailReason);
			FailureInfo.ExpireDuration = 3.0f;
			FSlateNotificationManager::Get().AddNotification(FailureInfo);
			return false;
		}
	}

	return true;
}

bool USoundAtomCueSheetFactory::LoadAdditionalCueSheetDataFile()
{
	if (!CueSheet || !CueSheet->AssetImportData)
	{
		return false;
	}
	
	// get json file location from cuesheet source file location if exist 
	FString Filename = CueSheet->AssetImportData->GetFirstFilename();
	if (Filename.IsEmpty())
	{
		return false;
	}

	// get json file if exist
	FString JsonFilename = FPaths::Combine(FPaths::GetPath(Filename), FPaths::GetBaseFilename(Filename) + TEXT("_acb.json"));
	
	if (FPaths::FileExists(JsonFilename))
	{
		FString JsonText;
		bool bLoadSuccess = FFileHelper::LoadFileToString(JsonText, *JsonFilename);
		if (bLoadSuccess && !JsonText.IsEmpty())
		{
			// create data table to hold json data
			const FString Suffix = TEXT("_AddtionalDataTable");
			FString PackageName;
			FString AssetName;

			FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");
			AssetToolsModule.Get().CreateUniqueAssetName(Options->CueSheetPackageName, Suffix, PackageName, AssetName);

			// create a new dtaa table for this json 
			UDataTable* NewDataTable = NewObject<UDataTable>(CueSheet, *AssetName);
			if (!NewDataTable)
			{
				UE_LOG(LogCriWareEditor, Error, TEXT("Failed to create DataTable for file '%s'."), *JsonFilename);
				return false;
			}

			// setup asset import data
			if (NewDataTable->AssetImportData != nullptr)
			{
				NewDataTable->AssetImportData->Update(JsonFilename);
			}

			// load json to data table
			NewDataTable->RowStruct = FAtomCueSheetDataTable::StaticStruct();
			auto ReadErrors = NewDataTable->CreateTableFromJSONString(JsonText);

			// log errors
			if (ReadErrors.Num() != 0)
			{
				const int32 MaxLen = 20;
				UE_LOG(LogCriWareEditor, Error, TEXT("CreateTableFromJSONString failed for text \"%s\""), (JsonText.Len() > MaxLen ? *(JsonText.Left(MaxLen) + TEXT("...")) : *JsonText));
				for (const FString& ReadError : ReadErrors)
				{
					UE_LOG(LogCriWareEditor, Error, TEXT("%s"), *ReadError);
				}
				return false;
			}

			// store to cue sheet
			CueSheet->AdditionalData = NewDataTable;

			// success
			return true;
		}

		UE_LOG(LogCriWareEditor, Error, TEXT("Failed to load json file '%s'."), *JsonFilename);
	}

	return false;
}


//~ Begin FReimportHandler interface

bool USoundAtomCueSheetFactory::CanReimport(UObject* Obj, TArray<FString>& OutFilenames)
{
	USoundAtomCueSheet* AcbObject = Cast<USoundAtomCueSheet>(Obj);

	if (AcbObject && AcbObject->AssetImportData) {
		AcbObject->AssetImportData->ExtractFilenames(OutFilenames);
		return true;
	}

	return false;
}

void USoundAtomCueSheetFactory::SetReimportPaths(UObject* Obj, const TArray<FString>& NewReimportPaths)
{
	USoundAtomCueSheet* AcbObject = Cast<USoundAtomCueSheet>(Obj);
	if (AcbObject && ensure(NewReimportPaths.Num() == 1)) {
		AcbObject->AssetImportData->UpdateFilenameOnly(NewReimportPaths[0]);
	}
}

EReimportResult::Type USoundAtomCueSheetFactory::Reimport(UObject* Obj)
{
	/* プレビューを停止 */
	GCriWarePreviewer->StopPreviewSound();

	/* インポート情報の取得 */
	// Only handle valid atom cue sheet waves
	if (!Obj || !Obj->IsA(USoundAtomCueSheet::StaticClass())) {
		return EReimportResult::Failed;
	}

	CueSheet = Cast<USoundAtomCueSheet>(Obj);
	check(CueSheet);

	/* ファイルパスの作成 */
	if (!CueSheet->AssetImportData) {
		return EReimportResult::Failed;
	}

	FString ResolvedSourceFilePath = CueSheet->AssetImportData->GetFirstFilename();
	if (ResolvedSourceFilePath.IsEmpty()) {
		return EReimportResult::Failed;
	}

	UE_LOG(LogCriWareEditor, Log, TEXT("Performing atomic reimport of [%s]"), *ResolvedSourceFilePath);

	/* ファイルの有無をチェック */
	if (IFileManager::Get().FileSize(*ResolvedSourceFilePath) == INDEX_NONE) {
		UE_LOG(LogCriWareEditor, Error, TEXT("Cannot reimport: source file cannot be found."));
		return EReimportResult::Failed;
	}

	/* アセットの差し替え */
	bool bCancelled = false;
	UObject* ResultObject = ImportObject(CueSheet->GetClass(), CueSheet->GetOuter(), *CueSheet->GetName(),
		RF_Public | RF_Standalone, *ResolvedSourceFilePath, nullptr, bCancelled);

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION < 26
	// force cleanup at each re-import: before 4.26 any CleanUp function are called on reimport.
	CleanUp();
#endif

	CueSheet = Cast<USoundAtomCueSheet>(ResultObject);

	// check results
	if (!CueSheet) {
		if (bCancelled) {
			UE_LOG(LogCriWareEditor, Warning, TEXT("-- import canceled"));
			return EReimportResult::Cancelled;
		}

		UE_LOG(LogCriWareEditor, Warning, TEXT("-- import failed"));
		return EReimportResult::Failed;
	}

	UE_LOG(LogCriWareEditor, Log, TEXT("-- imported successfully"));

	// Try to find the outer package so we can dirty it up
	if (CueSheet->GetOuter()) {
		CueSheet->GetOuter()->MarkPackageDirty();
	}
	else {
		CueSheet->MarkPackageDirty();
	}

	/* 参照の破棄 */
	CueSheet = nullptr;

	return EReimportResult::Succeeded;
}

//~ End FReimportHandler interface

#undef LOCTEXT_NAMESPACE
