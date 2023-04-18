/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2015-2017 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Factory of Atom Config File
 * File     : AtomConfigFactory.cpp
 *
 ****************************************************************************/

#include "AtomConfigFactory.h"

#include "PackageTools.h"
#include "HAL/FileManager.h"
#include "EditorFramework/AssetImportData.h"

#include "CriWareEditorPrivatePCH.h"
#include "CriWareInitializer.h"
#include "SoundAtomConfig.h"
#include "AssetTypeActions_SoundAtomConfig.h"


#define LOCTEXT_NAMESPACE "AtomConfigFactory"


bool UAtomConfigFactory::bIsActionRegistered = false;


UAtomConfigFactory::UAtomConfigFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	/* Content BrowserでACFファイルをImportできるようにする */
	Formats.Add(TEXT("acf;Atom Config File"));

	/* バイナリとして読み込む */
	bText = false;
	bCreateNew = false;
	bEditorImport = true;

	SupportedClass = USoundAtomConfig::StaticClass();
}

void UAtomConfigFactory::PostInitProperties()
{
	Super::PostInitProperties();

	/* アクションの登録 */
	if (UAtomConfigFactory::bIsActionRegistered == false) {
		FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");
		AssetToolsModule.Get().RegisterAssetTypeActions(MakeShareable(new FAssetTypeActions_SoundAtomConfig));
		UAtomConfigFactory::bIsActionRegistered = true;
	}
}

void UAtomConfigFactory::BeginDestroy()
{
	Super::BeginDestroy();
}

UObject* UAtomConfigFactory::FactoryCreateBinary
(
	UClass*				Class,
	UObject*			InParent,
	FName				Name,
	EObjectFlags		Flags,
	UObject*			Context,
	const TCHAR*		FileType,
	const uint8*&		Buffer,
	const uint8*		BufferEnd,
	FFeedbackContext*	Warn
)
{
	/* ACFオブジェクトの作成 */
	USoundAtomConfig* AcfObject = NewObject<USoundAtomConfig>(InParent, Name, Flags);

	/* データを別のメモリ領域にコピー */
	/* 備考）メモリ領域がconstなのでそのままではロードできないため。 */
	FByteBulkData RawData;
	RawData.Lock(LOCK_READ_WRITE);
	void* LockedData = RawData.Realloc(BufferEnd - Buffer);
	FMemory::Memcpy(LockedData, Buffer, BufferEnd - Buffer);
	RawData.Unlock();

	/* ACFデータをuasset内に取り込み */
	AcfObject->RawData.Lock(LOCK_READ_WRITE);
	LockedData = AcfObject->RawData.Realloc(BufferEnd - Buffer);
	FMemory::Memcpy(LockedData, Buffer, BufferEnd - Buffer);
	AcfObject->RawData.Unlock();

	/* ACBファイル情報の保存領域を確保 */
	if(AcfObject->AssetImportData == nullptr) {
		AcfObject->AssetImportData = NewObject<UAssetImportData>(AcfObject, TEXT("AssetImportData"));
	}

	/* ACBファイル再インポート用に情報を保存 */
	if (AcfObject->AssetImportData != nullptr) {
		AcfObject->AssetImportData->Update(CurrentFilename);
	}

	return AcfObject;
}

bool UAtomConfigFactory::CanReimport(UObject* Obj, TArray<FString>& OutFilenames)
{
	USoundAtomConfig* AcfObject = Cast<USoundAtomConfig>(Obj);

	if (AcfObject && AcfObject->AssetImportData) {
		AcfObject->AssetImportData->ExtractFilenames(OutFilenames);
		return true;
	}

	return false;
}

void UAtomConfigFactory::SetReimportPaths(UObject* Obj, const TArray<FString>& NewReimportPaths)
{
}

EReimportResult::Type UAtomConfigFactory::Reimport(UObject* Obj)
{
	USoundAtomConfig* AcfObject = Cast<USoundAtomConfig>(Obj);
	if (!AcfObject) {
		return EReimportResult::Failed;
	}

	/* ファイルパスの作成 */
	FString ResolvedSourceFilePath = AcfObject->AssetImportData->GetFirstFilename();
	if (!ResolvedSourceFilePath.Len()) {
		return EReimportResult::Failed;
	}

	UE_LOG(LogCriWareEditor, Log, TEXT("Performing atomic reimport of [%s]"), *ResolvedSourceFilePath);

	/* 相対パスを絶対パスに変換 */
	bool bIsRelative = FPaths::IsRelative(ResolvedSourceFilePath);
	if (bIsRelative != false) {
		ResolvedSourceFilePath = FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir(), ResolvedSourceFilePath);
	}

	/* ファイルの有無をチェック */
	if (IFileManager::Get().FileSize(*ResolvedSourceFilePath) == INDEX_NONE) {
		UE_LOG(LogCriWareEditor, Warning, TEXT("Cannot reimport: source file cannot be found."));
		return EReimportResult::Failed;
	}

	if (UFactory::StaticImportObject(AcfObject->GetClass(), AcfObject->GetOuter(), *AcfObject->GetName(),
		RF_Public | RF_Standalone, *ResolvedSourceFilePath, NULL, this)) {
		UE_LOG(LogCriWareEditor, Log, TEXT("Imported successfully"));
		// Try to find the outer package so we can dirty it up
		if (AcfObject->GetOuter()) {
			AcfObject->GetOuter()->MarkPackageDirty();
		}
		else {
			AcfObject->MarkPackageDirty();
		}
	}
	else {
		UE_LOG(LogCriWareEditor, Warning, TEXT("-- import failed"));
		return EReimportResult::Failed;
	}

	if (AcfObject != nullptr) {
		/* ACFを解放 */
		FCriWareApi::criAtomEx_UnregisterAcf();

		FMemory::Free(UCriWareInitializer::AcfData);
		UCriWareInitializer::AcfData = nullptr;

		/* ACFデータの取得 */
		int32 AcfDataSize = AcfObject->RawData.GetBulkDataSize();
		AcfObject->RawData.GetCopy((void**)&UCriWareInitializer::AcfData, false);

		/* ACFを再登録 */
		FCriWareApi::criAtomEx_RegisterAcfData(UCriWareInitializer::AcfData, AcfDataSize, NULL, 0);
		UE_LOG(LogCriWareEditor, Display, TEXT("Atom Config is updated."));
	}

	/* ACFアセットの参照の更新 */
	UCriWareInitializer::AcfAssetReference = FSoftObjectPath(AcfObject);

	return EReimportResult::Succeeded;
}

#undef LOCTEXT_NAMESPACE
