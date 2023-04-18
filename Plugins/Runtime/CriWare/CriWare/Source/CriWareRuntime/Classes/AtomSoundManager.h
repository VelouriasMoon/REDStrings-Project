/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom Sound Manager
 * File     : AtomSoundManager.h
 *
 ****************************************************************************/

/* 多重定義防止 */
#pragma once
/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
 /* CRIWAREプラグインヘッダ */
#include "AtomActiveSound.h"
#include "SoundAtomCueSheet.h"
#include "AtomComponent.h"
#include "AtomParameterComponent.h"
#include "AtomListener.h"

#if WITH_EDITOR
#include "Components/BillboardComponent.h"
#endif //WITH_EDITORONLY_DATA

/* モジュールヘッダ */
#include "AtomSoundManager.generated.h"

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
class CRIWARERUNTIME_API FAtomSoundSettingsForAnimNotify
{
public:
	/* オブジェクトの作成 */
	static FAtomSoundSettingsForAnimNotify* Create();

	/* オブジェクトの破棄 */
	void Destroy();

	/* 座標の更新 */
	void UpdateTransform();

	EAtomComponentStatus GetStatus();

	float GetTime();

	/* プレーヤハンドル */
	CriAtomExPlayerHn PlayerHn;

	/* ソースハンドル */
	CriAtomEx3dSourceHn SourceHn;

	/* ID */
	int64 AtomSoundID;

	FString CueName;

	FString SoundConcurrencyName;

	/* キューシートの参照 */
	TWeakObjectPtr<USoundAtomCueSheet> CueSheetPtr;

	/* パラメータの参照 */
	TWeakObjectPtr<UAtomParameterComponent> ParameterPtr;

	/* 音源の位置 */
	FVector Location;

	/* 音源の座標 */
	FRotator Rotation;

	FAtomActiveSound* AtomActiveSound;

	TWeakObjectPtr<USceneComponent> AttachToComponent;

	FName AttachPointName;
	
	class FAtomListener* DefaultListener;
	
	TWeakObjectPtr<USoundAttenuation> SoundAttenuation;

	/* 距離係数 */
	float DistanceFactor;

	float Filter_Frequency;

	float Volume;

	float Pitch;

	bool bFollow;

	/* AudioVolume系パラメータ */
	bool bEnableAudioVolume;
	bool bUseDistanceToEnableAudioVolume;
	float MinDistanceToEnableAudioVolume;

	/* AudioVolume系パラメータ */
	UPROPERTY()
	FAtomAudioVolumeHandler* AtomAudioVolumeHandler;

	//TAtomic<FApplyValueMap*> result_value_map;

	bool bUseAreaSoundVolume;

	TAtomic<bool> bIsWorkInthreads;

	bool bIsLoadingCueSheet;

	TWeakObjectPtr<USoundAtomCue> Sound;

#if WITH_EDITOR
	bool bPlaySoundInPIE;// True:再生時GameMode
	bool bPlaySoundInEditor;

	uint8 bInitDebugShowingInfo : 1;

	TWeakObjectPtr<UBillboardComponent> SpriteComponent;

	float min_attenuation_distance;

	float max_attenuation_distance;

	void InitDebugShowingInfo(USoundAtomCue* InSound);

	void FinalizeDebugShowInfo();

	void DrawDebugShape();

	/* 距離減衰デバッグ表示時のスフィアの色 */
	FColor AudioOuterRadiusColor;
	FColor AudioInnerRadiusColor;
#endif

protected:
	FAtomSoundSettingsForAnimNotify();
	virtual ~FAtomSoundSettingsForAnimNotify();
};

USTRUCT()
struct CRIWARERUNTIME_API FAtomSoundManager
{
	GENERATED_USTRUCT_BODY()

	static int64 AtomSoundID;

	/* AnimNotifyで使用する設定配列(再生される音声の数分addされる) */
	static TMap<int64, class FAtomSoundSettingsForAnimNotify*> AtomSoundSettingsForAnimNotifyMap;

	/* Componentを生成しないでサウンド再生を行う場合用のTick */
	static void TickComponentForAnimNotify();

	/* AnimNotify用のサウンド再生関数 */
	static int32 PlaySoundAnimNotify(float StartTime, USceneComponent* AttachToComponent, FName AttachPointName, USoundAtomCue* Sound, bool bEnabled3DPositioning, float Volume, float Pitch, USoundAttenuation* SoundAttenuation, bool follow);

	/* AnimNotifyで再生する音声の距離係数の設定 */
	static void SetDistanceFactor(float ArgDistanceFactor);

	static FCriticalSection Mutex;
private:
	static float DistanceFactor;


	static void PlaySound(FAtomSoundSettingsForAnimNotify* AtomSoundSetting, USoundAtomCueSheet* CueSheet, USoundAtomCue* Sound);
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/* --- end of file --- */
