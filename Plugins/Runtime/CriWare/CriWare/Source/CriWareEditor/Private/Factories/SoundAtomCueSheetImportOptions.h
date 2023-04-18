#pragma once

#include "CoreMinimal.h"
#include "CoreTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/ObjectMacros.h"

#include "CriWareApi.h"

#include "SoundAtomCueSheetImportOptions.generated.h"


class USoundAtomCue;

enum EAtomCueImportStatus
{
	NewCue,		/* New cue in cue sheet */
	ExistCue,	/* Unchanged, will be updated with last data */
	DeletedCue	/* No more existing cue */
};

/**
 * Item for ListView used in SoundAtomCueSheet import dialog.
 */
struct FAtomCueListItem
{
	struct FCueInfo
	{
		FTimespan Duration; // Duration of the cue
		bool bIsLooping; // Cue is looping
		bool bIs3D; // Cue is 3d sound (positionable)
		CriAtomExFormat Format; // Cue format
		int32 NumChannels; // Number of channel in cue
		int32 SamplingRate; // cue sampling rate
	};

	bool Selected; // selection status
	bool IsCueEntry; // type cue or asset
	FText CueName; // name of the cue
	int32 CueID; // ID of the cue
	FCueInfo CueInfo; // Info of the cue
	EAtomCueImportStatus ImportStatus; // Status of Cue asset with importing acb

	USoundAtomCue* CueAsset; // cue asset to update / temporary cue asset in preview, may be nullptr if new cue
	FString CueAssetName; // the current or new asset PackageName

	CriAtomExAcbHn AcbHn; // handle on importing acb, may be nullptr if deleted cue

	TArray<TSharedPtr<FAtomCueListItem>> Children; // child cue asset items list when building tree;

	// ctor for Cue entry
	FAtomCueListItem(bool InSelected, const FText& InCueName, int32 InCueID,
		EAtomCueImportStatus InImportStatus, CriAtomExAcbHn InAcbHn);

	// ctor for Asset entry
	FAtomCueListItem(bool InSelected, const FText& InCueName, EAtomCueImportStatus InImportStatus,
		USoundAtomCue* InCueAsset, FString InCueAssetName = FString());

	FText ToDisplayString() const;
	void GetStatusTextAndColor(FText& OutText, FColor& OutColor) const;
	void GetActionTextAndColor(FText& OutText, FColor& OutColor) const;

private:
	void GetCueInfo(FCueInfo& OutCueInfo) const;
};

UENUM()
enum class EAtomNewCuePresets : uint8
{
	Custom = 0,
	Create,
	DoNotCreate
};

UENUM()
enum class EAtomExistingCuePresets : uint8
{
	Custom = 0,
	Keep,
	Delete,
};

/**
  * Options for UAtomCueSheetFactory.
  */
UCLASS(Config = EditorPerProjectUserSettings, HideCategories = (DebugProperty))
class USoundAtomCueSheetImportOptions : public UObject
{
	GENERATED_BODY()

public:

	USoundAtomCueSheetImportOptions(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(Config)
	bool bOverrideAwbDirectory;

	UPROPERTY(Config)
	bool bUseAwbRoot;

	UPROPERTY(Transient)
	FString AwbDirectory;

	UPROPERTY(Config)
	bool bUseCueSheetNameAsPrefix;

	UPROPERTY(Config)
	FString AssetFilenamePrefix;

	UPROPERTY(Config)
	FString AssetFilenameSuffix;

	UPROPERTY(Config)
	FColor CueColor;

	UPROPERTY(Config)
	bool bEnableEconomicTick;

	UPROPERTY(Config)
	bool bEnableDistanceCulling;

	UPROPERTY(Config)
	EAtomNewCuePresets NewCuePreset;

	UPROPERTY(Config)
	EAtomExistingCuePresets ExistingCuePreset;

public:

	/** Package Name that where we import. */
	FString CueSheetPackageName;

	/** List of cues to be imported and selection. */
	TArray<TSharedPtr<FAtomCueListItem>> Items;

	/** Number of Atom wave binary files to import. */
	int32 NumAwbFiles;

	/** Is a reimport. */
	bool bIsAReimport;

	/** Whether to use or not the same options when loading multiple files. Default false */
	bool bUseSameOptions;
	
	/** UI - User clicked OK button. */
	bool OkClicked;

public:

	/** Whether to copy or not AWB all file. If not set, ask user. */
	TOptional<bool> bCopyAwbFiles;

	/** Whether to overwrite or not AWB all file. If not set, ask user. */
	TOptional<bool> bOverwriteAwbFiles;
	
public:

	/** */
	void Reset(bool bDefaults = false);
}; 
