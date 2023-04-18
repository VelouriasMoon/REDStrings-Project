/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2019 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : AtomAudioVolumeHandler
 * File     : AtomAudioVolumeHandler.h
 *
 ****************************************************************************/
/* 多重定義防止 */
#pragma once

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
#include "GameFramework/Volume.h"
#include "Engine/Brush.h"

 /* CRIWAREプラグインヘッダ */
#include "CriWareApi.h"
#include "AtomAudioVolume.h"

#include "GameFramework/Volume.h"
#include "Engine/Brush.h"

// クラスの前方宣言
class UAtomComponent;
class FAtomListener;
class FAtomSoundSettingsForAnimNotify;
class AtomAudioVolRelationInfoBus;
class AtomAudioVolRelationInfoAisac;

// 3D音源とリスナーの位置に応じて複数種類の AtomAudioVolume の関係を更新し、ADX2パラメータを計算するクラス
struct FAtomAudioVolumeHandler
{
	FAtomAudioVolumeHandler();
	~FAtomAudioVolumeHandler();

	void FirstProcessAudioVolume(bool IsEnableAudioVolume, bool bIsUseDistanceForEnablingAudioVolume, float DistanceForEnablingAudioVolumeFlag);
	void ProcessAudioVolume(bool IsEnableAudioVolume, bool bIsUseDistanceForEnablingAudioVolume, float DistanceForEnablingAudioVolumeFlag);
	const TMap<FString, float>& GetAisacControlValueMap() const;
	const TMap<FString, float>& GetBusSendLevelMap() const;

	const bool GetChangedVolumeFlag(EAtomAudioVolumeType VolumeType) const;

	// 3D音源が現在属している AtomAudioVolume への弱参照ポインタを返す
	const TWeakObjectPtr<AAtomAudioVolume> GetSoundAudioVolume(EAtomAudioVolumeType VolumeType);

	// 3D音源が現在属している AtomAudioVolume の隣接ボリュームへの弱参照ポインタを返す
	const TWeakObjectPtr<AAtomAudioVolume> GetSoundNeighbourAudioVolume(EAtomAudioVolumeType VolumeType);

	// AtomComponent と AtomListener から情報を取得して VolumeHandler に反映する。適用するADX2パラメータの計算前に実行
	void UpdateInPreprocess(UAtomComponent* const AtomComponent);
	void UpdateInPreprocess(FAtomSoundSettingsForAnimNotify* const AtomSoundSettings);

	static AAtomEntranceVolume* CalcClosestPointOnEntranceVolume(
		const FVector& sound_location,
		AAtomAudioVolume* const current_volume,
		AAtomAudioVolume* const neighbor_volume,
		FVector& out_closest_point
	);

private:
	// ADX2パラメータ別のボリューム情報
	TUniquePtr<AtomAudioVolRelationInfoBus> BusInfo;
	TUniquePtr<AtomAudioVolRelationInfoAisac> AisacInfo;

	// 共通情報
	FVector SoundLocation;
	FVector ListenerLocation;
	bool bIsMovableSound;
	bool bCanStraddleAudioVolume;

	void FirstProcessAudioVolumeForInside();
	void FirstProcessAudioVolumeForOutside();
};

/* --- end of file --- */
