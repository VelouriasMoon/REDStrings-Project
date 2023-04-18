/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2016-2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom ASR Rack
 * File     : AtomAsrRack.cpp
 *
 ****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* モジュールヘッダ */
#include "AtomAsrRack.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareRuntimePrivatePCH.h"
#include "CriWareInitializer.h"

/* Unreal Engine 4関連ヘッダ */
#include "UObject/Package.h"

#if defined(XPT_TGT_PS4)
#include <user_service.h>
#include <cri_atom_ps4.h>
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 24
#include "ApplicationCore/Public/PS4Application.h"
#else
#include "PS4/PS4Application.h"
#endif
#elif defined(XPT_TGT_PS5)
#include <user_service.h>
#include <cri_atom_ps5.h>
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 24
#include "ApplicationCore/Public/PS5Application.h"
#else
#include "PS5/PS5Application.h"
#endif
#endif

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/
#define LOCTEXT_NAMESPACE "AtomAsrRack"

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
UAtomAsrRack::UAtomAsrRack(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
#if WITH_EDITOR
	/* Localization of unreal properties metadata with LOCTEXT markups and reflection */
	CRI_LOCCLASS(GetClass());
#endif

	RackId = CRIATOMEXASR_RACK_ILLEGAL_ID;
}

/* デフォルトASRラックの取得 */
UAtomAsrRack* UAtomAsrRack::GetDefaultAsrRack()
{
	return UAtomAsrRack::GetAsrRack(0);
}

/* 指定したIDのASRラックを取得 */
UAtomAsrRack* UAtomAsrRack::GetAsrRack(int32 AsrRackId)
{
	/* 指定されたIDのASRラックが作成済みかどうかチェック */
	CriSint32 NumChannels = criAtomExAsrRack_GetOutputChannels(AsrRackId);
	if (NumChannels <= 0) {
		UE_LOG(LogCriWareRuntime, Error, TEXT("ASR Rack %d not existed."), AsrRackId);
		return nullptr;
	}

	/* オブジェクト名の作成 */
	FString ObjectName = TEXT("AtomAsrRack_");
	ObjectName.AppendInt(AsrRackId);

	/* 既存オブジェクトの検索 */
	UAtomAsrRack* AsrRack = (UAtomAsrRack*)StaticFindObject(
		UAtomAsrRack::StaticClass(), ANY_PACKAGE, *ObjectName);
	if (AsrRack == NULL) {
		/* ACBアセットが存在しない場合はACBオブジェクトを作成 */
		AsrRack = NewObject<UAtomAsrRack>(GetTransientPackage(), *ObjectName);
	}

	/* エラーチェック */
	if (AsrRack == nullptr) {
		UE_LOG(LogCriWareRuntime, Error, TEXT("Failed to create instance of AtomAsrRack."));
		return nullptr;
	}

	/* ASRラックIDの取得 */
	AsrRack->RackId = AsrRackId;

	return AsrRack;
}

void UAtomAsrRack::AttachDspBusSetting(FString SettingName)
{
	criAtomExAsrRack_AttachDspBusSetting((CriAtomExAsrRackId)RackId, TCHAR_TO_UTF8(*SettingName), NULL, 0);
}

void UAtomAsrRack::DetachDspBusSetting()
{
	criAtomExAsrRack_DetachDspBusSetting((CriAtomExAsrRackId)RackId);
}

void UAtomAsrRack::ApplyDspBusSnapshot(FString SnapshotName, int32 Milliseconds)
{
	criAtomExAsrRack_ApplyDspBusSnapshot(
		(CriAtomExAsrRackId)RackId, TCHAR_TO_UTF8(*SnapshotName), Milliseconds);
	UserSetSnapshotName = SnapshotName;
}

FString UAtomAsrRack::GetCurrentAppliedSnapshot(int32 AsrRackId)
{
	FString RetName = "";
	RetName = criAtomExAsrRack_GetAppliedDspBusSnapshotName(AsrRackId);
	return RetName;
}

void UAtomAsrRack::SetBusVolumeByName(FString BusName, float Volume)
{
	criAtomExAsrRack_SetBusVolumeByName(
		(CriAtomExAsrRackId)RackId, TCHAR_TO_UTF8(*BusName), Volume);
}

void UAtomAsrRack::SetBusSendLevelByName(FString SourceBusName, FString DestBusName, float Level)
{
	criAtomExAsrRack_SetBusSendLevelByName(
		(CriAtomExAsrRackId)RackId, TCHAR_TO_UTF8(*SourceBusName),
		TCHAR_TO_UTF8(*DestBusName), Level);
}

void UAtomAsrRack::SetEffectBypass(FString BusName, FString EffectName, bool Bypasses)
{
	criAtomExAsrRack_SetEffectBypass((CriAtomExAsrRackId)RackId,
		TCHAR_TO_UTF8(*BusName), TCHAR_TO_UTF8(*EffectName), (CriBool)Bypasses);
}

bool UAtomAsrRack::GetBusAnalyzerInfo(FString DspBusName, int32& num_channels, TArray<float>& rms_levels, TArray<float>& peak_levels, TArray<float>& peak_hold_levels)
{
	CriAtomExAsrBusAnalyzerInfo cri_bus_analyzer_info = {0, };

	criAtomExAsr_GetBusAnalyzerInfoByName(TCHAR_TO_UTF8(*DspBusName), &cri_bus_analyzer_info);

	num_channels = cri_bus_analyzer_info.num_channels;
	for (int iter = 0; iter < CRIATOMEXASR_MAX_CHANNELS; iter++) {
		rms_levels.Add(cri_bus_analyzer_info.rms_levels[iter]);
		peak_levels.Add(cri_bus_analyzer_info.peak_levels[iter]);
		peak_hold_levels.Add(cri_bus_analyzer_info.peak_hold_levels[iter]);
	}

	return true;
}

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif /* </cri_delete_if_LE> */

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/

#undef LOCTEXT_NAMESPACE

/* --- end of file --- */
