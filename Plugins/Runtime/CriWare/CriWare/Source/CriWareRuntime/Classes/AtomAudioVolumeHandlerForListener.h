/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2020 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : AtomAudioVolumeHandlerForListener
 * File     : AtomAudioVolumeHandlerForListener.h
 *
 ****************************************************************************/

 /* 多重定義防止 */
#pragma once

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* Unreal Engine 4関連ヘッダ */
#include "CoreMinimal.h"
#include "AtomAudioVolume.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareApi.h"

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
struct FAtomAudioVolumeHandlerForListener
{
	FAtomAudioVolumeHandlerForListener();
	~FAtomAudioVolumeHandlerForListener();

	TWeakObjectPtr<AAtomAudioVolume> GetAudioVolume(int32 TypeNum) { return AudioVolumes[TypeNum]; }
	TWeakObjectPtr<AAtomAudioVolume> GetPrevAudioVolume(int32 TypeNum) { return PrevAudioVolumes[TypeNum]; }

	/* 侵入ポイント */
	FVector EnterPoint;

	void ProcessAudioVolume(const FVector& listener_position);

	void ResetEntranceVolumeArray();

private:
	bool bInAudioVolume;

	static const uint32 NUM_AUDIOVOLUME_TYPES = static_cast<uint32>(EAtomAudioVolumeType::Num);
	TStaticArray<TWeakObjectPtr<AAtomAudioVolume>, NUM_AUDIOVOLUME_TYPES> AudioVolumes;
	TStaticArray<TWeakObjectPtr<AAtomAudioVolume>, NUM_AUDIOVOLUME_TYPES> PrevAudioVolumes;
	TStaticArray<TWeakObjectPtr<AAtomEntranceVolume>, NUM_AUDIOVOLUME_TYPES> EntranceVolumes;

	/* AudioVolume処理 */
	AAtomAudioVolume* ProcessAudioVolumeInternal(AAtomAudioVolume* AtomAudioVolume, AAtomAudioVolume* PrevAtomAudioVolume, const FVector& ListeningPosition, EAtomAudioVolumeType SettingsID);

	/* AudioVolumeのSnapshot関連の処理 */
	void ProcessSnapshotSwitchInsideAudioVolume(AAtomAudioVolume* AtomAudioVolume);
	void ProcessSnapshotSwitchOutsideAudioVolume(AAtomAudioVolume* PrevAtomAudioVolume);
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/* --- end of file --- */
