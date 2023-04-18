/****************************************************************************
*
* CRI Middleware SDK
*
* Copyright (c) 2017 CRI Middleware Co., Ltd.
*
* Library  : CRIWARE plugin for Unreal Engine 4
* Module   : AtomActiveSound for Atom
* File     : AtomActiveSound.h
*
****************************************************************************/

/* 多重定義防止 */
#pragma once

/***************************************************************************
*      インクルードファイル
*      Include files
***************************************************************************/

/* Unreal Engine 4関連ヘッダ */
#include "Audio.h"
#include "AudioDevice.h"
#include "HAL/ThreadSafeBool.h"
#include "WorldCollision.h"

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

struct CRIWARERUNTIME_API FAtomActiveSound
{
public:

	FAtomActiveSound();
	~FAtomActiveSound();

public:
	class USoundAtomCue* Sound;

	/** Whether or not the sound has checked if it was occluded already. Used to initialize a sound as occluded and bypassing occlusion interpolation. */
	uint8 bHasCheckedOcclusion : 1;

	/** Whether or not there is an async occlusion trace pending */
	FThreadSafeBool bAsyncOcclusionPending;

	/** whether we were occluded the last time we checked */
	FThreadSafeBool bIsOccluded;

	/** The interpolated parameter for the low-pass frequency due to occlusion. */
	FDynamicParameter CurrentOcclusionFilterFrequency;

	/** The interpolated parameter for the volume attenuation due to occlusion. */
	FDynamicParameter CurrentOcclusionVolumeAttenuation;

	/** The time in seconds with which to check for occlusion from its closest listener */
	float OcclusionCheckInterval;

	/** Last time we checked for occlusion */
	float LastOcclusionCheckTime;

	float PlaybackTime;

	void OcclusionTraceDone(const FTraceHandle& TraceHandle, FTraceDatum& TraceDatum);

	void SetAtomComponent(AActor* owner, uint64 componentID, FName componentName);
	uint32 GetWorldID() const { return WorldID; }
	TWeakObjectPtr<UWorld> GetWeakWorld() const { return World; }
	UWorld* GetWorld() const
	{
		check(IsInGameThread());
		return World.Get();
	}
	void SetWorld(UWorld* World);

	void CheckOcclusion(const FVector ListenerLocation, const FVector SoundLocation, const FSoundAttenuationSettings* AttenuationSettingsPtr);

private:

	TWeakObjectPtr<UWorld> World;
	uint32 WorldID;

	uint32 OwnerID;
	uint64 AtomComponentID;

	FName AtomComponentName;
	FName OwnerName;

	/** Returns the unique ID of the active sound's owner if it exists. Returns 0 if the sound doesn't have an owner. */
	uint32 GetOwnerID() const { return OwnerID; }

	void UpdateOcclusion(const FSoundAttenuationSettings* AttenuationSettingsPtr);
	FTraceDelegate OcclusionTraceDelegate;
};
