

#include "SoundAtomCueSheetImportOptions.h"

#include "SoundAtomCueSheet.h"
#include "SoundAtomCue.h"


#define LOCTEXT_NAMESPACE "SoundAtomCueSheetFactory"


// ctor for Cue entry
FAtomCueListItem::FAtomCueListItem(bool InSelected, const FText& InCueName, int32 InCueID,
	EAtomCueImportStatus InImportStatus, CriAtomExAcbHn InAcbHn)
	: Selected(InSelected)
	, IsCueEntry(true)
	, CueName(InCueName)
	, CueID(InCueID)
	, ImportStatus(InImportStatus)
	, CueAsset(nullptr)
	, AcbHn(InAcbHn)
{
	check(InAcbHn != nullptr || InImportStatus == EAtomCueImportStatus::DeletedCue);

	GetCueInfo(CueInfo);
}

// ctor for Asset entry
FAtomCueListItem::FAtomCueListItem(bool InSelected, const FText& InCueName, EAtomCueImportStatus InImportStatus,
	USoundAtomCue* InCueAsset, FString InCueAssetName /* = FString() */)
	: Selected(InSelected)
	, IsCueEntry(false)
	, CueName(InCueName)
	, CueID(-1)
	, ImportStatus(InImportStatus)
	, CueAsset(InCueAsset)
	, CueAssetName(InCueAssetName)
	, AcbHn(nullptr)
{
	check(InCueAsset != nullptr || InImportStatus == EAtomCueImportStatus::NewCue);

	GetCueInfo(CueInfo);

	if (InCueAssetName.IsEmpty() && InCueAsset)
	{
		CueAssetName = InCueAsset->GetOutermost()->GetName();
	}
}

void FAtomCueListItem::GetCueInfo(FCueInfo& OutCueInfo) const
{
	CriAtomExAcbHn Handle = nullptr;
	if (IsCueEntry && AcbHn)
	{
		Handle = AcbHn;
	}
	else if (CueAsset && CueAsset->CueSheet)
	{
		Handle = CueAsset->CueSheet->GetAcbHn();
	}

	if (Handle)
	{
		CriAtomExCueInfo AcbCueInfo;
		CriBool bCueResult = FCriWareApi::criAtomExAcb_GetCueInfoByName(AcbHn, TCHAR_TO_UTF8(*CueName.ToString()), &AcbCueInfo);
		if (bCueResult != CRI_FALSE)
		{
			if (AcbCueInfo.length < 0)
			{
				OutCueInfo.Duration = FTimespan::Zero();
				OutCueInfo.bIsLooping = true;
			}
			else
			{
				OutCueInfo.Duration = FTimespan::FromMilliseconds(AcbCueInfo.length);
				OutCueInfo.bIsLooping = false;
			}
			OutCueInfo.bIs3D = AcbCueInfo.pan_type == CriAtomExPanType::CRIATOMEX_PAN_TYPE_3D_POS;
		}

		// Get more precise infos
		CriAtomExWaveformInfo WaveformInfo;
		CriBool bWaveResult = FCriWareApi::criAtomExAcb_GetWaveformInfoByName(AcbHn, TCHAR_TO_UTF8(*CueName.ToString()), &WaveformInfo);
		if (bWaveResult != CRI_FALSE)
		{
			if (WaveformInfo.sampling_rate == 0)
			{
				OutCueInfo.Duration = FTimespan::Zero();
			}
			else
			{
				OutCueInfo.Duration = FTimespan::FromSeconds(static_cast<float>(WaveformInfo.num_samples) / WaveformInfo.sampling_rate);
			}
			OutCueInfo.Format = WaveformInfo.format;
			OutCueInfo.NumChannels = WaveformInfo.num_channels;
			OutCueInfo.SamplingRate = WaveformInfo.sampling_rate;
		}
	}
}

FText FAtomCueListItem::ToDisplayString() const
{
	FTextBuilder TextBuilder;
	if (!IsCueEntry)
	{
		FString AssetPath = CueAsset ? CueAsset->GetPathName() : CueAssetName;
		TextBuilder.AppendLineFormat(LOCTEXT("CueAsset", "SoundAtomCue Asset: {0}"), FText::FromString(AssetPath));
	}
	else
	{
		TextBuilder.AppendLineFormat(LOCTEXT("CueName", "Cue Name: {0}"), CueName);
		TextBuilder.AppendLineFormat(LOCTEXT("CueID", "Cue ID: {0}"), CueID);
		TextBuilder.AppendLineFormat(LOCTEXT("CueDuration", "Duration: {0}"), FText::FromString(CueInfo.Duration.ToString(TEXT("%h:%m:%s.%f"))));
		TextBuilder.AppendLineFormat(LOCTEXT("CueLoop", "Loop: {0}"), CueInfo.bIsLooping ? LOCTEXT("Loop", "Loop") : LOCTEXT("OneShot", "OneShot"));
		TextBuilder.AppendLineFormat(LOCTEXT("Cue3D", "3D Positionable: {0}"), CueInfo.bIs3D ? LOCTEXT("False", "False") : LOCTEXT("True", "True"));
		TextBuilder.AppendLineFormat(LOCTEXT("CueDetails", "Details: {0} channels, {1} Hz"), CueInfo.NumChannels, CueInfo.SamplingRate);
	}
	return TextBuilder.ToText();
}

void FAtomCueListItem::GetStatusTextAndColor(FText& OutText, FColor& OutColor) const
{
	if (ImportStatus == EAtomCueImportStatus::NewCue)
	{
		OutText = LOCTEXT("NewCueLabel", "New");
		OutColor = FColor(122, 167, 240);
	}
	else if (ImportStatus == EAtomCueImportStatus::ExistCue)
	{
		OutText = LOCTEXT("ExistCueLabel", "Exist");
		OutColor = FColor(140, 230, 149);
	}
	else
	{
		OutText = LOCTEXT("DeletedCueLabel", "Deleted");
		OutColor = FColor(237, 183, 74);
	}
}

void FAtomCueListItem::GetActionTextAndColor(FText& OutText, FColor& OutColor) const
{
	bool ItemSelected = Selected;

	if (Children.Num() > 0)
	{
		ItemSelected = Children[0]->Selected;
		for (auto Child : Children)
		{
			if (ItemSelected != Child->Selected)
			{
				OutText = FText::FromName(TEXT("-"));
				OutColor = FColor::White;
				return;
			}
		}
	}

	if (ImportStatus == EAtomCueImportStatus::NewCue && ItemSelected)
	{
		OutText = LOCTEXT("CreateCueLabel", "Create");
		OutColor = FColor(122, 167, 240);
	}
	else if (ImportStatus == EAtomCueImportStatus::ExistCue && ItemSelected)
	{
		OutText = LOCTEXT("KeepCueLabel", "Keep");
		OutColor = FColor(140, 230, 149);
	}
	else if ((ImportStatus == EAtomCueImportStatus::ExistCue && !ItemSelected) ||
		(ImportStatus == EAtomCueImportStatus::DeletedCue && ItemSelected))
	{
		OutText = LOCTEXT("DeleteCueLabel", "Delete");
		OutColor = FColor(237, 78, 78);
	}
	else
	{
		OutText = FText::GetEmpty();
		OutColor = FColor::Transparent;
	}
}

USoundAtomCueSheetImportOptions::USoundAtomCueSheetImportOptions(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Reset(true);
}

void USoundAtomCueSheetImportOptions::Reset(bool bDefaults)
{
	// always reset transient values
	CueSheetPackageName.Empty();
	Items.Empty();
	NumAwbFiles = 0;
	bIsAReimport = false;

	// reset saved/current parameters to their default if requested
	if (bDefaults)
	{
		bOverrideAwbDirectory = false;
		bUseAwbRoot = false;
		AwbDirectory.Empty();
		bUseCueSheetNameAsPrefix = true;
		AssetFilenamePrefix.Empty();
		AssetFilenameSuffix = TEXT("_Cue");
		CueColor = FColor(255, 150, 0);
		bEnableEconomicTick = false;
		bEnableDistanceCulling = false;
		NewCuePreset = EAtomNewCuePresets::Create;
		ExistingCuePreset = EAtomExistingCuePresets::Keep;
		bUseSameOptions = false;
		bCopyAwbFiles.Reset();
		bOverwriteAwbFiles.Reset();
	}

	// reset result if not using same options
	if (!bUseSameOptions)
	{
		OkClicked = false;
	}
}

#undef LOCTEXT_NAMESPACE
