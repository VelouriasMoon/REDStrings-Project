/****************************************************************************
*
* CRI Middleware SDK
*
* Copyright (c) 2017 CRI Middleware Co., Ltd.
*
* Library  : CRIWARE plugin for Unreal Engine 4
* Module   : AtomActiveSound for Atom
* File     : AtomActiveSound.cpp
*
****************************************************************************/

/***************************************************************************
*      インクルードファイル
*      Include files
***************************************************************************/

/* モジュールヘッダ */
#include "AtomActiveSound.h"

/* Unreal Engine 4関連ヘッダ */
#include "AudioThread.h"
#include "Misc/App.h"
#include "Engine/World.h"

/***************************************************************************
*      定数マクロ
*      Macro Constants
***************************************************************************/

/***************************************************************************
*      処理マクロ
*      Macro Functions
***************************************************************************/

/***************************************************************************
*      データ型宣言
*      Data Type Declarations
***************************************************************************/

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

/***************************************************************************
*      クラス定義
*      Class Definition
***************************************************************************/

FAtomActiveSound::FAtomActiveSound()
	: bHasCheckedOcclusion(false)
	, bAsyncOcclusionPending(false)
	, bIsOccluded(false)
	, CurrentOcclusionFilterFrequency(MAX_FILTER_FREQUENCY)
	, CurrentOcclusionVolumeAttenuation(1.0f)
	, OcclusionCheckInterval(0.f)
	, LastOcclusionCheckTime(TNumericLimits<float>::Lowest())
	, PlaybackTime(0.f)
	, OwnerID(0)
	, AtomComponentID(0)
{
}

FAtomActiveSound::~FAtomActiveSound()
{
}

void FAtomActiveSound::SetWorld(UWorld* InWorld)
{
	check(IsInGameThread());

	World = InWorld;
	WorldID = (InWorld ? InWorld->GetUniqueID() : 0);
}

void FAtomActiveSound::SetAtomComponent(AActor* owner, uint64 componentID, FName componentName) {
	check(IsInGameThread());

	AActor* Owner = owner;//Component->GetOwner();

	AtomComponentID = componentID;//Component->GetAtomComponentID();
	AtomComponentName = componentName;// Component->GetFName();

	if (Owner)
	{
		OwnerID = Owner->GetUniqueID();
		OwnerName = Owner->GetFName();
	}
	else
	{
		OwnerID = 0;
		OwnerName = NAME_None;
	}
}

void FAtomActiveSound::UpdateOcclusion(const FSoundAttenuationSettings* AttenuationSettingsPtr)
{
	float InterpolationTime = bHasCheckedOcclusion ? AttenuationSettingsPtr->OcclusionInterpolationTime : 0.f;
	bHasCheckedOcclusion = true;

	if (bIsOccluded)
	{
		if (CurrentOcclusionFilterFrequency.GetTargetValue() > AttenuationSettingsPtr->OcclusionLowPassFilterFrequency)
		{
			CurrentOcclusionFilterFrequency.Set(AttenuationSettingsPtr->OcclusionLowPassFilterFrequency, InterpolationTime);
		}

		if (CurrentOcclusionVolumeAttenuation.GetTargetValue() > AttenuationSettingsPtr->OcclusionVolumeAttenuation)
		{
			CurrentOcclusionVolumeAttenuation.Set(AttenuationSettingsPtr->OcclusionVolumeAttenuation, InterpolationTime);
		}
	}
	else
	{
		CurrentOcclusionFilterFrequency.Set(MAX_FILTER_FREQUENCY, InterpolationTime);
		CurrentOcclusionVolumeAttenuation.Set(1.0f, InterpolationTime);
	}

	const float DeltaTime = FApp::GetDeltaTime();
	CurrentOcclusionFilterFrequency.Update(DeltaTime);
	CurrentOcclusionVolumeAttenuation.Update(DeltaTime);
}

void FAtomActiveSound::OcclusionTraceDone(const FTraceHandle& TraceHandle, FTraceDatum& TraceDatum)
{
	// Look for any results that resulted in a blocking hit
	bool bFoundBlockingHit = false;
	for (const FHitResult& HitResult : TraceDatum.OutHits)
	{
		if (HitResult.bBlockingHit)
		{
			bFoundBlockingHit = true;
			break;
		}
	}

	FAtomActiveSound* AtomActiveSound = this;

	FAudioThread::RunCommandOnAudioThread([AtomActiveSound, bFoundBlockingHit]()
	{
		AtomActiveSound->bIsOccluded = bFoundBlockingHit;
		AtomActiveSound->bAsyncOcclusionPending = false;
	});
}

void FAtomActiveSound::CheckOcclusion(const FVector ListenerLocation, const FVector SoundLocation, const FSoundAttenuationSettings* AttenuationSettingsPtr)
{
	check(AttenuationSettingsPtr);
	check(AttenuationSettingsPtr->bEnableOcclusion);

	const float DeltaTime = FApp::GetDeltaTime();
	PlaybackTime += DeltaTime;

	if (!bAsyncOcclusionPending && (PlaybackTime - LastOcclusionCheckTime) > OcclusionCheckInterval)
	{
		LastOcclusionCheckTime = PlaybackTime;
		static FName NAME_SoundOcclusion = FName(TEXT("SoundOcclusion"));

		const bool bUseComplexCollisionForOcclusion = AttenuationSettingsPtr->bUseComplexCollisionForOcclusion;
		const ECollisionChannel OcclusionTraceChannel = AttenuationSettingsPtr->OcclusionTraceChannel;

		if (!OcclusionTraceDelegate.IsBound())
		{
			OcclusionTraceDelegate.BindRaw(this, &FAtomActiveSound::OcclusionTraceDone);

			FCollisionQueryParams Params(NAME_SoundOcclusion, bUseComplexCollisionForOcclusion);
			if (OwnerID > 0)
			{
				Params.AddIgnoredActor(OwnerID);
			}

			if (UWorld* WorldPtr = GetWorld())
			{
				// LineTraceTestByChannel is generally threadsafe, but there is a very narrow race condition here 
				// if World goes invalid before the scene lock and queries begin.
				bIsOccluded = WorldPtr->LineTraceTestByChannel(SoundLocation, ListenerLocation, OcclusionTraceChannel, Params);
			}
		}
		else
		{
			bAsyncOcclusionPending = true;
			
			const uint32 SoundOwnerID = OwnerID;
			FTraceDelegate* TraceDelegate = &OcclusionTraceDelegate;
			TWeakObjectPtr<UWorld> SoundWorld = GetWorld();
			{
				if (UWorld* WorldPtr = SoundWorld.Get())
				{
					FCollisionQueryParams Params(NAME_SoundOcclusion, bUseComplexCollisionForOcclusion);
					if (SoundOwnerID > 0)
					{
						Params.AddIgnoredActor(SoundOwnerID);
					}
			
					WorldPtr->AsyncLineTraceByChannel(EAsyncTraceType::Test, SoundLocation, ListenerLocation, OcclusionTraceChannel, Params, FCollisionResponseParams::DefaultResponseParam, TraceDelegate);
				}
			}
		}
	}

	UpdateOcclusion(AttenuationSettingsPtr);
}

