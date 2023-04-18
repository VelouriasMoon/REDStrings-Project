/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013-2020 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom Sound Data (Cue)
 * File     : SoundAtomCue.cpp
 *
 ****************************************************************************/

#include "SoundAtomCue.h"

#include "CriWareRuntimePrivatePCH.h"
#include "AtomStatics.h"
#include "Serialization/CustomVersion.h"
#include "EngineUtils.h"

#if WITH_EDITOR
#include "AtomWavePlayer.h"
#endif


#define LOCTEXT_NAMESPACE "SoundAtomCue"


/* AtomCueアセットのバージョン管理用 */
struct FAtomCueVersion
{
	enum Type
	{
		/* バージョン番号が付与される前 */
		BeforeCustomVersionWasAdded = 0,

		/* バージョン情報を追加 */
		StoreVersionInfo,

		/* キュー名をアセットに保持 */
		StoreCueName,

		/* SoundConcurrency情報をアセットに保持 */
		StoreSoundConcurrency,

		/* New culling solver */
		UseNewCullingSolver,

		/* Custom tick frequency */
		StoreCustomTickFrequency,

		/* CueSheet is async loaded */
		UseAsyncCueSheet,

		/* Store AudioVolume settings */
		StoreAudioVolume,

		/* Store a Snapshot of the first wave pcm data */
		StoreFirstWaveSnapshot,

		/* Store a Region for Atom3dTransceiver */
		StoreRegion,

		/* 最新バージョンの番号を取得するための番兵 */
		VersionPlusOne,

		/* 最新バージョンの番号を指す */
		LatestVersion = VersionPlusOne - 1,
	};

	/* GUID */
	static const FGuid GUID;
};

/* GUID */
const FGuid FAtomCueVersion::GUID(0x0FAD527A, 0xEEC1492E, 0x8819E1BB, 0xE3B780B9);

/* バージョン登録 */
FCustomVersionRegistration GAtomCueVersion(
	FAtomCueVersion::GUID, FAtomCueVersion::LatestVersion, TEXT("AtomCueAssetVersion"));

#if WITH_EDITOR
uint32 USoundAtomCue::NumSnapshotGenerators = 0;
#endif

USoundAtomCue::USoundAtomCue(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, CueSheet(nullptr)
	, LoopSetting(EAtomLoopSetting::Inherited)
	, bApplyAtomParameter(false)
	, Duration(0.0f)
	, FirstWaveDuration(0.0f)
	, AttenuationSettings(nullptr)
	, bEnableAudioVolume(false)
	, bIsMovable(false)
	, bCanStraddleAudioVolume(false)
	, bUseDistanceToEnableAudioVolume(false)
	, MinDistanceToEnableAudioVolume(0.0f)
	, bUseAreaSoundVolume(false)
	, UpdateRateForFrame(1)
	, bEconomicTick(false)
	, bOverrideEconomicTickSettings(false)
	, EconomicTickDistanceMargin(WORLD_MAX)
	, EconomicTickFrequency(15)
	, bEnableDistanceCulling(false)
	, bOverrideCullSettings(false)
	, CullDistanceMargin(WORLD_MAX)
	, EconomicTickMarginDistance_DEPRECATED(0.0f)
	, bCullingSoundPlayingProcessByDistance_DEPRECATED(false)
	, bUseLegacyCullingSettings_DEPRECATED(false)
	, MaxProcessDistance_DEPRECATED(0.0f)
	, bOverrideCullingSettings_DEPRECATED(0.0f)
	, CullingMarginDistance_DEPRECATED(0.0f)
	, bLoop_DEPRECATED(false)
	, DefaultAttenuation_DEPRECATED(nullptr)

#if WITH_EDITOR
	, RawPCMData(nullptr)
	, RawPCMDataNumChannels(0)
	, RawPCMDataSamplingRate(0)
	, RawPCMDataNumSamples(0)
	, bNeedsThumbnailGeneration(false)
	, bIsRequestingSnapshot(false)
#endif
	, CueInfo(nullptr)
	, CueId(-1)
	, bIsRequestingCueInfo(false)
{
#if WITH_EDITOR
	/* Localization of unreal properties metadata with LOCTEXT markups and reflection */
	CRI_LOCCLASS(GetClass());
#endif

#if WITH_EDITOR
	UserData.Reset();
	CategoryName.Reset();
	AisacControlName.Reset();
#endif

#if WITH_EDITORONLY_DATA
	CueColor = FColor(255, 150, 0); // ADX Color
#endif
}

const FSoundAttenuationSettings* USoundAtomCue::GetAttenuationSettingsToApply() const
{
	if (AttenuationSettings)
	{
		return &AttenuationSettings->Attenuation;
	}
	return nullptr;
}

float USoundAtomCue::GetMaxAttenuationDistanceToApply() const
{
	if (AttenuationSettings) {
		return AttenuationSettings->Attenuation.FalloffDistance;
	} else {
		if (CueInfo) {
			return CueInfo->AttenuationDistance.MaxDistance;
		}

		return 0.0f;
	}
}

float USoundAtomCue::GetCullDistanceMarginToApply() const
{
	if (bOverrideCullSettings) {
		return CullDistanceMargin;
	} else {
		return UCriWareInitializer::GetCullDistanceMargin();
	}
}

float USoundAtomCue::GetCullDistance() const
{
	// (距離減衰の最大値+CullDistanceMargin)を返す
	return GetMaxAttenuationDistanceToApply() + GetCullDistanceMarginToApply();
}

bool USoundAtomCue::IsLooping() const
{
	// local value
	if (!Validate() || LoopSetting != EAtomLoopSetting::Inherited) {
		return (LoopSetting == EAtomLoopSetting::Loop);
	}

	// inherited value
	return CueInfo->bLooping;
}

float USoundAtomCue::GetDuration()
{
	// if editor or if not initialized, re-calc duration
	if (GIsEditor || (Duration < SMALL_NUMBER)) {
		// check if linked to a cue sheet
		if (Validate()) {
			// @todo: get delay time caused by bus reverb/chorus/delay etc... not yet possible criatom do not let acces to bus information yet.
			Duration = IsLooping() ? INDEFINITELY_LOOPING_DURATION :
				!CueInfo->bLooping ? CueInfo->Duration.GetTotalSeconds() : GetFirstWaveDuration();
			return Duration;
		}

		return IsLooping() ? INDEFINITELY_LOOPING_DURATION : Duration;
	}

	return Duration;
}

bool USoundAtomCue::BP_GetCueInfo(FAtomCueInfo& InCueInfo) const
{
	if (CueInfo) {
		InCueInfo = *CueInfo;
		return true;
	} else if (CueSheet->IsLoaded()) {
		CueSheet->BP_GetCueInfoFromName(CueName, InCueInfo);
		return true;
	}

	InCueInfo = FAtomCueInfo();
	return false;
}

bool USoundAtomCue::Validate() const
{
	return CueSheet && CueInfo;
}

FString USoundAtomCue::GetDesc()
{
	FString Description = TEXT("");

	// Display duration
	const float CueDuration = GetDuration();
	if (CueDuration < INDEFINITELY_LOOPING_DURATION)
	{
		Description = FString::Printf(TEXT("%3.2fs"), CueDuration);
	}
	else
	{
		Description = TEXT("Forever");
	}

#if WITH_EDITORONLY_DATA
	// Display group
	Description += TEXT(" [");
	Description += ToString(FirstWaveInfo.Format);
	Description += TEXT("]");
#endif

	return Description;
}

void USoundAtomCue::GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const
{
	Super::GetAssetRegistryTags(OutTags);

#if WITH_EDITORONLY_DATA
	OutTags.Add(FAssetRegistryTag("NumChannels", FString::FromInt(FirstWaveInfo.NumChannels), FAssetRegistryTag::TT_Numerical));
	OutTags.Add(FAssetRegistryTag("IsStreamed", FirstWaveInfo.bIsStreamed ? TEXT("True") : TEXT("False"), FAssetRegistryTag::TT_Alphabetical));
	OutTags.Add(FAssetRegistryTag("Format", ToString(FirstWaveInfo.Format), FAssetRegistryTag::TT_Alphabetical));
#endif
}

void USoundAtomCue::Serialize(FArchive& Ar)
{
	// Always force the duration to be updated when we are saving or cooking
	if (Ar.IsSaving() || Ar.IsCooking())
	{
		if (CueSheet) {
			// If cue sheet is not yet loaded, wait until data is availabe
			CueSheet->MakeSureCueSheetIsLoaded();
		}

		Duration = GetDuration();
		CacheAggregateValues();
	}

	Super::Serialize(Ar);

	/* アセットバージョンの使用を通知 */
	Ar.UsingCustomVersion(FAtomCueVersion::GUID);

	/* アーカイブのバージョンをチェック */
	int32 archiveVer = Ar.CustomVer(FAtomCueVersion::GUID);

	/* バージョンチェック */
	if (Ar.IsLoading()) {

		/* キューシート名がない場合は補完 */
		if (archiveVer < FAtomCueVersion::StoreCueName) {
			CueName = GetFName().ToString();
		}

#if WITH_EDITORONLY_DATA
		bool bUpdated = false;

		if (archiveVer < FAtomCueVersion::UseNewCullingSolver) {

			if (bCullingSoundPlayingProcessByDistance_DEPRECATED) {
				bEnableDistanceCulling = bCullingSoundPlayingProcessByDistance_DEPRECATED;
				bCullingSoundPlayingProcessByDistance_DEPRECATED = false;
			}

			// If a max distance was set and activated (use legacy), 
			// or, for older versions, if CullDistanceMargin was not set (WORLD_MAX))
			if (MaxProcessDistance_DEPRECATED > KINDA_SMALL_NUMBER
				&& (bUseLegacyCullingSettings_DEPRECATED == true || CullingMarginDistance_DEPRECATED == WORLD_MAX))
			{
				// enable new values
				bOverrideCullSettings = true;
				// set new margin
				CullDistanceMargin = MaxProcessDistance_DEPRECATED - AttenuationDistanceParam.MaxDistance;
				// reset deprected value
				MaxProcessDistance_DEPRECATED = 0.0f;
				bUseLegacyCullingSettings_DEPRECATED = false;
				bOverrideCullingSettings_DEPRECATED = false;
				CullingMarginDistance_DEPRECATED = 0.0f;
			}

			if (bOverrideCullingSettings_DEPRECATED) {
				bOverrideCullSettings = bOverrideCullingSettings_DEPRECATED;
				bOverrideCullingSettings_DEPRECATED = false;
			}

			if (CullingMarginDistance_DEPRECATED > KINDA_SMALL_NUMBER) {
				CullDistanceMargin = CullingMarginDistance_DEPRECATED;
				CullingMarginDistance_DEPRECATED = 0.0f;
			}

			bUpdated = true;
		}

		if (archiveVer < FAtomCueVersion::StoreCustomTickFrequency) {
			if (EconomicTickMarginDistance_DEPRECATED > KINDA_SMALL_NUMBER) {
				EconomicTickDistanceMargin = EconomicTickMarginDistance_DEPRECATED;
				EconomicTickMarginDistance_DEPRECATED = 0.0f;
				bUpdated = true;
			}
		}

		if (archiveVer < FAtomCueVersion::UseAsyncCueSheet) {
			AttenuationSettings = DefaultAttenuation_DEPRECATED;
			bUpdated = true;
		}

		if (archiveVer < FAtomCueVersion::StoreFirstWaveSnapshot) {
			bIsRequestingSnapshot = true;
			bUpdated = true;
		}

		/* - UObjectBaseUtility::MarkPackageDirty関数を参考。エディタ上でも保存できるようにする。 */
		if (bUpdated) {
			auto Package = GetOutermost();
			if (Package) {
				Package->SetDirtyFlag(true);
				Package->PackageMarkedDirtyEvent.Broadcast(Package, true);
			}
		}	
#endif
	}

	bool bIsEditorDataIncluded = false;
	if (archiveVer >= FAtomCueVersion::StoreFirstWaveSnapshot) {
		FStripDataFlags StripFlags(Ar);
		bIsEditorDataIncluded = !StripFlags.IsEditorDataStripped();
	}

#if WITH_EDITORONLY_DATA
	// thumbnail snapshot (fixed to 512 samples)
	if (bIsEditorDataIncluded) {
		RawSnapshot.Serialize(Ar, this, INDEX_NONE, false);
		Ar << RawSnapshotNumChannels;
	}
#endif
}

void USoundAtomCue::PostLoad()
{
	Super::PostLoad();

	// キューシートが設定されているかどうかチェック
	if (CueSheet) {
		CueSheet->RegisterSoundAtomCue(this);

		// Cache any needed data from CueSheet
		CacheAggregateValues(false);
	}

#if WITH_EDITOR
	bNeedsThumbnailGeneration = true;
#endif // WITH EDITOR
}

void USoundAtomCue::PostDuplicate(bool bDuplicateInPiE)
{
	if (CueSheet) {
		CueSheet->RegisterSoundAtomCue(this);
	}
}

#if WITH_EDITOR
void USoundAtomCue::PostInitProperties()
{
	Super::PostInitProperties();

	CacheAggregateValues();
}

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 25
void USoundAtomCue::PreEditChange(FProperty* PropertyAboutToChange)
#else
void USoundAtomCue::PreEditChange(UProperty* PropertyAboutToChange)
#endif
{
	if (PropertyAboutToChange != nullptr) {
		FName PropertyName = PropertyAboutToChange->GetFName();

		if (PropertyName == GET_MEMBER_NAME_CHECKED(USoundAtomCue, CueSheet) ||
			PropertyName == GET_MEMBER_NAME_CHECKED(USoundAtomCue, CueName)) {

			if (CueSheet) {
				CueSheet->UnregisterSoundAtomCue(this);
			}
		}
	}

	Super::PreEditChange(PropertyAboutToChange);
}

void USoundAtomCue::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	bool bIsSourceUpdated = false;

	if (PropertyChangedEvent.Property != nullptr) {
		FName PropertyName = PropertyChangedEvent.Property->GetFName();

		if (PropertyName == GET_MEMBER_NAME_CHECKED(USoundAtomCue, CueSheet) ||
			PropertyName == GET_MEMBER_NAME_CHECKED(USoundAtomCue, CueName)) {
			
			if (CueSheet) {
				CueSheet->RegisterSoundAtomCue(this);
			}

			bIsSourceUpdated = true;
		}	
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);

	// update cached data with cuesheet
	CacheAggregateValues();

	if (bIsSourceUpdated) {
		TakeFirstWaveSnapshot(512);
	}

	// validation
	if (!Validate()) {
		// Show a warning and a reason on asset detail panel 
	}
}
#endif // WITH EDITOR

void USoundAtomCue::BeginDestroy()
{
#if WITH_EDITOR
	/* リソースの解放 */
	if (RawPCMData != nullptr) {
		FMemory::Free(RawPCMData);
		RawPCMData = nullptr;
	}
#endif

	Super::BeginDestroy();
}

float USoundAtomCue::GetEconomicTickFrequencyToApply() const
{
	if (bOverrideEconomicTickSettings) {
		return EconomicTickFrequency;
	}
	else {
		return UCriWareInitializer::GetEconomicTickFrequency();
	}
}

float USoundAtomCue::GetEconomicTickDistanceMarginToApply() const
{
	if (bOverrideEconomicTickSettings) {
		return EconomicTickDistanceMargin;
	}
	else {
		return UCriWareInitializer::GetEconomicTickDistanceMargin();
	}
}

float USoundAtomCue::GetEconomicTickDistance() const
{
	return GetMaxAttenuationDistanceToApply() + GetEconomicTickDistanceMarginToApply();
}

#if WITH_EDITOR
float USoundAtomCue::GetMaxAttenuationDistance() const
{
	return FMath::Max(AttenuationDistanceParam.MaxDistance, 0.0f);
}

float USoundAtomCue::GetMinAttenuationDistance() const
{
	return FMath::Max(AttenuationDistanceParam.MinDistance, 0.0f);
}
#endif // WITH_EDITOR

void USoundAtomCue::Tick(float /*DeltaTime*/)
{
	if (bIsRequestingCueInfo) {
		if (CueSheet && CueSheet->IsLoaded()) {
			bIsRequestingCueInfo = false; // stop tick
			CacheAggregateValues(false);
		}
	}

#if WITH_EDITOR
	if (bIsRequestingSnapshot) {
		TakeFirstWaveSnapshot();
	}
#endif
}

bool USoundAtomCue::IsTickable() const
{
#if WITH_EDITOR
	return bIsRequestingCueInfo || (bIsRequestingSnapshot && !GIsPlayInEditorWorld);
#else
	return bIsRequestingCueInfo;
#endif
}

void USoundAtomCue::CacheAggregateValues(bool bCanMarkDirty /* = true */)
{
	if (!CueSheet) {
		return;
	}

	// キューシートハンドルへのアクセスを保証
	// Load CueSheet on memory if not loaded.
	if (!CueSheet->IsLoaded()) {
		//UE_LOG(LogCriWareRuntime, Info, TEXT("Async Load CueSheet."));

		// async load
		CueSheet->AsyncLoadCueSheet();
		bIsRequestingCueInfo = true; // start tick

		// anyway, try to link cached info if present
		CueInfo = CueSheet->GetCueInfoFromName(CueName);
		
		return;
	}
	// direct exec from already loaded cue sheet
		
	// transient
	CueInfo = CueSheet->GetCueInfoFromName(CueName);
	if (!Validate()) {
		//UE_LOG(LogCriWareRuntime, Log, TEXT("AtomCue '%s' is not present in AtomCueSheet '%s'. This is maybe a place holder."), *CueName, *CueSheet->CueSheetName);
		return;
	}

	// transient
	CueId = CueInfo->Id;

	// updated
	bool bUpdated = false;

	if (!CueInfo->Name.IsEmpty()) {
#if WITH_EDITORONLY_DATA
		// カテゴリ名一覧の取得
		// CategoryName list
		if (CategoryName != CueInfo->CategoryNames) {
			CategoryName.Reset();
			CategoryName.Append(CueInfo->CategoryNames);
			bUpdated = true;
		}

		// AISACコントロール名一覧の取得
		// AISACControlName list
		if (AisacControlName != CueInfo->AisacControlNames) {
			AisacControlName.Reset();
			AisacControlName.Append(CueInfo->AisacControlNames);
			bUpdated = true;
		}

		// Attenuation distance
		if (AttenuationDistanceParam != CueInfo->AttenuationDistance) {
			AttenuationDistanceParam = CueInfo->AttenuationDistance;
			bUpdated = true;
		}
#endif // WITH_EDITORONLY_DATA

		float NewDuration = CueInfo->Duration.GetTotalSeconds();
		if (Duration != NewDuration) {
			Duration = NewDuration;
			bUpdated = true;
		}
	}

	// cache first wave info
	float NewFirstWaveDuration = GetFirstWaveDuration();
	if (FirstWaveDuration != NewFirstWaveDuration) {
		FirstWaveDuration = NewFirstWaveDuration;
		bUpdated = true;
	}

	if (Duration < SMALL_NUMBER && FirstWaveDuration > SMALL_NUMBER) {
		Duration = FirstWaveDuration;
		bUpdated = true;
	}

	if (bUpdated && bCanMarkDirty) {
		MarkPackageDirty();
	}
}

float USoundAtomCue::GetFirstWaveDuration()
{
	/* 既に情報を取得済みの場合はそれを返す */
	if (FirstWaveDuration > KINDA_SMALL_NUMBER) {
		return FirstWaveDuration;
	}

	/* 情報を取得し、それを変数"FirstWaveDuration"にキャッシュしてから値を返す */
	/* キューシートハンドルへのアクセスを保証 */
	if (CueSheet && CueSheet->IsLoaded()) { // sync loading will occur
	
		CriAtomExWaveformInfo WaveformInfo;
		CriBool bWaveResult = criAtomExAcb_GetWaveformInfoByName(CueSheet->GetAcbHn(), TCHAR_TO_UTF8(*CueName), &WaveformInfo);

		/* 情報の取得に失敗又はゼロ除算が発生しそうな場合はゼロ値を返す */
		if ((bWaveResult == CRI_FALSE) || (WaveformInfo.sampling_rate == 0)) {
			FirstWaveDuration = 0.0f;
		} else {
			FirstWaveDuration = static_cast<float>(WaveformInfo.num_samples) / WaveformInfo.sampling_rate;
		}

		/* クック時やコンテンツブラウザからのロード時はACBハンドルを解放 */
		//if (GIsCookerLoadingPackage || (GIsEditorLoadingPackage && (!CueSheet->IsRooted()))) {
		//	CueSheet->ForceUnload();
		//}
	}

	return FirstWaveDuration;
}

bool USoundAtomCue::IsEconomicTickEnabled() const
{
	return bEconomicTick;
}

#if WITH_EDITOR
void USoundAtomCue::TakeFirstWaveSnapshot(uint32 NumFrames)
{
	// postpone generation until no PIE/SIE
	if (GIsPlayInEditorWorld)
	{
		return;
	}

	bIsRequestingSnapshot = false;

	// clear current snapshot
	if (RawSnapshot.GetBulkDataSize() > 0) {
		RawSnapshot.RemoveBulkData();
		bNeedsThumbnailGeneration = true;
	}

	// check if we can generate it now
	if (NumSnapshotGenerators >= MaxSimultaneousSnapshotGenerators)
	{
		bIsRequestingSnapshot = true;
		return;
	}

	// signal new data
	bNeedsThumbnailGeneration = true;

	if (Validate())
	{
		auto WavePlayer = NewObject<UAtomWavePlayer>(this, MakeUniqueObjectName(this, UAtomWavePlayer::StaticClass()));

		// settings
		WavePlayer->SetWave(this);

		// CueSheet is loaded we have immediate acess to wave info.
		auto WaveInfo = WavePlayer->GetWaveInfo();

		// store extracted wave info to this cue
		FirstWaveInfo = WaveInfo;

		// check if real sound
		if (WaveInfo.NumSamples <= 0 || WaveInfo.NumChannels <= 0)
		{
			// OUT: no samples!
			bNeedsThumbnailGeneration = false;
			return;
		}

		// create output memory buffer
		struct FWaveformBuffer
		{
			int32 Total;
			int32 Count;
			int16* Pcm;
		};

		auto WaveformBuffer = MakeShared<FWaveformBuffer>();
		WaveformBuffer->Total = WaveInfo.NumSamples / WaveInfo.NumChannels;
		WaveformBuffer->Count = 0;
		WaveformBuffer->Pcm = static_cast<int16*>(FMemory::Malloc(sizeof(int16) * WaveInfo.NumSamples));
		if (WaveformBuffer->Pcm == nullptr)
		{
			// OUT: ERROR - out of memory!
			bNeedsThumbnailGeneration = false;
			return;
		}

		// setup for pcm output (WaveBuffer is hold by WavePlayer)
		WavePlayer->RegisterFilterDataFunction([WaveformBuffer](CriAtomPcmFormat Format, int32 NumChannels, int32 NumFrames, void* Data[])
		{
			FWaveformBuffer& DecodeBuffer = WaveformBuffer.Get();

			/* クリッピング */
			NumChannels = FMath::Min((int32)NumChannels, 8);
			NumFrames = FMath::Min((int32)NumFrames, (DecodeBuffer.Total - DecodeBuffer.Count));

			/* 入力データの参照 */
			float* Source[8];
			for (int32 n = 0; n < NumChannels; n++)
			{
				Source[n] = (float*)Data[n];
			}

			/* デコード結果の保存 */
			int16* Dest = &DecodeBuffer.Pcm[DecodeBuffer.Count * NumChannels];
			for (int32 i = 0; i < NumFrames; i++)
			{
				for (int32 n = 0; n < NumChannels; n++)
				{
					int32 Value = Source[n][i] * 32768.0f;
					Value = FMath::Clamp(Value, (int32)MIN_int16, (int32)MAX_int16);
					Dest[i * NumChannels + n] = (int16)Value;
				}
			}

			/* サンプル数の更新 */
			DecodeBuffer.Count += NumFrames;
			//UE_LOG(LogTemp, Warning, TEXT("DECODE (%i/%i)"), DecodeBuffer->Count, DecodeBuffer->Total);
		});

		// setup when playback terminated
		WavePlayer->OnWaveFinishedNative.AddLambda([WaveformBuffer, NumDestFrames = NumFrames](UAtomWavePlayer* Player)
		{	
			auto Cue = Player->GetCue();
			
			if (IsValid(Cue))
			{
				if (WaveformBuffer->Count == WaveformBuffer->Total)
				{
					// Sample count
					auto WaveInfo = Player->GetWaveInfo();
					const uint32 NumChannels = WaveInfo.NumChannels;
					const uint32 TotalSampleCount = WaveInfo.NumSamples;
					const uint32 TotalFrameCount = WaveInfo.NumSamples / NumChannels;
					const uint32 FramesPerDstFrame = TotalFrameCount / NumDestFrames;
					const float FrameScale = (float)TotalFrameCount / NumDestFrames;

					// Get the sample data of this file
					const int16* SamplePtr = WaveformBuffer->Pcm;

					Cue->RawSnapshot.Lock(LOCK_READ_WRITE);
					int16* DestPtr = static_cast<int16*>(Cue->RawSnapshot.Realloc(NumDestFrames * sizeof(int16) * NumChannels));

					// Render each channel separately so outer loop is the sound wave channel index.
					for (uint32 ChannelIndex = 0; ChannelIndex < NumChannels; ++ChannelIndex)
					{
						// Reset the current frame count as we're starting from the beginning of the file to
						// scale the channel data
						uint32 CurrentFrameCount = 0;

						// Loop through each dest frames
						for (uint32 DestFrameIndex = 0; DestFrameIndex < NumDestFrames; ++DestFrameIndex)
						{
							// reset the sample sum and num samples in pixel for each pixel
							int64 SampleSum = 0;
							int32 NumSamplesInDstFrame = 0;

							if (FramesPerDstFrame > 0)
							{
								// resampling

								// Loop through all source frames in this dest frame, sum all audio data. Track total frames rendered to avoid writing past buffer boundary
								for (uint32 FrameIndex = 0; FrameIndex < FramesPerDstFrame && CurrentFrameCount < TotalFrameCount; ++FrameIndex)
								{
									// Get the sample value of the wave file
									const uint32 SampleIndex = CurrentFrameCount * NumChannels + ChannelIndex;
									check(SampleIndex < TotalSampleCount);
									int16 SampleValue = SamplePtr[SampleIndex];

									// Sum the sample value with the running sum
									SampleSum += FMath::Abs(SampleValue);

									// Track the number of samples we're actually summing to get an accurate average
									++NumSamplesInDstFrame;

									// Increment the frame after processing channels
									++CurrentFrameCount;
								}
							}
							else
							{
								// interpolation to nearest

								// Get the sample value of the wave file
								const uint32 SampleIndex = (uint32)(CurrentFrameCount * FrameScale) * NumChannels + ChannelIndex;
								check(SampleIndex < TotalSampleCount);
								int16 SampleValue = SamplePtr[SampleIndex];

								// copy the sample value
								SampleSum = FMath::Abs(SampleValue);

								// Only one sample is added per frame
								NumSamplesInDstFrame = 1;

								// Increment the frame after processing channels
								++CurrentFrameCount;
							}

							// If we actually added any audio data in this dest frame
							if (NumSamplesInDstFrame > 0)
							{
								const int16 AverageSampleValue = (int16)((float)SampleSum / NumSamplesInDstFrame);
								DestPtr[DestFrameIndex * NumChannels + ChannelIndex] = AverageSampleValue;
							}
						}
					}

					Cue->RawSnapshot.Unlock();
					Cue->RawSnapshotNumChannels = NumChannels;

					// todo: ask for asset thumbnail refresh here 
				}
				else
				{
					// snapshot was not generated, no need to generate thumbnail
					Cue->bNeedsThumbnailGeneration = false;

					// ask for regenerate in case of player stopped early by a global stop for PIE/SIE
					if (!Player->HasError() && Player->GetPlayState() == EAtomWavePlayState::Stopped && GIsPlayInEditorWorld)
					{
						Cue->bIsRequestingSnapshot = true;
					}
				}
			}

			FMemory::Free(WaveformBuffer->Pcm);

			// release atom player
			Player->OnWaveFinishedNative.Clear();
			Player->RemoveFromRoot();
			NumSnapshotGenerators--;
		});

		// start generation
		WavePlayer->Play();

		// keep atom player
		WavePlayer->AddToRoot();
		NumSnapshotGenerators++;
	}
}
#endif

// DEPRECATED - will be deleted in future release

float USoundAtomCue::GetEconomicTickFrequencyToUse() const { return GetEconomicTickFrequencyToApply(); }
float USoundAtomCue::GetEconomicTickMarginDistanceToUse() const { return GetEconomicTickDistanceMarginToApply(); }
float USoundAtomCue::GetEconomicTickBoundaryDistanceToUse() const { return GetEconomicTickDistance(); }
float USoundAtomCue::GetMaxAttenuationDistanceToUse() const { return GetMaxAttenuationDistanceToApply(); }
float USoundAtomCue::GetCullingMarginDistanceToUse() const { return GetCullDistanceMarginToApply(); }
float USoundAtomCue::GetCullingBoundaryDistanceToUse() const { return GetCullDistance(); }
float USoundAtomCue::GetMaxAcbAttenuationDistance() const {
#if WITH_EDITOR
	return GetMaxAttenuationDistance();
#else
	return WORLD_MAX;
#endif
}
float USoundAtomCue::GetMinACbAttenuationDistance() const {
#if WITH_EDITOR
	return GetMinAttenuationDistance();
#else
	return 0.0f;
#endif
}


#undef LOCTEXT_NAMESPACE
