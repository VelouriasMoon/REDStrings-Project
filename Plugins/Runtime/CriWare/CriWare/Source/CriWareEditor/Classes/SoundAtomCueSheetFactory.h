/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013-2020 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : CriWareEditor
 * File     : AtomFactory.h
 *
 ****************************************************************************/

#pragma once

#include "Factories/Factory.h"
#include "EditorReimportHandler.h"
#include "UObject/StrongObjectPtr.h"
#include "../Launch/Resources/Version.h"

#include "CriWareApi.h"
#include "Factories/SoundAtomCueSheetImportOptions.h"

#include "SoundAtomCueSheetFactory.generated.h"

class USoundAtomCueSheet;
class USoundAtomCue;

 /**
  * Factory for AtomCueSheet and AtomCue from ACB file.
  */
UCLASS(hidecategories=Object)
class USoundAtomCueSheetFactory : public UFactory, public FReimportHandler
{
	GENERATED_BODY()

public:
	USoundAtomCueSheetFactory(const FObjectInitializer& ObjectInitializer);

	//~ Begin UFactory Interface
	virtual bool ConfigureProperties() override;
	virtual UClass* ResolveSupportedClass() override;
	virtual UObject* FactoryCreateBinary(
		UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, const TCHAR* Type, 
		const uint8*& Buffer, const uint8* BufferEnd, FFeedbackContext* Warn, bool& bOutOperationCanceled) override;
	virtual void CleanUp() override;
	//~ End UFactory Interface

	//~ Begin FReimportHandler interface
	virtual bool CanReimport(UObject* Obj, TArray<FString>& OutFilenames) override;
	virtual void SetReimportPaths(UObject* Obj, const TArray<FString>& NewReimportPaths) override;
	virtual EReimportResult::Type Reimport(UObject* Obj) override;
	virtual const UObject* GetFactoryObject() const override { return this; }
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 26
	virtual void PostImportCleanUp() override { CleanUp(); }
#endif
	//~ End FReimportHandler interface

	//~ Begin UObject interface.
	virtual void PostInitProperties() override;
	virtual void BeginDestroy() override;
	//~ End  UObject interface

protected:
	/* 再インポート直前のオブジェクト */
	UPROPERTY(Transient)
	class USoundAtomCueSheet* CueSheet;

private:
	/** User options with import dialog. */
	TStrongObjectPtr<USoundAtomCueSheetImportOptions> Options;

	/** Load ACB data from a buffer. */
	CriAtomExAcbHn SyncLoadACBDataFromBuffer(UObject* InParent, const uint8*& Buffer, const uint8* BufferEnd);
	
	/** Retrive SoundAtomCue assets used when reimporting this SoundAtomCueSheet. */
	TArray<TSoftObjectPtr<USoundAtomCue>> GetExistingCueAssets(UObject* InParent, FString PackagePath);

	/** Setup options for AWB file importation. */
	void SetupAwbOptions(CriAtomExAcbHn AcbHn);
	
	/** Show import modal dialog and return user options. */
	bool GetImportOptions(CriAtomExAcbHn AcbHn, TArray<TSoftObjectPtr<USoundAtomCue>> ExistingCues, bool bForceDialog = false);
	
	/** Create a unique name for a SoundAtomCue from a cue name. */
	FString CreateUniqueCueAssetPackageName(FString CueName);

	/** Load and add additional information for cue sheet and cues from a Json file. */
	bool LoadAdditionalCueSheetDataFile();

	/** Show a modal box to import or move AWB files to desired folder. */
	bool ImportAwbFiles();
};
