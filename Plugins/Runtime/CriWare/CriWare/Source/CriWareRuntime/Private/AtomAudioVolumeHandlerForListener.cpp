/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013-2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Listener
 * File     : AtomListener.cpp
 *
 ****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* モジュールヘッダ */
#include "AtomAudioVolumeHandlerForListener.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareRuntimePrivatePCH.h"
#include "AtomAsrRack.h"

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
FAtomAudioVolumeHandlerForListener::FAtomAudioVolumeHandlerForListener()
{
	bInAudioVolume = false;
	EnterPoint = FVector::ZeroVector;
	for (int iter_ptr_reset_num = 0; iter_ptr_reset_num < NUM_AUDIOVOLUME_TYPES; iter_ptr_reset_num++) {
		AudioVolumes[iter_ptr_reset_num].Reset();
		PrevAudioVolumes[iter_ptr_reset_num].Reset();
		EntranceVolumes[iter_ptr_reset_num].Reset();
	}
}

FAtomAudioVolumeHandlerForListener::~FAtomAudioVolumeHandlerForListener()
{
	bInAudioVolume = false;
	EnterPoint = FVector::ZeroVector;
	for (int iter_ptr_reset_num = 0; iter_ptr_reset_num < NUM_AUDIOVOLUME_TYPES; iter_ptr_reset_num++) {
		AudioVolumes[iter_ptr_reset_num].Reset();
		PrevAudioVolumes[iter_ptr_reset_num].Reset();
		EntranceVolumes[iter_ptr_reset_num].Reset();
	}
}

void FAtomAudioVolumeHandlerForListener::ProcessSnapshotSwitchInsideAudioVolume(AAtomAudioVolume* atom_audio_volume)
{
	/* IDがSnapshot直前までのSnapshotの状態を保持しておくための処理がある */
	FAtomAudioVolumeParameters* AtomAudioVolumeParam = AAtomAudioVolume::GetAtomAudioVolumeSettingsToApply(atom_audio_volume);
	if (!AtomAudioVolumeParam) {
		return;
	}
	for (int iter_settings = 0; iter_settings < AtomAudioVolumeParam->SnapshotSwitchSettings.Num(); iter_settings++) {
		FString snapshot_name = AtomAudioVolumeParam->SnapshotSwitchSettings[iter_settings].SnapshotName;
		FString applied_snapshot_name(criAtomExAsrRack_GetAppliedDspBusSnapshotName((CriAtomExAsrRackId)AtomAudioVolumeParam->SnapshotSwitchSettings[iter_settings].AsrRackID));
		if (!applied_snapshot_name.IsEmpty() && applied_snapshot_name != snapshot_name) {
			if (!bInAudioVolume) {
				/* AudioVolumeに初めて入った場合は、入っていなかった際のSnapshot名を記憶しておく */
				UAtomAsrRack* asr_rack = UAtomAsrRack::GetAsrRack(AtomAudioVolumeParam->SnapshotSwitchSettings[iter_settings].AsrRackID);
				if (asr_rack) {
					asr_rack->UserSetSnapshotName = applied_snapshot_name;
				}
			}
		}
		criAtomExAsrRack_ApplyDspBusSnapshot(
			(CriAtomExAsrRackId)AtomAudioVolumeParam->SnapshotSwitchSettings[iter_settings].AsrRackID, TCHAR_TO_UTF8(*snapshot_name), AtomAudioVolumeParam->SnapshotSwitchSettings[iter_settings].FadeTime * 1000.0f);
	}
}

void FAtomAudioVolumeHandlerForListener::ProcessSnapshotSwitchOutsideAudioVolume(AAtomAudioVolume* const prev_atom_audio_volume)
{
	FAtomAudioVolumeParameters* AtomAudioVolumeParam = AAtomAudioVolume::GetAtomAudioVolumeSettingsToApply(prev_atom_audio_volume);
	if (!AtomAudioVolumeParam) {
		return;
	}
	for (int iter_settings = 0; iter_settings < AtomAudioVolumeParam->SnapshotSwitchSettings.Num(); iter_settings++) {
		/* Defaultの設定に戻す */
		if (!AtomAudioVolumeParam->SnapshotSwitchSettings.IsValidIndex(iter_settings)) {
			continue;
		}
		FString applied_snapshot_name(criAtomExAsrRack_GetAppliedDspBusSnapshotName((CriAtomExAsrRackId)AtomAudioVolumeParam->SnapshotSwitchSettings[iter_settings].AsrRackID));
		UAtomAsrRack* asr_rack = UAtomAsrRack::GetAsrRack(AtomAudioVolumeParam->SnapshotSwitchSettings[iter_settings].AsrRackID);
		if (asr_rack && !applied_snapshot_name.IsEmpty() && applied_snapshot_name != asr_rack->UserSetSnapshotName) {
			criAtomExAsrRack_ApplyDspBusSnapshot((CriAtomExAsrRackId)AtomAudioVolumeParam->SnapshotSwitchSettings[iter_settings].AsrRackID, TCHAR_TO_UTF8(*asr_rack->UserSetSnapshotName), AtomAudioVolumeParam->SnapshotSwitchSettings[iter_settings].FadeTime * 1000.0f);
		}
	}
	/* AudioVolumeを抜けた */
}

AAtomAudioVolume* FAtomAudioVolumeHandlerForListener::ProcessAudioVolumeInternal(AAtomAudioVolume* AtomAudioVolume, AAtomAudioVolume* PrevAtomAudioVolume, const FVector& ListeningPosition, EAtomAudioVolumeType SettingsID)
{
	AAtomAudioVolume* Result = nullptr;

	if (AtomAudioVolume->Validate()) {
		/* AudioVolume内にListenerがいる場合 */
		if (SettingsID == EAtomAudioVolumeType::UseSnapshot) {
			ProcessSnapshotSwitchInsideAudioVolume(AtomAudioVolume);
			bInAudioVolume = true;
		}
		Result = AtomAudioVolume;
	} else {
		/* AudioVolume外にListenerがいる場合 */
		bool isProcessSnapshot =
			PrevAtomAudioVolume->Validate()
			&& !PrevAtomAudioVolume->HasAnyFlags(RF_ClassDefaultObject)
			&& ((PrevAtomAudioVolume->GetOverrideAtomAudioVolume() == true) || (PrevAtomAudioVolume->AtomAudioVolumeSettings != NULL))
			&& SettingsID == EAtomAudioVolumeType::UseSnapshot;
		if (isProcessSnapshot) {
			/* 一度AudioVolume内に入ってしまうと、侵入したAudioVolumeの情報を記憶したままとなるため、そのAudioVolume内のAsrRackIDを使って外の情報に戻す。 */
			ProcessSnapshotSwitchOutsideAudioVolume(PrevAtomAudioVolume);
			bInAudioVolume = false;
		}
	}
	return Result;
}

void FAtomAudioVolumeHandlerForListener::ProcessAudioVolume(const FVector& ListenerPosition)
{
	bool bIsProcessAudioVolumeArray_Snapshot = UCriWareInitializer::AudioVolumeArray_Snapshot.Num() > 0;
	bool bIsProcessAudioVolumeArray_Bus = UCriWareInitializer::AudioVolumeArray_Bus.Num() > 0;
	bool bIsProcessAudioVolumeArray_Aisac = UCriWareInitializer::AudioVolumeArray_Aisac.Num() > 0;

	if (!bIsProcessAudioVolumeArray_Snapshot
		&& !bIsProcessAudioVolumeArray_Bus
		&& !bIsProcessAudioVolumeArray_Aisac) {
		/* レベル上にAudioVOlumeがない場合は何も処理しない */
		return;
	}

	FVector ListeningPosition = ListenerPosition;

	using ItemType = __underlying_type(EAtomAudioVolumeType);

	auto AtomAudioVolume = AudioVolumes[(ItemType)EAtomAudioVolumeType::UseSnapshot];
	auto AtomAudioVolumes_Bus = AudioVolumes[(ItemType)EAtomAudioVolumeType::UseBus];
	auto AtomAudioVolumes_Aisac = AudioVolumes[(ItemType)EAtomAudioVolumeType::UseAisacControl];

	/* AudioVolumeの接続を見るため、サブレベル間のAudioVolumeが重複している場合は、EntranceVolumeの情報を引用する都合上、Listenerの属しているAudioVolumeを取得できない（先にListenerが属しているAudioVolumeの情報が利用されるため） */
	/* EntranceVolumeオブジェクトをレベルをまたいで保持できれば… */
	auto volumeSnapshot = AAtomAudioVolume::GetAudioSettings(ListenerPosition, EAtomAudioVolumeType::UseSnapshot, EntranceVolumes[(ItemType)EAtomAudioVolumeType::UseSnapshot]);
	auto volumeBus = AAtomAudioVolume::GetAudioSettings(ListenerPosition, EAtomAudioVolumeType::UseBus, EntranceVolumes[(ItemType)EAtomAudioVolumeType::UseBus]);
	auto VolumeAisac = AAtomAudioVolume::GetAudioSettings(ListenerPosition, EAtomAudioVolumeType::UseAisacControl, EntranceVolumes[(ItemType)EAtomAudioVolumeType::UseAisacControl]);
	FVector closest_point;
	EntranceVolumes[(ItemType)EAtomAudioVolumeType::UseSnapshot] = FAtomAudioVolumeHandler::CalcClosestPointOnEntranceVolume(ListenerPosition, AtomAudioVolume.Get(), nullptr, closest_point);
	EntranceVolumes[(ItemType)EAtomAudioVolumeType::UseBus] = FAtomAudioVolumeHandler::CalcClosestPointOnEntranceVolume(ListenerPosition, AtomAudioVolumes_Bus.Get(), nullptr, closest_point);
	EntranceVolumes[(ItemType)EAtomAudioVolumeType::UseAisacControl] = FAtomAudioVolumeHandler::CalcClosestPointOnEntranceVolume(ListenerPosition, AtomAudioVolumes_Aisac.Get(), nullptr, closest_point);

	bool bIsChangedAudioVolume = AtomAudioVolume != volumeSnapshot;
	bool bIsChangedAudioVolume_Bus = AtomAudioVolumes_Bus != volumeBus;
	bool bIsChangedAudioVolume_Aisac = AtomAudioVolumes_Aisac != VolumeAisac;

	AAtomAudioVolume* ResultVolume = bIsProcessAudioVolumeArray_Snapshot ? ProcessAudioVolumeInternal(volumeSnapshot.Get(), AtomAudioVolume.Get(), ListenerPosition, EAtomAudioVolumeType::UseSnapshot) : nullptr;
	if (ResultVolume) {
		AudioVolumes[(ItemType)EAtomAudioVolumeType::UseSnapshot] = ResultVolume;
	} else {
		AudioVolumes[(ItemType)EAtomAudioVolumeType::UseSnapshot].Reset();
	}

	ResultVolume = bIsProcessAudioVolumeArray_Bus ? ProcessAudioVolumeInternal(volumeBus.Get(), AtomAudioVolumes_Bus.Get(), ListenerPosition, EAtomAudioVolumeType::UseBus) : nullptr;
	if (ResultVolume) {
		if (bIsChangedAudioVolume_Bus) {
			PrevAudioVolumes[(ItemType)EAtomAudioVolumeType::UseBus] = AudioVolumes[(ItemType)EAtomAudioVolumeType::UseBus];
		}
		AudioVolumes[(ItemType)EAtomAudioVolumeType::UseBus] = ResultVolume;
	} else {
		if (bIsChangedAudioVolume_Bus) {
			PrevAudioVolumes[(ItemType)EAtomAudioVolumeType::UseBus] = AudioVolumes[(ItemType)EAtomAudioVolumeType::UseBus];
		}
		AudioVolumes[(ItemType)EAtomAudioVolumeType::UseBus].Reset();
	}

	ResultVolume = bIsProcessAudioVolumeArray_Aisac ? ProcessAudioVolumeInternal(VolumeAisac.Get(), AtomAudioVolumes_Aisac.Get(), ListenerPosition, EAtomAudioVolumeType::UseAisacControl) : nullptr;
	if (ResultVolume) {
		if (bIsChangedAudioVolume_Aisac) {
			PrevAudioVolumes[(ItemType)EAtomAudioVolumeType::UseAisacControl] = AudioVolumes[(ItemType)EAtomAudioVolumeType::UseAisacControl];
		}
		AudioVolumes[(ItemType)EAtomAudioVolumeType::UseAisacControl] = ResultVolume;

	} else {
		if (bIsChangedAudioVolume_Aisac) {
			PrevAudioVolumes[(ItemType)EAtomAudioVolumeType::UseAisacControl] = AudioVolumes[(ItemType)EAtomAudioVolumeType::UseAisacControl];
		}
		AudioVolumes[(ItemType)EAtomAudioVolumeType::UseAisacControl].Reset();
	}
}


ENUM_RANGE_BY_COUNT(EAtomAudioVolumeType, EAtomAudioVolumeType::Num);


void FAtomAudioVolumeHandlerForListener::ResetEntranceVolumeArray()
{
	using ItemType = __underlying_type(EAtomAudioVolumeType);

	for (EAtomAudioVolumeType VolumeType : TEnumRange<EAtomAudioVolumeType>()) {
		EntranceVolumes[(ItemType)VolumeType].Reset();
	}
}
/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/

/* --- end of file --- */
