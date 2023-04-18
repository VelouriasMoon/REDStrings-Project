/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013-2020 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : AudioComponent for Atom
 * File     : AtomComponent.cpp
 *
 ****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* モジュールヘッダ */
#include "AtomComponent.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareRuntimePrivatePCH.h"
#include "AtomComponentPool.h"
#include "AtomSoundObject.h"
#include "AtomActiveSound.h"
#include "AtomPlaylist.h"
#include "AtomListener.h"
#include "AtomParameterComponent.h"
#include "AtomStatics.h"

/* Unreal Engine 4関連ヘッダ */
#include "Engine/Engine.h"
#include "Application/ThrottleManager.h"
#include "AudioThread.h"
#include "UObject/Package.h"
#include "Misc/PackageName.h"
#include "Engine/LocalPlayer.h"
#include "UnrealClient.h"

#if WITH_EDITOR
#include "DrawDebugHelpers.h"
#include "Editor/EditorEngine.h"
#include "Editor/Persona/Private/AnimationEditorViewportClient.h"
#endif

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/
#define LOCTEXT_NAMESPACE "AtomComponent"

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
 /* 距離係数の初期化。この時点では UCriWareInitializer::GetDistanceFactor() は正しい値を返さないの 0 初期化 */
float UAtomComponent::DefaultDistanceFactor = 0.0f;

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
int32 UAtomComponent::AtomComponentIDCounter = 0;
TMap<int32, UAtomComponent*> UAtomComponent::AtomIDToComponentMap;
TArray<UAtomComponent*> UAtomComponent::AtomNonRegisteredComponentArray;
TArray<UAtomComponent*> UAtomComponent::AtomRootedComponentArray;
#if WITH_EDITOR
bool UAtomComponent::bAnimSpriteShowFlags = true;
#endif

namespace
{
	/* 距離減衰表示用スフィアの ShapeColor の色が指定とズレるのを緩和する補正係数。
	 * PrimitiveDrawingUtils.cpp の ApplySelectionIntensity 関数により色情報が補正されるのを考慮 */
	static const float ColorCorrectCoffForSphereShapeColor = 1.0f / FMath::Pow(0.5f, 2.2f);
}

/***************************************************************************
 *      クラス定義
 *      Class Definition
 ***************************************************************************/
FAtomAisacControlParam::FAtomAisacControlParam()
	:Value(0.0f)
{
#if WITH_EDITOR
	/* Localization of unreal properties metadata with LOCTEXT markups and reflection */
	CRI_LOCSTRUCT(StaticStruct());
#endif
}

FAtomSelectorParam::FAtomSelectorParam()
{
#if WITH_EDITOR
	/* Localization of unreal properties metadata with LOCTEXT markups and reflection */
	CRI_LOCSTRUCT(StaticStruct());
#endif
}

FAtomSelectorParam::FAtomSelectorParam(const FString & InSelector, const FString & InLabel)
	:Selector(InSelector)
	,Label(InLabel)
{
#if WITH_EDITOR
	/* Localization of unreal properties metadata with LOCTEXT markups and reflection */
	CRI_LOCSTRUCT(StaticStruct());
#endif
}

void UAtomComponent::ResetMembersWithoutCriDynamicResources()
{
	/* AtomComponent初期化時にリセットするパラメータ */
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	bTickInEditor = true;

	bAutoDestroy = false;
	bPersistAcrossLevelTransition = false;
	bAddedAtomNonRegisteredComponentArray = false;
	bAutoActivate = true;
	bAllowAnyoneToDestroyMe = true;
	bStopWhenOwnerDestroyed = true;
	bIsUISound = false;
	bIsPreviewSound = false;

	DefaultVolume = AtomComponentPropertyDefaultValue::DefaultVolume;
	bEnableMultipleSoundPlayback = AtomComponentPropertyDefaultValue::bEnableMultipleSoundPlayback;
	bIsMovable = AtomComponentPropertyDefaultValue::bIsMovable;
	bCanStraddleAudioVolume = AtomComponentPropertyDefaultValue::bCanStraddleAudioVolume;
	bUseAudioVolume = AtomComponentPropertyDefaultValue::bUseAudioVolume;
	bUseAreaSoundVolume = AtomComponentPropertyDefaultValue::bUseAreaSoundVolume;
	bUsePlaylist = AtomComponentPropertyDefaultValue::bUsePlaylist;
	DefaultBlockIndex = AtomComponentPropertyDefaultValue::DefaultBlockIndex;
	DefaultAisacControl.Empty();
	DefaultSelectorLabel.Empty();
	LoopSetting = AtomComponentPropertyDefaultValue::LoopSetting;

	AppliedSoundObject = nullptr;
	AtomComponentID = 0;

	SoundObject = nullptr;
	DefaultSoundObject_DEPRECATED = nullptr;

	/* 備考）再生フラグとTickの有効化／無効化は常に連動させる。 */
	bIsPlayed = false;
	this->SetComponentTickEnabled(false);

	/* 距離減衰の上書きをデフォルト状態では無効化 */
	AttenuationSettings = nullptr;
	bOverrideAttenuation = false;
	AttenuationOverrides.bAttenuate = false;
	AttenuationOverrides.bSpatialize = false;

	/* 音源位置更新のため、OnUpdateTransformを呼び出してもらうよう指定する。 */
	bWantsOnUpdateTransform = true;

	/* バウンドのトランスフォーム処理が起こらなくする */
	bUseAttachParentBound = true;

	/* 不要な機能を無効化 */
	bNeverNeedsRenderUpdate = true;
	bNavigationRelevant = false;
	SetVisibility(false);

	AtomAudioVolumeHandler = nullptr;
	bIsAudioVolumeTickProcessed = false;
	bIsWorkAudioVolumeProcessThread = false;

	PreviousSourceLocation.x = 0.0f;
	PreviousSourceLocation.y = 0.0f;
	PreviousSourceLocation.z = 0.0f;
	CurrentVelocity = FVector::ZeroVector;
	bTransformUpdated = false;
	bIsEnableDoppler = false;

	bIsReducingTickFrequency = false;


	SoundRelativeLocationWithAreaSoundVolume = FVector::ZeroVector;
	AreaSoundVolume = nullptr;
	FrameNum = AtomComponentID;

	/* 一意のIDを付与 */
	if ((AtomComponentIDCounter == MAX_int32) || (AtomComponentIDCounter < 0)) {
		AtomComponentIDCounter = 0;
	}
	AtomComponentID = ++AtomComponentIDCounter;
}

UAtomComponent::UAtomComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, AtomComponentID(0)
	, bIsLoadingCueSheet(false)
	, Status(EAtomComponentStatus::Stop)
#if WITH_EDITORONLY_DATA
	, WasPlayingInPIE(false)
#endif
{
#if WITH_EDITOR
	/* Localization of unreal properties metadata with LOCTEXT markups and reflection */
	CRI_LOCCLASS(GetClass());
#endif

	ResetMembersWithoutCriDynamicResources();

	/* 以下、コンストラクタ固有のパラメータ初期化 */

	bIsPoolable = false;
	bIsPooling = false;

	CueSheet = NULL;
	Player = NULL;
	Source = NULL;
	Playlist = nullptr;

	Listener = nullptr;
	DistanceFactor = 1.0f;

	/* Componentのタグ付け */
	this->ComponentTags.Add(TEXT("AtomComponent"));

	/* ComponentをMapに登録 */
	if (!HasAnyFlags(RF_ClassDefaultObject)) {
		AtomIDToComponentMap.Add(AtomComponentID, this);
	}
	/* デリゲート登録のリセット */
	OnWorldCleanedUpHandle.Reset();

	// Tickを通常の頻度に戻す時に使う値
	DefaultTickInterval = 0.033;

#if WITH_EDITORONLY_DATA
	/* 音源のスピーカアイコン表示を有効にする */
	bVisualizeComponent = true;
	SetSpriteShowFlags();
#endif

	CreatedTime = FPlatformTime::Seconds();
}

void UAtomComponent::InitializePoolable()
{
	/* フラグを初期状態に戻す */
	ClearFlags(RF_AllFlags);
	ClearInternalFlags(EInternalObjectFlags::AllFlags);

	check(bIsPoolable);
	check(CueSheet == NULL);
	check(Player == NULL);
	check(Source == NULL);
	check(Playlist == NULL);

	ResetMembersWithoutCriDynamicResources();

	/* 以下、コンストラクタ固有のパラメータ初期化 */

	/* ComponentをMapから一旦削除 */
	AtomIDToComponentMap.Remove(AtomComponentID);


	/* ComponentをMapに再登録 */
	AtomIDToComponentMap.Add(AtomComponentID, this);

	/* デリゲート登録のリセット */
	/* GC前にDestroyComponentを呼ぶためOnWorldCleanupハンドラを登録 */
	OnWorldCleanedUpHandle = FWorldDelegates::OnWorldCleanup.AddUObject(this, &UAtomComponent::OnWorldCleanedUp);

	// Tickを通常の頻度に戻す
	SetComponentTickInterval(DefaultTickInterval);

#if WITH_EDITORONLY_DATA
	/* TODO */
#endif

	//CreatedTime = FPlatformTime::Seconds();
}

void UAtomComponent::MarkAsRooted()
{
	bPersistAcrossLevelTransition = true;
	AddToRoot();
	AtomRootedComponentArray.Add(this);
}

/* 非レジスターAtomComponentのTick */
void UAtomComponent::TickNonRegisteredComponents()
{
	TArray<UAtomComponent*> ArrayForIteration = AtomNonRegisteredComponentArray;
	for (UAtomComponent* AtomComponent : ArrayForIteration) {
		if (!IsValid(AtomComponent)) {
			continue;
		}
		if (AtomComponent->IsBeingDestroyed()) {
			continue;
		}
		/* Ownerの座標を使ってUpdateTransformする */
		AtomComponent->UpdateTransform(true);
		AtomComponent->OnTickComponent();
	}
}

/* ルートオブジェクトのTick */
void UAtomComponent::TickRootedComponents()
{
	TArray<UAtomComponent*> ArrayForIteration = AtomRootedComponentArray;
	for (UAtomComponent* AtomComponent : ArrayForIteration) {
		if (!IsValid(AtomComponent)) {
			continue;
		}
		if (AtomComponent->IsBeingDestroyed()) {
			continue;
		}
		AtomComponent->OnTickComponent();
	}
}

TMap<FString, float> UAtomComponent::GetAudioVolumeValueMap(EAtomAudioVolumeType type)
{
	TMap<FString, float> ResultValue;
	FAtomAudioVolumeHandler* atom_audio_volume_hn = AtomAudioVolumeHandler;
	
	if (!atom_audio_volume_hn) {
		return ResultValue;
	}
	
	switch (type) {
	case(EAtomAudioVolumeType::UseAisacControl):
		if (UCriWareInitializer::AudioVolumeArray_Aisac.Num() > 0) {
			ResultValue = atom_audio_volume_hn->GetAisacControlValueMap();
		}
		break;
	case(EAtomAudioVolumeType::UseBus):
		if (UCriWareInitializer::AudioVolumeArray_Bus.Num() > 0) {
			ResultValue = atom_audio_volume_hn->GetBusSendLevelMap();
		}
		break;
	default:
		UE_LOG(LogCriWareRuntime, Warning, TEXT("Type is invalid. Please set UseAisacControl or UseBus."));
		break;
	}
	return ResultValue;
}


AAtomAudioVolume* UAtomComponent::GetCurrentBelongingAudioVolume(EAtomAudioVolumeType type, bool IsNeighbor) const
{
	TWeakObjectPtr<AAtomAudioVolume> AtomAudioVolumePtr = nullptr;
	if (IsNeighbor) {
		AtomAudioVolumePtr = AtomAudioVolumeHandler->GetSoundNeighbourAudioVolume(type);
	} else {
		AtomAudioVolumePtr = AtomAudioVolumeHandler->GetSoundAudioVolume(type);
	}
	return AtomAudioVolumePtr.Get();
}

#if WITH_EDITOR
/* エディタ用のTick */
void UAtomComponent::TickOnEditor(float DeltaTime)
{
	OnTickComponent(DeltaTime);
}
#endif

void UpdateAudioVolumeApplyParmaeter(TMap<FString, float> result_map_bus, TMap<FString, float> result_map_aisac, CriAtomExPlayerHn player)
{
	for (auto It = result_map_bus.CreateConstIterator(); It; ++It) {
		criAtomExPlayer_SetBusSendLevelByName(player, TCHAR_TO_UTF8(*It.Key()), 0);
		criAtomExPlayer_SetBusSendLevelOffsetByName(player, TCHAR_TO_UTF8(*It.Key()), It.Value());
	}
	for (auto It = result_map_aisac.CreateConstIterator(); It; ++It) {
		criAtomExPlayer_SetAisacControlByName(player, TCHAR_TO_UTF8(*It.Key()), It.Value());
	}
	if (result_map_bus.Num() > 0 || result_map_aisac.Num() > 0) {
		criAtomExPlayer_UpdateAllAsync(player);
	}
}

/* AudioVolume処理 */
void UAtomComponent::ProcessAudioVolume(bool bIsTick)
{
	if (!bUseAudioVolume || !AtomAudioVolumeHandler) {
		return;
	}

	if (!Sound) {
		/* SoundAtomCueが見つからない場合は何も処理しない */
		return;
	}

	FAtomAudioVolumeHandler* AudioVolumeHandle = AtomAudioVolumeHandler;
	AudioVolumeHandle->UpdateInPreprocess(this);
	USoundAtomCue* sound = Sound;
	CriAtomExPlayerHn player = Player;

	CriAtomExPlayerStatus PlayerStatus = CRIATOMEXPLAYER_STATUS_STOP;
	if (Player != NULL) {
		PlayerStatus = criAtomExPlayer_GetStatus(Player);
		ChangeStatus(PlayerStatus);
	}

	/* プレーヤのステータスをチェック */
	if ((PlayerStatus == CRIATOMEXPLAYER_STATUS_PREP) || (PlayerStatus == CRIATOMEXPLAYER_STATUS_PLAYING)) {
	}

//	auto AsyncTask = new FAutoDeleteAsyncTask<FAtomAsyncTask>([this, atom_audio_volume_hn, sound, bIsTick]() {
//		FScopeLock Lock(&Mutex);
		if (bIsWorkAudioVolumeProcessThread) {
			return;
		}
		bIsWorkAudioVolumeProcessThread = true;
		if (bIsTick) {
			AudioVolumeHandle->ProcessAudioVolume(sound->bEnableAudioVolume, sound->bUseDistanceToEnableAudioVolume, sound->MinDistanceToEnableAudioVolume);
		}
		else {
			AudioVolumeHandle->FirstProcessAudioVolume(sound->bEnableAudioVolume, sound->bUseDistanceToEnableAudioVolume, sound->MinDistanceToEnableAudioVolume);
		}
		
		bIsWorkAudioVolumeProcessThread = false;
//	});

	if (AudioVolumeHandle->GetChangedVolumeFlag(EAtomAudioVolumeType::UseBus) && OnAudioVolumeChanged.IsBound()) {
		OnAudioVolumeChanged.Broadcast(EAtomAudioVolumeType::UseBus, AudioVolumeHandle->GetSoundAudioVolume(EAtomAudioVolumeType::UseBus).Get(), bIsTick);
	}
	if (AudioVolumeHandle->GetChangedVolumeFlag(EAtomAudioVolumeType::UseAisacControl) && OnAudioVolumeChanged.IsBound()) {
		OnAudioVolumeChanged.Broadcast(EAtomAudioVolumeType::UseAisacControl, AudioVolumeHandle->GetSoundAudioVolume(EAtomAudioVolumeType::UseAisacControl).Get(), bIsTick);
	}

	if (!bIsWorkAudioVolumeProcessThread) {
		if ((PlayerStatus == CRIATOMEXPLAYER_STATUS_PREP) || (PlayerStatus == CRIATOMEXPLAYER_STATUS_PLAYING)) {
//			FScopeLock Lock(&Mutex);
			UpdateAudioVolumeApplyParmaeter(
				AudioVolumeHandle->GetBusSendLevelMap(),
				AudioVolumeHandle->GetAisacControlValueMap(),
				player);
		}
//		AsyncTask->StartBackgroundTask();
		if (PlayerStatus == CRIATOMEXPLAYER_STATUS_STOP) {
//			FScopeLock Lock(&Mutex);
			UpdateAudioVolumeApplyParmaeter(
				AudioVolumeHandle->GetBusSendLevelMap(),
				AudioVolumeHandle->GetAisacControlValueMap(),
				player);
		}
	}
}

void UAtomComponent::SetSound(USoundAtomCue* NewSound)
{
	/* キューシートの取得 */
	USoundAtomCueSheet* NewCueSheet = ((NewSound != nullptr) ? NewSound->CueSheet : nullptr);

	/* キュー名の取得 */
	FString NewCueName = ((NewSound != nullptr) ? NewSound->CueName : "");

	/* データの指定 */
	SetSound(NewCueSheet, NewCueName);

	/* サウンドデータの更新 */
	Sound = NewSound;
}

void UAtomComponent::SetSound(USoundAtomCueSheet* InCueSheet, FString InCueName)
{
	/* 再生中の音声を停止 */
	if (bEnableMultipleSoundPlayback == false) {
		Stop();
	}

	/* 既存サウンドデータのクリア */
	Sound = nullptr;

	/* ローカライズ不具合への対策 */
	USoundAtomCueSheet* NewCueSheet = USoundAtomCueSheet::GetLocalizedAtomCueSheet(InCueSheet);

	/* キューシートの変更チェック */
	if (CueSheet == NewCueSheet) {
		/* データが変更されていない場合はリロード不要 */
	} else {
		/* 既存キューシートを一旦破棄 */
		if (CueSheet != nullptr) {
			CueSheet->Release();
//#if WITH_EDITOR
//			/* エディタ上でアセットのプレビューを行う際は既存キューシートを強制的に破棄する */
//			if (bIsPreviewSound && (!CueSheet->IsRooted())) {
//				CueSheet->ForceUnload();
//			}
//#endif
		}

		/* キューシートのリロード */
		CueSheet = NewCueSheet;
		if (CueSheet != nullptr) {
			/* キューシートの同期ロードが発生するかどうかをチェック */
			bool bIsLoaded = CueSheet->IsLoaded();
			if (bIsLoaded == false) {
				UE_LOG(LogCriWareRuntime, Log, TEXT("'%s' will be asyncrhonously loaded."), *CueSheet->GetFullName());
			}

			CueSheet->AddRef(); // load async
		}
	}

	/* キュー名の保存 */
	CueName = InCueName;

	/* プレイリストのクリア */
	if (Playlist != nullptr) {
		Playlist->Reset();
	}
}

/* 音声データのセット */
void UAtomComponent::EnqueueSound(USoundAtomCue* NewSound)
{
	/* プレイリスト再生が有効かどうかをチェック */
	if (bUsePlaylist == false) {
		UE_LOG(LogCriWareRuntime, Log, TEXT("EnqueueSound() failed. bUsePlaylist is false."));
		return;
	}

	/* シームレス連結再生用にプレイリストを作成 */
	/* 注意）再生開始前にEnqueueSoundは実行される可能性あり。 */
	if (Playlist == nullptr) {
		Playlist = new FAtomPlaylist();

		if (Player != NULL) {
			criAtomExPlayer_SetDataRequestCallback(Player, UAtomComponent::OnDataRequest, Playlist);
		}
	}

	/* プレイリストに追加 */
	if ((Playlist != nullptr) && (NewSound != nullptr)) {
		Playlist->Add(NewSound);
	}
}

int32 UAtomComponent::GetNumQueuedSounds() const
{
	/* プレイリスト再生が有効かどうかをチェック */
	if (Playlist == nullptr) {
		if (bUsePlaylist == false) {
			UE_LOG(LogCriWareRuntime, Log, TEXT("GetNumQueuedSounds() failed. bUsePlaylist is false."));
		}
		return 0;
	}

	/* 排他制御区間の開始 */
	Playlist->Lock();

	/* キューに残っているサウンドの数を取得 */
	int32 NumQueued = Playlist->Num();

	/* 再生位置の取得 */
	int32 Pos = Playlist->Tell();

	/* 排他制御区間の終了 */
	Playlist->Unlock();

	/* 再生済みの音声を除外 */
	return (NumQueued - Pos);
}

void UAtomComponent::Play(float StartTime)
{
	PrepareInternal(StartTime, -1.0f, 1.0f);
}

void UAtomComponent::PlayWithoutSoundCulling(float StartTime)
{
	PrepareInternal(StartTime, -1.0f, 1.0f, true);
}

// 第2引数 FadeInDuration に無効値(負の値)を与えることで、通常のPlayInternal呼び出し時にFadeInDurationを上書きしないようにする
void UAtomComponent::PrepareInternal(float StartTime, float FadeInDuration, float FadeVolumeLevel, bool bSoundCulling)
{
	/* 既に再生中の場合は一旦停止 */
	if (bEnableMultipleSoundPlayback == false) {
		Stop();
	}

	/* 負値のシークは無視 */
	int32 StartTimeMs = (int32)(StartTime * 1000.0f);
	if (StartTimeMs < 0) {
		/* 備考）シーケンサエディタ上で再生カーソルを			*/
		/* 　　　波形の先頭以前に移動した場合にここに到達する。	*/
		return;
	}

	/* デフォルトのリスナを取得 */
	/* 注意）デフォルトで何らかのリスナを設定しておかないと	*/
	/* 　　　3Dポジショニング音再生時にエラーが発生する。	*/
	FVector sound_pos = GetComponentLocation();
	Listener = FAtomListener::GetNearestListener(sound_pos);
	if (Listener == nullptr) {
		Listener = FAtomListener::GetListener();
		if (Listener == nullptr) {
			UE_LOG(LogCriWareRuntime, Warning, TEXT("AtomListener has not initialized yet."));
			return;
		}
	}
	
	/* 距離減衰の最大減衰距離よりも遠い場所で再生されるサウンドはbCullingProcessByAttenuationDistanceがtrueのとき何もしない */
	if ((bSoundCulling == false) && (bOnly2DSound == false) && Sound) {
		FVector SoundPosForCulling = GetComponentLocation();

		const bool bCulling = UAtomStatics::ShouldCullSoundPlayback(
			Sound, SoundPosForCulling, GetAttenuationSettingsToApply(), !bOnly2DSound);

		if (bCulling) {
			/* Tick処理内でAutoDestroyが働くようフラグを立てる */
			bIsPlayed = true;
			SetActiveFlag(true);

			/* Componentの破棄のためTick処理を有効にする */
			this->SetComponentTickEnabled(true);
			return;
		}
	}

	/* 再生用のリソースが確保済みかどうかチェック */
	if (Player == NULL) {
		/* リソースの確保 */
		AllocateResource();

		/* リソースが確保できたかどうかチェック */
		if (Player == NULL) {
			/* プレーヤが存在しない場合は再生不可 */
			UE_LOG(LogCriWareRuntime, Error, TEXT("Fatal Error: Failed to Allocate Resource for AtomExPlayer in UAtomComponent::Play."));
			return;
		}
	}

#if WITH_EDITOR
	/* ゲーム実行中かどうかチェック */
	UWorld* World = GetWorld();
	bool bIsGameWorld = (World ? World->IsGameWorld() : false);

	/* 発音の可否を判定 */
	/* 備考）エディタ上では以下のケースのみ発音を行う。             */
	/* 　　　- プレビュー実行中。                                   */
	/* 　　　- （Personaで）UIサウンドとして発音する場合。 */
	if ((GIsEditor != false) && (bIsGameWorld == false) && (bIsUISound == false)) {
		return;
	}

	/* プールされていないAtomComponentはPIE時のみOnWorldCleanupを処理 */
	if (bIsPoolable == false) {
		/* 既存デリゲート登録の解除 */
		if (OnWorldCleanedUpHandle.IsValid() != false) {
			FWorldDelegates::OnWorldCleanup.Remove(OnWorldCleanedUpHandle);
			OnWorldCleanedUpHandle.Reset();
		}

		/* プレビュー終了検知用にデリゲートを登録 */
		OnWorldCleanedUpHandle = FWorldDelegates::OnWorldCleanup.AddUObject(this, &UAtomComponent::OnWorldCleanedUp);
	}
#endif

	/* キューシート、キュー名の補完 */
	if (Sound != nullptr) {
		/* キューシートのロード */
		/* 注意）マップ上に配置された音はSetSoundを経由しないため、 */
		/* 　　　この時点でCueSheetがnullptrの可能性あり。          */
		if (CueSheet == nullptr) {
			CueSheet = Sound->CueSheet;
			if (CueSheet != nullptr) {
				CueSheet->AddRef(); // load async
			}
		}

		/* キュー名の補完 */
		if (CueName.Len() <= 0) {
			CueName = Sound->CueName;
		}

		if (Region == nullptr) {
			Region = Sound->Region;
		}
	}

	PlayInternal(StartTimeMs, FadeInDuration, FadeVolumeLevel);
}

void UAtomComponent::PlayInternal(float StartTime, float FadeInDuration, float FadeVolumeLevel)
{
	// check if cuesheet is ready or not
	if (CueSheet && !CueSheet->IsLoaded()) {
		bIsLoadingCueSheet = true;
		PlayStartTime = StartTime;
		PlayFadeInDuration = FadeInDuration;
		PlayFadeVolumeLevel = FadeVolumeLevel;
		ChangeStatus(CRIATOMEXPLAYER_STATUS_PREP); // set to prepare status
		return;
	}
	// clear tick 
	bIsLoadingCueSheet = false;

	FString SelectedCueName = CueName;
	USoundAtomCueSheet* SelectedCueSheet = CueSheet;

	/* キュー名がプレイリストから補完可能かチェック */
	if ((Playlist != nullptr) && (SelectedCueName.Len() <= 0)) {
		/* 排他制御区間の開始 */
		Playlist->Lock();

		/* 再生位置の取得 */
		int32 Pos = Playlist->Tell();

		/* リストアイテムの取得 */
		const FAtomPlaylistItem* Item = Playlist->Get(Pos);
		if ((Item != nullptr) && (Item->Sound != nullptr)) {
			/* キューの情報を取得 */
			SelectedCueName = Item->Sound->CueName;
			SelectedCueSheet = Item->Sound->CueSheet;

			/* 再生位置の更新 */
			Playlist->Seek(Pos + 1);
		}

		/* 排他制御区間の終了 */
		Playlist->Unlock();
	}

	/* キュー名が指定されていない場合は何もしない */
	if (SelectedCueName.Len() <= 0) {
		return;
	}

	/* キュー名の設定 */
	CriAtomExAcbHn AcbHn = ((SelectedCueSheet != nullptr) ? SelectedCueSheet->GetAcbHn() : nullptr);
	if (AcbHn == NULL)
	{
		UE_LOG(LogCriWareRuntime, Warning, TEXT("The CueSheetAsset is not set in %s CueAsset; if the Cuesheet is not set, the search load for the specified queue will be high."), *CueName);
	}
	/* AcbHnがNULLだと全てのACBデータを対象に、指定したキュー名に合致するデータがないか、ライブラリ内で検索が行われます。 */
	criAtomExPlayer_SetCueName(Player, AcbHn, TCHAR_TO_UTF8(*SelectedCueName));

	/* 再生パラメータの設定*/
	criAtomExPlayer_SetVolume(Player, DefaultVolume);
	criAtomExPlayer_SetFirstBlockIndex(Player, DefaultBlockIndex);
	criAtomExPlayer_SetStartTime(Player, StartTime);
	if (FadeInDuration >= 0.0f) {
		float AttackTime = FMath::Min(FadeInDuration * 1000.0f, 2000.0f);
		criAtomExPlayer_SetEnvelopeAttackTime(Player, AttackTime);
	}
	//else {
		// TODO: FadeInDuration が 0.0f 未満 のとき、Player の EnvelopAttackTime をリセットする
		//       この操作によりデータ側の Envelope 設定が再び有効になる
	//}

	for (int32 i = 0; i < DefaultAisacControl.Num(); i++) {
		const FAtomAisacControlParam& P = DefaultAisacControl[i];
		criAtomExPlayer_SetAisacControlByName(Player, TCHAR_TO_UTF8(*P.Name), P.Value);
	}
	for (int32 i = 0; i < DefaultSelectorLabel.Num(); i++) {
		const FAtomSelectorParam& P = DefaultSelectorLabel[i];
		criAtomExPlayer_SetSelectorLabel(Player, TCHAR_TO_UTF8(*P.Selector), TCHAR_TO_UTF8(*P.Label));
	}

	/* リージョンを更新 */
	if (IsValid(Region)) {
		criAtomEx3dSource_Set3dRegionHn(GetAtomEx3dSource(), Region->GetHandle()->GetRawHandle());
		// 新しいリージョンにデリゲート関数を登録。リージョンのハンドル変更時にリロード手続きを呼び出す
		DelegateOnRegionHandleChanged = Region->OnRegionHandleChanged.AddUObject(this, &UAtomComponent::ReloadRegion);
	}

	/* 音源の位置を更新 */
	UpdateTransform();

	/* 距離減衰と3Dポジショニングの上書き判定 */
	if (!bOnly2DSound &&
			((bOverrideAttenuation != false) || (AttenuationSettings != nullptr) || (Sound && Sound->GetAttenuationSettingsToApply()))
		) {
		const auto* Settings = GetAttenuationSettingsToApply();

		/* Non-Spatialized radius の設定を反映する */
		if ((Settings != nullptr && Settings->bSpatialize == true) && (Source != NULL)) {
			criAtomEx3dSource_SetInteriorPanField(Source, Settings->OmniRadius, Settings->OmniRadius);
		}

		/* 距離減衰上書き時はADX2側の距離減衰計算を無効にする */
		criAtomEx3dSource_SetAttenuationDistanceSetting(Source, CRI_FALSE);
		criAtomEx3dSource_Update(Source);

		if ((Settings != nullptr) && (Settings->bSpatialize == true)) {
			criAtomExPlayer_SetPanType(Player, CRIATOMEX_PAN_TYPE_3D_POS);
		} else {
			criAtomExPlayer_SetPanType(Player, CRIATOMEX_PAN_TYPE_PAN3D);
		}

		/* 減衰ボリュームとフィルタ周波数の計算 */
		float VolumeScale;	/* 減衰ボリューム値取得用(下記関数内で値がセットされる) */
		float Filter_Frequency;	/* フィルタ周波数取得用(下記関数内で値がセットされる) */
		GetAttenuationValuesToApply(VolumeScale, Filter_Frequency);
		const float Volume = DefaultVolume * VolumeScale;
		/* ボリュームの更新 */
		criAtomExPlayer_SetVolume(Player, Volume);

		/* LPFの適用 */
		criAtomExPlayer_SetBandpassFilterParameters(Player, 0.f, Filter_Frequency / MAX_FILTER_FREQUENCY);
	}

	/* AtomParameterの適用 */
	UAtomParameterComponent* AtomParameter = nullptr;
	if ((SoundObject == nullptr) && (Sound != nullptr) && (Sound->bApplyAtomParameter != false)) {
		/* パラメータの検索 */
		AActor *TestActor = GetOwner();
		while (TestActor) {
			/* Actorにパラメータが設定されているかどうかチェック */
			AtomParameter = Cast<UAtomParameterComponent>(
				TestActor->GetComponentByClass(UAtomParameterComponent::StaticClass()));
			if (AtomParameter != nullptr) {
				break;
			}

			TestActor = TestActor->GetOwner();
		}
	}

	/* サウンドオブジェクトの適用 */
	UAtomSoundObject* SoundObjectToApply = (AtomParameter != nullptr) ? AtomParameter->SoundObject : SoundObject;
	ApplySoundObject(SoundObjectToApply);

#if WITH_EDITOR
	/* ゲーム実行中かどうかチェック */
	UWorld* World = GetWorld();
	bool bIsGameWorld = (World ? World->IsGameWorld() : false);

	/* エディター上（非PIE中）のみ鳴らす音はパン3Dで再生 */
	/* 注意）シーケンサーで再生する音は常にUIサウンドとして再生されるため、	*/
	/* 　　　UIサウンドであっても暗黙でパン3Dを適用してはいけない。			*/
	if (!bIsGameWorld && bIsUISound)
	{
		if (GIsEditor && !GIsPlayInEditorWorld)
		{
			criAtomExPlayer_SetPanType(Player, CRIATOMEX_PAN_TYPE_PAN3D);
			bIsPreviewSound = true;
		}
	}
#endif

	if (bOnly2DSound)
	{
		criAtomExPlayer_SetPanType(Player, CRIATOMEX_PAN_TYPE_PAN3D);
	}

	/* DopplerFactorが設定されているか確認 */
	bIsEnableDoppler = false;
	if (AcbHn != nullptr) {
		CriAtomExCueInfo AtomCueInfo;
		CriBool isSuccess = criAtomExAcb_GetCueInfoByName(static_cast<CriAtomExAcbHn>(AcbHn), TCHAR_TO_UTF8(*SelectedCueName), &AtomCueInfo);
		if (isSuccess == CRI_TRUE && AtomCueInfo.pos3d_info.doppler_factor != 0.0f) {
			bIsEnableDoppler = true;
		}
	}

	/* ループ設定を適用 */
	ApplyLoopSetting();

	ProcessAudioVolume(bIsAudioVolumeTickProcessed);
	bIsAudioVolumeTickProcessed = true;

	/* 再生の開始 */
	if (bEnableMultipleSoundPlayback == false) {
		criAtomExPlayer_StartAsync(Player);
	} else {
		criAtomExPlayer_Start(Player);
	}

	// Update status
	ChangeStatus(criAtomExPlayer_GetStatus(Player));

	/* 再生時のLocationを保持しておく */
	FVector tmp_location = GetComponentLocation();
	PreviousSourceLocation.x = tmp_location.X * DistanceFactor;
	PreviousSourceLocation.y = tmp_location.Y * DistanceFactor;
	PreviousSourceLocation.z = tmp_location.Z * DistanceFactor;

	/* 再生の開始を通知 */
	bIsPlayed = true;

	/* アクティブ化の通知 */
	SetActiveFlag(true);

#if WITH_EDITOR
	/* Play In Editorモードで減衰距離を表示するため、キュー情報から取得 */
	if (GIsPlayInEditorWorld && MaxDistanceSphereComponent && MinDistanceSphereComponent) {
		if (AcbHn != nullptr) {
			CriAtomExCueInfo cueInfo = { 0 };
			CriBool isGetCueInfoSucceed = CRI_FALSE;
			if (criAtomExAcb_ExistsName(static_cast<CriAtomExAcbHn>(AcbHn), TCHAR_TO_UTF8(*(CueName))) == CRI_TRUE) {
				isGetCueInfoSucceed = criAtomExAcb_GetCueInfoByName(static_cast<CriAtomExAcbHn>(AcbHn), TCHAR_TO_UTF8(*(CueName)), &cueInfo);
			}

			MaxDistanceSphereComponent->SetSphereRadius(
				cueInfo.pos3d_info.max_distance / DistanceFactor, false);
			MinDistanceSphereComponent->SetSphereRadius(
				cueInfo.pos3d_info.min_distance / DistanceFactor, false);

			if (EconomicDistanceSphereComponent && Sound) {
				const float AttenuationDistance = cueInfo.pos3d_info.max_distance / DistanceFactor;
				const float Distance = AttenuationDistance + Sound->GetEconomicTickDistanceMarginToApply();
				EconomicDistanceSphereComponent->SetSphereRadius(Distance, false);
			}
			if (CullDistanceSphereComponent && Sound) {
				const float Distance = Sound->GetCullDistance();
				CullDistanceSphereComponent->SetSphereRadius(Distance, false);
			}
		}
	}
#endif
}

/* データ要求コールバック */
void CRIAPI UAtomComponent::OnDataRequest(
	void *Object, CriAtomExPlaybackId PlaybackId, CriAtomPlayerHn Player)
{
	/* プレイリストの有無をチェック */
	FAtomPlaylist* Playlist = reinterpret_cast<FAtomPlaylist*>(Object);
	if (Playlist == nullptr) {
		return;
	}

	/* 排他制御区間の開始 */
	Playlist->Lock();

	/* 再生位置の取得 */
	int32 Pos = Playlist->Tell();

	/* リストアイテムの取得 */
	const FAtomPlaylistItem* Item = Playlist->Get(Pos);
	if ((Item != nullptr) && (Item->AwbHn != nullptr)) {
		/* 連結する波形データをセット */
		criAtomPlayer_SetWaveId(Player, Item->AwbHn, Item->WaveId);

		/* 再生位置の更新 */
		Playlist->Seek(Pos + 1);
	}

	/* 排他制御区間の終了 */
	Playlist->Unlock();
}

void UAtomComponent::Stop()
{
	/* 発音中かどうかチェック */
	if (IsActive() == false) {
		return;
	}

	/* 再生を停止 */
	/* 注意）GC処理の順序によっては、ライブラリ終了処理後にここに来る可能性がある。 */
	if (criAtomEx_IsInitialized() != CRI_FALSE) {
		if (Player != NULL) {
			criAtomExPlayer_Stop(Player);
			// Update status
			ChangeStatus(criAtomExPlayer_GetStatus(Player));
		}
	}

	/* Soundの再生が終了したためAudioVolumeの処理も停止 */
	bIsAudioVolumeTickProcessed = false;

	/* 再生の終了を通知 */
	SetActiveFlag(false);
}

void UAtomComponent::StopWithoutReleaseTime()
{
	/* 発音中かどうかチェック */
	if (IsActive() == false) {
		return;
	}

	/* 再生を停止 */
	/* 注意）GC処理の順序によっては、ライブラリ終了処理後にここに来る可能性がある。 */
	if (criAtomEx_IsInitialized() != CRI_FALSE) {
		if (Player != NULL) {
			criAtomExPlayer_StopWithoutReleaseTime(Player);
			// Update status
			ChangeStatus(criAtomExPlayer_GetStatus(Player));
		}
	}

	/* Soundの再生が終了したためAudioVolumeの処理も停止 */
	bIsAudioVolumeTickProcessed = false;

	/* 再生の終了を通知 */
	SetActiveFlag(false);
}

/* フェードイン */
void UAtomComponent::FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime)
{
	PrepareInternal(StartTime, FadeInDuration, FadeVolumeLevel);
}

/* フェードアウトして停止 */
void UAtomComponent::FadeOut(float FadeOutDuration, float FadeVolumeLevel)
{
	if (Player == NULL) {
		return;
	}

	float ReleaseTime = FMath::Clamp(FadeOutDuration * 1000.0f, 0.0f, 10000.0f);
	criAtomExPlayer_SetEnvelopeReleaseTime(Player, ReleaseTime);
	criAtomExPlayer_UpdateAllAsync(Player);
	// TODO: ここで Player への EnvelopeReleaseTime 設定を取り消す操作を行う
	//       そうしない場合、ADXデータ側の EnvelopeReleaseTime 設定が、FadeOut() 呼び出し以降は上書きされたままになる

	Stop();
}

EAtomComponentStatus UAtomComponent::GetStatus() const
{
	if (Player == NULL) {
		return EAtomComponentStatus::Error;
	}

	return Status;
}

void UAtomComponent::Pause(bool bPause)
{
	CriAtomExPlayerHn TargetPlayer = GetAtomExPlayer();
	if (TargetPlayer == NULL) {
		return;
	}

	if (bPause) {
		criAtomExPlayer_Pause(TargetPlayer, CRI_ON);
	} else {
		criAtomExPlayer_Resume(TargetPlayer, CRIATOMEX_RESUME_PAUSED_PLAYBACK);
	}
}

bool UAtomComponent::IsPaused() const
{
	return Player != NULL ? criAtomExPlayer_IsPaused(Player) == CRI_TRUE : false;
}

bool UAtomComponent::IsPlaying() const
{
	/* ステータスの確認 */
	return Status == EAtomComponentStatus::Prep || Status == EAtomComponentStatus::Playing;
}

/* ボリュームの取得 */
float UAtomComponent::GetVolume()
{
	CriAtomExPlayerHn TargetPlayer = GetAtomExPlayer();
	if (TargetPlayer == NULL) {
		return DefaultVolume;
	}
	return (float)criAtomExPlayer_GetParameterFloat32(TargetPlayer, CRIATOMEX_PARAMETER_ID_VOLUME);
}

/* ボリュームの変更 */
void UAtomComponent::SetVolume(float Volume)
{
	CriAtomExPlayerHn TargetPlayer = GetAtomExPlayer();
	if (TargetPlayer == NULL) {
		return;
	}

	/* ボリューム値の保存 */
	DefaultVolume = Volume;

	/* 距離減衰の上書き判定 */
	if (!bOnly2DSound &&
		((bOverrideAttenuation != false) || (AttenuationSettings != nullptr) || (Sound && Sound->GetAttenuationSettingsToApply()))
		) {
		/* 減衰ボリュームの計算 */
		float VolumeScale;	/* 減衰ボリューム値取得用(下記関数内で値がセットされる) */
		float Filter_Frequency;	/* フィルタ周波数取得用(下記関数内で値がセットされる) */
		GetAttenuationValuesToApply(VolumeScale, Filter_Frequency);

		Volume *= VolumeScale;

		/* LPFの適用 */
		criAtomExPlayer_SetBandpassFilterParameters(TargetPlayer, 0.f, Filter_Frequency / MAX_FILTER_FREQUENCY);
	}
	/* ボリュームの更新 */
	criAtomExPlayer_SetVolume(TargetPlayer, Volume);
	criAtomExPlayer_UpdateAllAsync(TargetPlayer);
}

void UAtomComponent::AdjustAttenuation(const FSoundAttenuationSettings& InAttenuationSettings)
{
	bOverrideAttenuation = true;
	AttenuationOverrides = InAttenuationSettings;

	if (IsActive())
	{
		// TODO:
		// not implemented yet
		// permit to update attenuation in realtime form BP

		// SET apply ATtention code here
	}
}

/* サウンドオブジェクトの設定 */
void UAtomComponent::SetSoundObject(UAtomSoundObject * InSoundObject)
{
	/* サウンドオブジェクトの適用 */
	ApplySoundObject(InSoundObject);

	SoundObject = InSoundObject;
}

void UAtomComponent::SetRegion(UAtom3dRegion* InRegion)
{
	if (!IsValid(InRegion)) {
		return;
	}
	// 古いリージョンに登録していたデリゲート関数を解除
	Region->OnRegionHandleChanged.Remove(DelegateOnRegionHandleChanged);
	Region = InRegion;
	CriAtomEx3dSourceHn SourceHandle = GetAtomEx3dSource();
	if (SourceHandle == NULL) {
		// PlayInternal 呼び出し前はここに来る可能性あり
		return;
	}
	// 現在のリージョンハンドルへ更新
	{
		CriAtomEx3dRegionHn RegionHandle = Region->GetHandle()->GetRawHandle();
		check(RegionHandle != NULL);
		criAtomEx3dSource_Set3dRegionHn(SourceHandle, RegionHandle);
		// 更新を反映させる
		criAtomEx3dSource_Update(SourceHandle);
	}
	// 新しいリージョンにデリゲート関数を登録
	DelegateOnRegionHandleChanged = Region->OnRegionHandleChanged.AddUObject(this, &UAtomComponent::ReloadRegion);
}

void UAtomComponent::ReloadRegion()
{
	if (IsValid(Region))
	{
		return;
	}
	CriAtomEx3dSourceHn SourceHandle = GetAtomEx3dSource();
	if (SourceHandle == NULL) {
		// PlayInternal 呼び出し前はここに来る可能性あり
		return;
	}
	// 現在のリージョンハンドルへ更新
	{
		CriAtomEx3dRegionHn RegionHandle = Region->GetHandle()->GetRawHandle();
		check(RegionHandle != NULL);
		criAtomEx3dSource_Set3dRegionHn(GetAtomEx3dSource(), RegionHandle);
		// 更新を反映させる
		criAtomEx3dSource_Update(SourceHandle);
	}
}


/* サウンドオブジェクトの適用 */
void UAtomComponent::ApplySoundObject(UAtomSoundObject * InSoundObject)
{
	/* サウンドオブジェクトの更新が必要かどうかチェック */
	if (InSoundObject == AppliedSoundObject) {
		return;
	}

	/* 適用済みのサウンドオブジェクトを解除 */
	if (AppliedSoundObject != nullptr) {
		if (Player != NULL) {
			criAtomExSoundObject_DeletePlayer(AppliedSoundObject->GetSoundObjectHandle(), Player);
		}
		AppliedSoundObject = nullptr;
	}

	/* 即時適用が必要かどうかチェック */
	if ((InSoundObject == nullptr) || (Player == NULL)) {
		return;
	}

	/* サウンドオブジェクトの設定 */
	criAtomExSoundObject_AddPlayer(InSoundObject->GetSoundObjectHandle(), Player);

	/* 適用済みサウンドオブジェクトの保持 */
	AppliedSoundObject = InSoundObject;
}

bool UAtomComponent::ShouldDecreaseTickFrequency() const
{
	/* SoundがセットされていなければTickの頻度は通常通り */
	if (!Sound) {
		return false;
	}

	/* EconomicTick機能がOFFであればTickの頻度は通常通り */
	if (Sound->IsEconomicTickEnabled() == false) {
		return false;
	}

	/* 3DサウンドでなければTickの頻度は通常通り */
	if (bOnly2DSound) {
		return false;
	}

	/* UE4エディタ側で距離減衰が設定されていればそれを取得する */
	const FSoundAttenuationSettings * UE4Attenuation = GetAttenuationSettingsToApply();

	/* 距離減衰の最大距離を取得する */
	float MaxAttenuationDistance;
	if (UE4Attenuation != nullptr) {
		MaxAttenuationDistance = UE4Attenuation->FalloffDistance;
	}
	else {
		MaxAttenuationDistance = Sound->GetMaxAttenuationDistanceToApply();
	}
	
	/* 「通常の頻度でTickを実行すべき距離」を算出する */
	const float MaxDistance = MaxAttenuationDistance + Sound->GetEconomicTickDistanceMarginToApply();

	/* (2地点間の距離(sqrt計算済み) > MaxDistance) の比較をするよりも */
	/* (2地点間の距離の2乗(sqrt計算を省略) > MaxDistanceの2乗) の比較を行う方が処理効率が良い。 */
	/* 故にMaxDistanceの2乗を算出する。 */
	/* pow関数は処理に時間がかかる上、最適化もあまり期待できないため使用しない。 */
	const float MaxDistanceSquared = MaxDistance * MaxDistance;

	const FVector SourceLocation = GetComponentLocation();

	/* デフォルトのリスナの座標を取得 */
	FAtomListener* DefaultListener = FAtomListener::GetNearestListener(SourceLocation);
	if (DefaultListener == nullptr) {
		DefaultListener = FAtomListener::GetListener();
		if (DefaultListener == nullptr) {
			return false;
		}
	}
	const FVector ListenerLocation = DefaultListener->GetListenerLocation();

	/* MaxDistance2と同じ理由で「2地点間の距離の2乗」を算出するだけにとどめ、ルートまでは計算しない。 */
	const float SourceListenerDistanceSquared = (SourceLocation - ListenerLocation).SizeSquared();

	/* Tickの頻度を下げるべきかどうか判定して返す */
	return SourceListenerDistanceSquared > MaxDistanceSquared;
}

float UAtomComponent::GetEconomicTickInterval() const
{
	if (!Sound) {
		return DefaultTickInterval;
	}

	/* ゼロ除算を回避 */
	if (Sound->GetEconomicTickFrequencyToApply() == 0) {
		return 1.0f;
	}

	/* (回/秒)単位から(秒/1回)単位に変換する */
	return 1.0f / Sound->GetEconomicTickFrequencyToApply();
}

void UAtomComponent::ChangeTickFrequencyAsNeeded()
{
	if (bIsReducingTickFrequency == false && this->ShouldDecreaseTickFrequency() == true) {
		/* Tickの頻度を下げるべきなのにまだやっていない場合はTickの頻度を下げる */
		SetComponentTickInterval(this->GetEconomicTickInterval());
		bIsReducingTickFrequency = true;
	}
	else if (bIsReducingTickFrequency == true && this->ShouldDecreaseTickFrequency() == false) {
		/* Tickの頻度を元に戻すべきなのにまだやっていない場合はTickの頻度を元に戻す */
		SetComponentTickInterval(DefaultTickInterval);
		bIsReducingTickFrequency = false;
	}
}

void UAtomComponent::SetPitchMultiplier(float NewPitchMultiplier)
{
	/* ピッチをセント単位に変更 */
	float Cent = 1200.0f * FMath::Log2(NewPitchMultiplier);

	/* ピッチの変更 */
	SetPitch(Cent);
}

/* ピッチの変更 */
void UAtomComponent::SetPitch(float Pitch)
{
	CriAtomExPlayerHn TargetPlayer = GetAtomExPlayer();
	if (TargetPlayer == NULL) {
		return;
	}

	criAtomExPlayer_SetPitch(TargetPlayer, Pitch);
	criAtomExPlayer_UpdateAllAsync(TargetPlayer);
}

/* AISACコントロール値の指定 */
void UAtomComponent::SetAisacByName(FString ControlName, float ControlValue)
{
	CriAtomExPlayerHn TargetPlayer = GetAtomExPlayer();
	if (TargetPlayer == NULL) {
		return;
	}

	criAtomExPlayer_SetAisacControlByName(TargetPlayer, TCHAR_TO_UTF8(*ControlName), ControlValue);
	criAtomExPlayer_UpdateAllAsync(TargetPlayer);
}

/* 非推奨関数 */
void UAtomComponent::SetBusSendLevel(int32 BusId, float Level)
{
	CriAtomExPlayerHn TargetPlayer = GetAtomExPlayer();
	if (TargetPlayer == NULL) {
		return;
	}

	criAtomExPlayer_SetBusSendLevel(TargetPlayer, BusId, Level);
	criAtomExPlayer_UpdateAllAsync(TargetPlayer);
}

/* バスセンドレベルの設定 */
void UAtomComponent::SetBusSendLevelByName(FString BusName, float Level)
{
	CriAtomExPlayerHn TargetPlayer = GetAtomExPlayer();
	if (TargetPlayer == NULL) {
		return;
	}

	criAtomExPlayer_SetBusSendLevelByName(TargetPlayer, TCHAR_TO_UTF8(*BusName), Level);
	criAtomExPlayer_UpdateAllAsync(TargetPlayer);
}

/* 非推奨関数 */
void UAtomComponent::SetBusSendLevelOffset(int32 BusId, float LevelOffset)
{
	CriAtomExPlayerHn TargetPlayer = GetAtomExPlayer();
	if (TargetPlayer == NULL) {
		return;
	}

	criAtomExPlayer_SetBusSendLevelOffset(TargetPlayer, BusId, LevelOffset);
	criAtomExPlayer_UpdateAllAsync(TargetPlayer);
}

/* バスセンドレベルの設定（オフセット指定） */
void UAtomComponent::SetBusSendLevelOffsetByName(FString BusName, float LevelOffset)
{
	CriAtomExPlayerHn TargetPlayer = GetAtomExPlayer();
	if (TargetPlayer == NULL) {
		return;
	}

	criAtomExPlayer_SetBusSendLevelOffsetByName(TargetPlayer, TCHAR_TO_UTF8(*BusName), LevelOffset);
	criAtomExPlayer_UpdateAllAsync(TargetPlayer);
}

/* ブロックの遷移 */
void UAtomComponent::SetNextBlockIndex(int32 BlockIndex)
{
	if (Player == NULL) {
		return;
	}

	CriAtomExPlaybackId PlaybackId = criAtomExPlayer_GetLastPlaybackId(Player);
	criAtomExPlayback_SetNextBlockIndex(PlaybackId, BlockIndex);
}

/* セレクタラベルの設定 */
void UAtomComponent::SetSelectorLabel(FString Selector, FString Label)
{
	CriAtomExPlayerHn TargetPlayer = GetAtomExPlayer();
	if (TargetPlayer == NULL) {
		return;
	}

	criAtomExPlayer_SetSelectorLabel(TargetPlayer, TCHAR_TO_UTF8(*Selector), TCHAR_TO_UTF8(*Label));
	criAtomExPlayer_UpdateAllAsync(TargetPlayer);
}

/* セレクタラベルの削除 */
void UAtomComponent::ClearSelectorLabels()
{
	CriAtomExPlayerHn TargetPlayer = GetAtomExPlayer();
	if (TargetPlayer == NULL) {
		return;
	}

	criAtomExPlayer_ClearSelectorLabels(TargetPlayer);
	criAtomExPlayer_UpdateAllAsync(TargetPlayer);
}

/* ASRRackIDの設定 */
void UAtomComponent::SetAsrRackID(int32 asr_rack_id)
{
	CriAtomExPlayerHn TargetPlayer = GetAtomExPlayer();
	if (TargetPlayer == NULL) {
		return;
	}

	criAtomExPlayer_SetAsrRackId(TargetPlayer, asr_rack_id);
}

void UAtomComponent::SetAsrRackIdArray(TArray<int32> AsrRackIDs)
{
	CriAtomExPlayerHn TargetPlayer = GetAtomExPlayer();
	if (TargetPlayer == NULL) {
		return;
	}

	int32 Index = 0;
	CriSint32 RackIdArray[CRIATOMEXPLAYER_MAX_ASR_RACKS];
	for (int32 RackId : AsrRackIDs) {
		RackIdArray[Index] = RackId;
		Index++;
	}
	criAtomExPlayer_SetAsrRackIdArray(TargetPlayer, RackIdArray, Index);
}

float UAtomComponent::GetTime() const
{
	if (Player == NULL) {
		return 0.0f;
	}

	CriSint64 TimeMS = criAtomExPlayer_GetTime(Player);
	if (TimeMS < 0) {
		return -1.0f;
	} else {
		return ((float)TimeMS * 0.001f);
	}
}

float UAtomComponent::GetSequencePosition() const
{
	if (Player == NULL) {
		return -1.0f;
	}

	CriAtomExPlaybackId PlaybackId = criAtomExPlayer_GetLastPlaybackId(Player);
	CriSint64 TimeMS = criAtomExPlayback_GetSequencePosition(PlaybackId);
	if (TimeMS < 0) {
		return -1.0f;
	} else {
		return ((float)TimeMS * 0.001f);
	}
}

void UAtomComponent::DestroyComponentByID(int32 TargetID)
{
	/* IDに対応するAtomComponentを検索 */
	UAtomComponent* AtomComponent = GetAtomComponentFromID(TargetID);
	if (AtomComponent == nullptr) {
		return;
	}

	/* AtomComponentの破棄 */
	AtomComponent->DestroyComponent();
}

bool UAtomComponent::IsReducingTickFrequency() const
{
	return bIsReducingTickFrequency;
}

float UAtomComponent::GetEconomicTickDistanceMargin() const
{
	if (Sound) {
		/* 最後に再生したキュー固有のEconomic-Tickマージン距離が有効ならそれを返す */
		return Sound->GetEconomicTickDistanceMarginToApply();
	} else {
		/* サウンドがセットされていない場合は全体設定のEconomic-Tickマージン距離を返す */
		return UCriWareInitializer::GetEconomicTickDistanceMargin();
	}
}

float UAtomComponent::GetEconomicTickDistance() const
{
	if (!Sound) {
		return FLT_MAX;
	}

	/* 最後に再生したキューの(最大減衰距離 + Economic-Tickマージン距離)を返す */
	const float MaxAttenuationDistance = GetMaxAttenuationDistance();
	const float MarginDistance = GetEconomicTickDistanceMargin();
	return MaxAttenuationDistance + MarginDistance;
}

float UAtomComponent::GetEconomicTickFrequency() const
{
	if (Sound) {
		/* 最後に再生したキュー固有のEconomic-Tick頻度が有効ならそれを返す */
		return Sound->GetEconomicTickFrequencyToApply();
	} else {
		/* サウンドがセットされていない場合は全体設定のEconomic-Tick頻度を返す */
		return UCriWareInitializer::GetEconomicTickFrequency();
	}
}

float UAtomComponent::GetMaxAttenuationDistance() const
{
	if (!Sound) {
		return FLT_MAX;
	}

	/* UE4エディタ側で距離減衰が設定されていればそれを取得する */
	const FSoundAttenuationSettings* UE4Attenuation = GetAttenuationSettingsToApply();

	/* 距離減衰の最大距離を返します */
	if (UE4Attenuation != nullptr) {
		return UE4Attenuation->FalloffDistance;
	} else {
		return Sound->GetMaxAttenuationDistanceToApply();
	}
}

float UAtomComponent::GetCullDistanceMargin() const
{
	if (Sound) {
		/* 最後に再生したキュー固有のマージン距離が有効ならそれを返す */
		return Sound->GetCullDistanceMarginToApply();
	} else {
		/* サウンドがセットされていない場合は全体設定のマージン距離を返す */
		return UCriWareInitializer::GetCullDistanceMargin();
	}
}

float UAtomComponent::GetCullDistance() const
{
	if (!Sound) {
		return FLT_MAX;
	}

	/* 最大減衰距離 + カリングマージン距離を返す */
	const float MaxAttenuationDistance = GetMaxAttenuationDistance();
	const float MarginDistance = GetCullDistanceMargin();
	return MaxAttenuationDistance + MarginDistance;
}

bool UAtomComponent::IsLoop() const
{
	if (LoopSetting == EAtomLoopSetting::Loop) {
		return true;
	}
	if (LoopSetting == EAtomLoopSetting::OneShot) {
		return false;
	}

	/* この時点でLoopSettingはEAtomLoopSettingID::Inherited */

	if (!Sound) {
		return false;
	}

	return Sound->IsLooping();
}

/* AtomExプレーヤハンドルの取得 */
CriAtomExPlayerHn UAtomComponent::GetAtomExPlayer()
{
	if (IsPendingKill() == true) {
		return NULL;
	}

	if (Player == NULL) {
		AllocateResource();
	}

	return Player;
}

/* AtomEx3dSourceハンドルの取得 */
CriAtomEx3dSourceHn UAtomComponent::GetAtomEx3dSource()
{
	if (IsPendingKill() == true) {
		return NULL;
	}

	if (Source == NULL) {
		AllocateResource();
	}

	return Source;
}

void UAtomComponent::PostInitProperties()
{
	Super::PostInitProperties();

	/* デフォルトオブジェクトかどうかチェック */
	if (HasAnyFlags(RF_ClassDefaultObject)) {
		/* デフォルトオブジェクトの場合は何もしない */
		return;
	}

	DefaultTickInterval = GetComponentTickInterval();

	/* 注意）テンプレートクラス等で処理負荷が上がらないよう、	*/
	/* 　　　PostInitProperties時点ではPlayer等は確保しない。	*/
}

UAtomComponent* UAtomComponent::GetAtomComponentFromID(int32 TargetID)
{
	/* Mapに登録されているIDは1以上 */
	if (TargetID <= 0) {
		return nullptr;
	}

	check(IsInGameThread());
	return AtomIDToComponentMap.FindRef(TargetID);
}

void UAtomComponent::BeginDestroy()
{
	/* 再生の停止 */
	Stop();

	/* リソースの破棄 */
	ReleaseResource();

	/* デリゲートの登録解除 */
	if (OnWorldCleanedUpHandle.IsValid() != false) {
		FWorldDelegates::OnWorldCleanup.Remove(OnWorldCleanedUpHandle);
		OnWorldCleanedUpHandle.Reset();
	}

	// リージョンに登録していたデリゲート関数を解除
	if (DelegateOnRegionHandleChanged.IsValid() && IsValid(Region)) {
		Region->OnRegionHandleChanged.Remove(DelegateOnRegionHandleChanged);
		DelegateOnRegionHandleChanged.Reset();
	}

	/* ComponentをMapから削除 */
	if (!HasAnyFlags(RF_ClassDefaultObject)) {
		AtomIDToComponentMap.Remove(AtomComponentID);
	}

	Super::BeginDestroy();
}

void UAtomComponent::DestroyComponent(bool bPromoteChildren/*= false*/)
{
	/* 既にプールに返却済みのコンポーネントには何もしない */
	if (bIsPooling) {
		return;
	}

	/* 再生の停止 */
	Stop();

	/* リソースの破棄 */
	ReleaseResource();

	/* 再生中にコンポーネントが破棄される場合も通知 */
	NotifyAudioFinished();

	/* ルート化の解除 */
	/* 注意）この処理はSuper::DestroyComponent前に実行しておく必要がある。	*/
	/* 　　　（BeginDestroy内で行うとAssertに引っかかる。）					*/
	if (bPersistAcrossLevelTransition) {
		RemoveFromRoot();
		AtomRootedComponentArray.Remove(this);
		bPersistAcrossLevelTransition = false;
	}

	if (bAddedAtomNonRegisteredComponentArray) {
		AtomNonRegisteredComponentArray.Remove(this);
		bAddedAtomNonRegisteredComponentArray = false;
	}

	/* プールから取得したAtomComponentかどうかチェック */
	if (bIsPoolable) {
		/* プールへ返却 */
		UAtomComponentPool* Pool = UAtomComponentPool::GetDefaultPool();
		if (Pool != nullptr) {
			Pool->Release(this);
			return;
		}

		/* プールが破棄済みの場合は即座に破棄する */
	}

	Super::DestroyComponent(bPromoteChildren);
}

void UAtomComponent::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	/* 備考）この処理を抜けた直後にMarkPendingKillされるため、      */
	/* 　　　OnComponentDestroyedに到達したオブジェクトは再利用不可 */
	bIsPoolable = false;

	/* 注意）ここではDestroyComponentを呼んではいけない。           */
	/* 　　　（アクタ破棄時に音が早く途切れるケースがある模様。）   */

	Super::OnComponentDestroyed(bDestroyingHierarchy);
}

void UAtomComponent::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);

#if WITH_EDITORONLY_DATA
	if (Ar.IsLoading())
	{
		if (DefaultSoundObject_DEPRECATED != nullptr)
		{
			SoundObject = DefaultSoundObject_DEPRECATED;
			DefaultSoundObject_DEPRECATED = nullptr;
		}
	}
#endif // WITH_EDITORONLY_DATA
}

void UAtomComponent::ShutdownPoolable()
{
	/* OnWorldCleanupハンドラの登録を解除 */
	FWorldDelegates::OnWorldCleanup.Remove(OnWorldCleanedUpHandle);
	OnWorldCleanedUpHandle.Reset();

	/* イベントの取りこぼし対策 */
	NotifyAudioFinished();

	/* 他オブジェクトとの依存関係を切る */
	OnAudioVolumeChanged.Clear();
	OnAudioFinished.Clear();
	OnAudioFinishedNative.Clear();
	SetSound(nullptr);
	SetSoundObject(nullptr);
	SetRegion(nullptr);
	DetachFromComponent( { EDetachmentRule::KeepRelative, true } );

	/* アンレジスト */
	/* 備考）ログ出力回避のため、レジストされている場合のみアンレジストする。 */
	if(IsRegistered()) {
		UnregisterComponent();
	}

	/* ルート化されている場合はルート化を解除 */
	if (IsRooted()) {
		RemoveFromRoot();
	}

	/* AtomComponent返却時にリセットするパラメータ */
	ResetRelativeTransform();
	ClearFlags(RF_AllFlags);
	ClearInternalFlags(EInternalObjectFlags::AllFlags);

	/* 名前を変更 */
	FString ObjName = MakeUniqueObjectName(GetTransientPackage(), UAtomComponent::StaticClass()).ToString();
	Rename(*ObjName, GetTransientPackage(),
		REN_ForceNoResetLoaders | REN_DontCreateRedirectors | REN_DoNotDirty | REN_NonTransactional);
}

#if WITH_EDITOR
void UAtomComponent::OnAttachmentChanged()
{
	Super::OnAttachmentChanged();

	if (GetAttachParent() == nullptr) {
		/* 音源表示用コンポーネントの破棄 */
		if (SpriteComponent) {
			SpriteComponent->DestroyComponent();
			SpriteComponent = nullptr;
		}
		if (MaxDistanceSphereComponent) {
			MaxDistanceSphereComponent->DestroyComponent();
			MaxDistanceSphereComponent = nullptr;
		}
		if (MinDistanceSphereComponent) {
			MinDistanceSphereComponent->DestroyComponent();
			MinDistanceSphereComponent = nullptr;
		}
		if (EconomicDistanceSphereComponent) {
			EconomicDistanceSphereComponent->DestroyComponent();
			EconomicDistanceSphereComponent = nullptr;
		}
		if (CullDistanceSphereComponent) {
			CullDistanceSphereComponent->DestroyComponent();
			CullDistanceSphereComponent = nullptr;
		}
	}
}

void UAtomComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	/* 再生をリスタート */
	Play();

#if WITH_EDITORONLY_DATA
	/* Auto Activateプロパティの変化に合わせて、スピーカーアイコンを変更 */
	UpdateSpriteTexture();
#endif

	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

void UAtomComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	OnTickComponent(DeltaTime);
	ChangeTickFrequencyAsNeeded();
}

void UAtomComponent::OnTickComponent(float DeltaTime)
{
	CriAtomExPlayerStatus PlayerStatus = CRIATOMEXPLAYER_STATUS_STOP;

	if (bIsLoadingCueSheet) {
		if (CueSheet && CueSheet->IsLoaded()) {
			bIsLoadingCueSheet = false;

			bool IsPlayingSounds = false;
			if (Player != NULL) {
				PlayerStatus = criAtomExPlayer_GetStatus(Player);
				IsPlayingSounds = (PlayerStatus == CRIATOMEXPLAYER_STATUS_PLAYING || PlayerStatus == CRIATOMEXPLAYER_STATUS_PREP);
			}
			if (!IsPlayingSounds) {
				/* 再生処理を行った際に、CueSheetの読み込みが完了していないという理由でサウンドが再生されていなかった場合に再生処理を行う */
				PlayInternal(PlayStartTime, PlayFadeInDuration, PlayFadeVolumeLevel);
			}
		} else {
			return;
		}
	}

	/* ステータスの取得 */
	if (Player != NULL) {
		PlayerStatus = criAtomExPlayer_GetStatus(Player);
	}

	// Inform user if status changed.
	ChangeStatus(PlayerStatus);

	if (bIsPreviewSound) { return; }

	/* 再生が開始されたかどうかチェック */
	if ((IsActive() == false) && (bIsPlayed == false)) {
		/* 再生前は何もしない */
		return;
	}

	/* プレーヤのステータスをチェック */
	if ((PlayerStatus == CRIATOMEXPLAYER_STATUS_PREP) || (PlayerStatus == CRIATOMEXPLAYER_STATUS_PLAYING)) {
		/* リスナの差し替え */
		FAtomListener* NewListener = nullptr;
#if WITH_EDITOR
		class FEditorViewportClient* AnimViewport = CheckWhetherExistingAtAnimationEditor();
		if (AnimViewport) {
			NewListener = UCriWareInitializer::AtomListenerForPreviewEditor;
		} else {
#endif
			NewListener = FAtomListener::GetNearestListener(GetComponentLocation());
#if WITH_EDITOR
		}
#endif
		if ((Listener != NewListener) && (NewListener != nullptr)) {
			criAtomExPlayer_Set3dListenerHn(Player, NewListener->GetListenerHandle());
			criAtomExPlayer_UpdateAllAsync(Player);
			Listener = NewListener;
		}

#if WITH_EDITOR
		UpdateListenerTransformInAnimationEditor(AnimViewport);
#endif

		/* 音源位置の更新 */
		bool CanBeUpdatedTransform = (bTransformUpdated || (IsValid(Sound) && (Sound->bUseAreaSoundVolume)));
		if (Listener && CanBeUpdatedTransform) {
			UpdateTransform();
		}

		/* AudioVolume処理  */
		if (bIsAudioVolumeTickProcessed) {
			/* PlayInternalで初回のAudioVolumeProcessが走っている場合にTickでAudioVolumeの実行が行われる */
			ProcessAudioVolume(bIsAudioVolumeTickProcessed);
		}

		/* 音源速度の更新 */
		if (Listener && bIsEnableDoppler) {
			/* DopplerFactorが設定されている場合 */
			FVector CurrentSourceLocation = GetComponentLocation();
			CriAtomExVector source_pos;
			source_pos.x = CurrentSourceLocation.X * DistanceFactor;
			source_pos.y = CurrentSourceLocation.Y * DistanceFactor;
			source_pos.z = CurrentSourceLocation.Z * DistanceFactor;

			CriAtomExVector source_velocity;
			source_velocity.x = (source_pos.x - PreviousSourceLocation.x) / DeltaTime;
			source_velocity.y = (source_pos.y - PreviousSourceLocation.y) / DeltaTime;
			source_velocity.z = (source_pos.z - PreviousSourceLocation.z) / DeltaTime;

			criAtomEx3dSource_SetVelocity(Source, &source_velocity);

			PreviousSourceLocation.x = source_pos.x;
			PreviousSourceLocation.y = source_pos.y;
			PreviousSourceLocation.z = source_pos.z;

			/* UE4単位系(cm/sec)の速度を保存 */
			CurrentVelocity.X = source_velocity.x / DistanceFactor;
			CurrentVelocity.Y = source_velocity.y / DistanceFactor;
			CurrentVelocity.Z = source_velocity.z / DistanceFactor;

			criAtomEx3dSource_Update(Source);
		}

		/* 距離減衰の上書き判定 */
		if (!bOnly2DSound &&
			((bOverrideAttenuation == true) || (AttenuationSettings != nullptr) || (Sound && Sound->GetAttenuationSettingsToApply())) 
				&& (bPersistAcrossLevelTransition == false)
			) {
			/* 減衰ボリュームの計算 */
			float VolumeScale;	/* 減衰ボリューム値取得用(下記関数内で値がセットされる) */
			float Filter_Frequency;	/* フィルタ周波数取得用(下記関数内で値がセットされる) */
			GetAttenuationValuesToApply(VolumeScale, Filter_Frequency);

			const float Volume = DefaultVolume * VolumeScale;

			/* ボリュームの更新 */
			criAtomExPlayer_SetVolume(Player, Volume);

			/* LPFの適用 */
			criAtomExPlayer_SetBandpassFilterParameters(Player, 0.f, Filter_Frequency / MAX_FILTER_FREQUENCY);
			criAtomExPlayer_UpdateAllAsync(Player);
		}

#if WITH_EDITOR
		/* Play In Editorモードでは、再生中に音源位置と減衰距離を表示する */

		if (GIsPlayInEditorWorld) {
			const auto bShowSoundLoation = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("cri.ShowSoundLocation"));
			const int32 ValueShowSoundLocation = bShowSoundLoation->GetValueOnGameThread();
			bool bIsShowSoundLocation = ValueShowSoundLocation > 0;

			/* コンソール変数 "cri.ShowAtomSoundActor" が 0 より大きいときのみUE4Attenuationによる減衰距離を表示する */
			if (bIsShowSoundLocation) {
				/* Play In Editorモードで表示するには、ActorとComponentのbHiddenGameプロパティを、両方とも false にする必要がある。 */
				if (GetOwner()) {
					GetOwner()->SetActorHiddenInGame(false);
				}
				SetHiddenInGame(false, true);

				/* Attenuationパラメータ設定時の描画処理 */
				DrawDebugShape();
			}
			if (IsValid(SpriteComponent)) {
				SpriteComponent->SetHiddenInGame(!bIsShowSoundLocation, true);
			}

			/* AtomCraftAttenuationの距離減衰ワイヤフレームの半径を更新する */

			float MaxDistanceSphereRadius = 0.0f;
			float MinDistanceSphereRadius = 0.0f;
			float EconomicDistanceSphereRadius = 0.0f;
			float CullingDistanceSphereRadius = 0.0f;

			if (bIsShowSoundLocation) {
				/* 最大最小距離を算出 */
				if (MaxDistanceSphereComponent || MinDistanceSphereComponent) {
					CriAtomExCueInfo CueInfo = { 0 };
					if (GetCueInfo(&CueInfo) != CRI_FALSE) {
						MaxDistanceSphereRadius = CueInfo.pos3d_info.max_distance / DistanceFactor;
						MinDistanceSphereRadius = CueInfo.pos3d_info.min_distance / DistanceFactor;
					}
				}

				/* Economic Tick の距離を算出 */
				if ((ValueShowSoundLocation & 0x2) && Sound) {
					const float AttenuationDistance = Sound->GetMaxAttenuationDistanceToApply();
					EconomicDistanceSphereRadius = AttenuationDistance + Sound->GetEconomicTickDistanceMarginToApply();
				}

				/* Culling の距離を算出 */
				if ((ValueShowSoundLocation & 0x4) && Sound) {
					const float AttenuationDistance = Sound->GetMaxAttenuationDistanceToApply();
					CullingDistanceSphereRadius = AttenuationDistance + Sound->GetCullDistanceMarginToApply();
				}
			}

			/* 球の半径を実際に更新する */
			if (MaxDistanceSphereComponent) {
				MaxDistanceSphereComponent->SetSphereRadius(MaxDistanceSphereRadius, false);
			}
			if (MinDistanceSphereComponent) {
				MinDistanceSphereComponent->SetSphereRadius(MinDistanceSphereRadius, false);
			}
			if (EconomicDistanceSphereComponent) {
				EconomicDistanceSphereComponent->SetSphereRadius(EconomicDistanceSphereRadius, false);
			}
			if (CullDistanceSphereComponent) {
				CullDistanceSphereComponent->SetSphereRadius(CullingDistanceSphereRadius, false);
			}
		}
#endif

		/* 再生済みのデータを破棄 */
		if ((Playlist != nullptr) && (PlayerStatus == CRIATOMEXPLAYER_STATUS_PLAYING)) {
			/* 排他制御区間の開始 */
			Playlist->Lock();

			/* 備考）解放待ち、再生中、再生待ちの3パケットは保持しておく。 */
			int32 Pos = Playlist->Tell();
			if (Pos > 3) {
				Playlist->RemoveAt(0);
			}

			/* 排他制御区間の終了 */
			Playlist->Unlock();
		}

		return;
	}

	/* 再生の完了を通知 */
	NotifyAudioFinished();

	if (bAutoDestroy) {
		/* 再生の停止 */
		Stop();

		/* リソースの破棄 */
		/* 備考）GCまでの間ハンドルを保持し続けると、サーバ処理内でリストを     */
		/* 　　　辿る処理が無駄に発生し続けるので、ここでハンドルを破棄する。   */
		ReleaseResource();

		/* 再生終了時はコンポーネントを破棄 */
		DestroyComponent();

		/* 音源表示用コンポーネントの破棄 */
#if WITH_EDITOR
		if (SpriteComponent) {
			SpriteComponent->DestroyComponent();
			SpriteComponent = nullptr;
		}
		if (MaxDistanceSphereComponent) {
			MaxDistanceSphereComponent->DestroyComponent();
			MaxDistanceSphereComponent = nullptr;
		}
		if (MinDistanceSphereComponent) {
			MinDistanceSphereComponent->DestroyComponent();
			MinDistanceSphereComponent = nullptr;
		}
		if (EconomicDistanceSphereComponent) {
			EconomicDistanceSphereComponent->DestroyComponent();
			EconomicDistanceSphereComponent = nullptr;
		}
		if (CullDistanceSphereComponent) {
			CullDistanceSphereComponent->DestroyComponent();
			CullDistanceSphereComponent = nullptr;
		}
#endif
	} else {
#if WITH_EDITOR
		/* 再生終了したので、音源表示を隠す */
		if (GIsPlayInEditorWorld) {
			SetHiddenInGame(true, true);
		}
#endif
	}
}

#if WITH_EDITOR
bool UAtomComponent::GetCueInfo(CriAtomExCueInfo * CueInfo) const
{
	FString SelectedCueName = CueName;
	USoundAtomCueSheet* SelectedCueSheet = CueSheet;

	/* キュー名がプレイリストから補完可能かチェック */
	if ((Playlist != nullptr) && (SelectedCueName.Len() <= 0)) {
		/* 排他制御区間の開始 */
		Playlist->Lock();

		/* 再生位置の取得 */
		int32 Pos = Playlist->Tell();

		/* リストアイテムの取得 */
		const FAtomPlaylistItem* Item = Playlist->Get(Pos);
		if ((Item != nullptr) && (Item->Sound != nullptr)) {
			/* キューの情報を取得 */
			SelectedCueName = Item->Sound->CueName;
			SelectedCueSheet = Item->Sound->CueSheet;
		}

		/* 排他制御区間の終了 */
		Playlist->Unlock();
	}

	CriAtomExAcbHn AcbHn = ((SelectedCueSheet != nullptr) ? SelectedCueSheet->GetAcbHn() : nullptr);
	if (AcbHn == nullptr) {
		return false;
	}

	CriBool isGetCueInfoSucceed = CRI_FALSE;
	if (criAtomExAcb_ExistsName(static_cast<CriAtomExAcbHn>(AcbHn), TCHAR_TO_UTF8(*(SelectedCueName))) == CRI_TRUE) {
			isGetCueInfoSucceed = criAtomExAcb_GetCueInfoByName(static_cast<CriAtomExAcbHn>(AcbHn), TCHAR_TO_UTF8(*(SelectedCueName)), CueInfo);
	}

	return isGetCueInfoSucceed != CRI_FALSE;
}
#endif

void UAtomComponent::Activate(bool bReset)
{
	if (bReset || ShouldActivate() == true) {
		Play();
	}
}

void UAtomComponent::Deactivate()
{
	if (ShouldActivate() == false) {
		Stop();
	}
}

const FSoundAttenuationSettings* UAtomComponent::GetAttenuationSettingsToApply() const
{
	if (bOverrideAttenuation)
	{
		return &AttenuationOverrides;
	}
	else if (AttenuationSettings)
	{
		return &AttenuationSettings->Attenuation;
	}
	else if (Sound)
	{
		return Sound->GetAttenuationSettingsToApply();
	}
	return nullptr;
}

bool UAtomComponent::BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings)
{
	if (const FSoundAttenuationSettings* Settings = GetAttenuationSettingsToApply())
	{
		OutAttenuationSettings = *Settings;
		return true;
	}
	return false;
}

void UAtomComponent::GetAttenuationValuesToApply(float& VolumeScale, float& FilterFrequency)
{
	VolumeScale = 1.0f;
	FilterFrequency = MAX_FILTER_FREQUENCY;

	AtomActiveSound.SetAtomComponent(this->GetOwner(), this->GetAtomComponentID(), this->GetFName());
	AtomActiveSound.SetWorld(GetWorld());

	/* AttenuationSettingsの取得 */
	const auto* Settings = GetAttenuationSettingsToApply();
	if (Settings == nullptr) {
		return;
	}

	/* リスニングポイントの座標を取得 */
	FVector ListenerLocation = ((Listener != nullptr) ? Listener->GetListeningPoint() : FVector::ZeroVector);

	/* ソースの向きと座標を取得 */
	const FRotator SourceRotation = GetComponentRotation();
	const FVector SourcePosition = GetComponentLocation();

	/* ボリュームの初期値を計算 */
	FTransform SoundTransform = FTransform(SourceRotation, SourcePosition);

	/* 距離減衰の計算 */
	/* 備考）UE4.10相当の処理を移植。 */
	if (Settings->bAttenuate) {
		switch (Settings->AttenuationShape) {
			case EAttenuationShape::Sphere:
			{
				const float Distance = FMath::Max(
					FVector::Dist(SoundTransform.GetTranslation(), ListenerLocation)
					- Settings->AttenuationShapeExtents.X, 0.f);
				VolumeScale *= Settings->AttenuationEval(Distance, Settings->FalloffDistance, 1.0f);
				break;
			}

			case EAttenuationShape::Box:
				VolumeScale *= Settings->AttenuationEvalBox(SoundTransform, ListenerLocation, 1.0f);
				break;

			case EAttenuationShape::Capsule:
				VolumeScale *= Settings->AttenuationEvalCapsule(SoundTransform, ListenerLocation, 1.0f);
				break;

			case EAttenuationShape::Cone:
				VolumeScale *= Settings->AttenuationEvalCone(SoundTransform, ListenerLocation, 1.0f);
				break;

			default:
				check(false);
		}
	}

	if (Settings->bAttenuateWithLPF) {
		const float TmpDistance = FVector::Dist(SoundTransform.GetTranslation(), ListenerLocation) - Settings->LPFRadiusMin;
		const float Distance = FMath::Max(TmpDistance, 0.f);
		float ramp_value = Settings->AttenuationEval(Distance, Settings->LPFRadiusMax, 1.0f);
		FilterFrequency = FMath::Lerp(Settings->LPFFrequencyAtMin, Settings->LPFFrequencyAtMax, ramp_value);
	}

	// Only do occlusion traces if the sound is audible
	if (Settings->bEnableOcclusion && VolumeScale > 0.0f /*&& !AudioDevice->IsAudioDeviceMuted()*/) {
		AtomActiveSound.CheckOcclusion(ListenerLocation, GetComponentLocation(), Settings);
		float tmp_FilterFrequency = AtomActiveSound.CurrentOcclusionFilterFrequency.GetValue();
		FilterFrequency = FilterFrequency < tmp_FilterFrequency ? FilterFrequency : tmp_FilterFrequency;
		// Apply the volume attenuation due to occlusion (using the interpolating dynamic parameter)

		VolumeScale *= AtomActiveSound.CurrentOcclusionVolumeAttenuation.GetValue();
	}
}

/* スピーカーアイコン表示関連 */
#if WITH_EDITORONLY_DATA
/* Auto Activeならばチェックボックス付きのテクスチャを使う */
void UAtomComponent::UpdateSpriteTexture()
{
	if (SpriteComponent) {
		if (bAutoActivate) {
			SpriteComponent->SetSprite(LoadObject<UTexture2D>(NULL, TEXT("/Engine/EditorResources/AudioIcons/S_AudioComponent_AutoActivate.S_AudioComponent_AutoActivate")));
		} else {
			SpriteComponent->SetSprite(LoadObject<UTexture2D>(NULL, TEXT("/Engine/EditorResources/AudioIcons/S_AudioComponent.S_AudioComponent")));
		}
	}
}

#if WITH_EDITOR
UDrawSphereComponent* UAtomComponent::CreateSphereComponent(USceneComponent* Parent, float SphereRadius, const FLinearColor & SphereColor)
{
	UDrawSphereComponent* SphereComponent = NewObject<UDrawSphereComponent>(GetOwner(), NAME_None, RF_Transactional | RF_TextExportTransient);

	SphereComponent->AttachToComponent(Parent, FAttachmentTransformRules::KeepRelativeTransform);
	SphereComponent->AlwaysLoadOnClient = false;
	SphereComponent->AlwaysLoadOnServer = false;
	SphereComponent->CreationMethod = CreationMethod;

	/* 球半径と色を設定 */
	SphereComponent->InitSphereRadius(SphereRadius);
	SphereComponent->ShapeColor = SphereColor.ToFColor(true);

	SphereComponent->SetCanEverAffectNavigation(false);
	SphereComponent->RegisterComponent();

	return SphereComponent;
}
#endif

void UAtomComponent::RegisterAtomSoundInfoComponent()
{
	SetSpriteShowFlags();

	/* エディターのパースペクティブビューに、スピーカーのアイコンを表示
	* インゲームでも、デバッグ表示向けにSpriteComponentを初期化しておく */
	/* SceneComponent.cpp USceneComponent::OnRegisterを参考 */
	if (bVisualizeComponent && SpriteComponent == nullptr && GetOwner()) {
		SpriteComponent = NewObject<UBillboardComponent>(GetOwner(), NAME_None, RF_Transactional | RF_TextExportTransient);

		SpriteComponent->Sprite = LoadObject<UTexture2D>(nullptr, TEXT("/Engine/EditorResources/EmptyActor.EmptyActor"));
		SpriteComponent->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
		SpriteComponent->Mobility = EComponentMobility::Movable;
		SpriteComponent->AlwaysLoadOnClient = false;
		SpriteComponent->AlwaysLoadOnServer = false;
		SpriteComponent->SpriteInfo.Category = TEXT("Misc");
		SpriteComponent->SpriteInfo.DisplayName = NSLOCTEXT("SpriteCategory", "Misc", "Misc");
		SpriteComponent->CreationMethod = CreationMethod;
		SpriteComponent->bIsScreenSizeScaled = true;
		SpriteComponent->bUseInEditorScaling = true;
		SpriteComponent->bUseAttachParentBound = (GetAttachParent() != nullptr);

		SpriteComponent->AttachToComponent(this, FAttachmentTransformRules::KeepRelativeTransform);
		SpriteComponent->RegisterComponent();
	}
	UpdateSpriteTexture();

	/* Play In Editorモードでは、再生中に最大、最小減衰距離を表示する。 */
	if (GIsPlayInEditorWorld && (MaxDistanceSphereComponent == nullptr) && GetOwner()
		&& (bOverrideAttenuation == false) && (AttenuationSettings == nullptr)) {
		if (MaxDistanceSphereComponent == nullptr) {
			float SphereRadius = 0.0f;
			FLinearColor FinalColor = FLinearColor::Red;
			if (Sound) {
				auto MaxAttenuationDistance = Sound->GetMaxAttenuationDistance() * UCriWareInitializer::GetDistanceFactor();
				SphereRadius = MaxAttenuationDistance / DistanceFactor;
				FinalColor = FLinearColor::FromSRGBColor(Sound->AudioOuterRadiusColor) * ::ColorCorrectCoffForSphereShapeColor;
			}
			MaxDistanceSphereComponent = CreateSphereComponent(this, SphereRadius, FinalColor);
		}
		if (MinDistanceSphereComponent == nullptr) {
			float SphereRadius = 0.0f;
			FLinearColor FinalColor = FLinearColor::Red;
			if (Sound) {
				auto MinAttenuationDistance = Sound->GetMinAttenuationDistance() * UCriWareInitializer::GetDistanceFactor();
				SphereRadius = MinAttenuationDistance / DistanceFactor;
				FinalColor = FLinearColor::FromSRGBColor(Sound->AudioInnerRadiusColor) * ::ColorCorrectCoffForSphereShapeColor;
			}
			MinDistanceSphereComponent = CreateSphereComponent(this, SphereRadius, FinalColor);
		}
		if (EconomicDistanceSphereComponent == nullptr) {
			float SphereRadius = 0.0f;
			FLinearColor FinalColor = FLinearColor::Blue * ::ColorCorrectCoffForSphereShapeColor;
			if (Sound) {
				const float AttenuationDistance = (Sound->GetMaxAttenuationDistance() * UCriWareInitializer::GetDistanceFactor()) / DistanceFactor;
				SphereRadius = AttenuationDistance + Sound->GetEconomicTickDistanceMarginToApply();
			}
			EconomicDistanceSphereComponent = CreateSphereComponent(this, SphereRadius, FinalColor);
		}
		if (CullDistanceSphereComponent == nullptr) {
			float SphereRadius = 0.0f;
			FLinearColor FinalColor = FLinearColor::Green * ::ColorCorrectCoffForSphereShapeColor;
			if (Sound) {
				const float AttenuationDistance = (Sound->GetMaxAttenuationDistance() * UCriWareInitializer::GetDistanceFactor()) / DistanceFactor;
				SphereRadius = AttenuationDistance + Sound->GetCullDistanceMarginToApply();
			}
			CullDistanceSphereComponent = CreateSphereComponent(this, SphereRadius, FinalColor);
		}
	}
}

void UAtomComponent::OnRegister()
{
	Super::OnRegister();
	RegisterAtomSoundInfoComponent();
}
#endif /* WITH_EDITORONLY_DATA */

void UAtomComponent::OnUnregister()
{
	Super::OnUnregister();

	AActor* Owner = GetOwner();
	if (!Owner || bStopWhenOwnerDestroyed) {
		Stop();
	}
}

void UAtomComponent::OnUpdateTransform(EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport)
{
	Super::OnUpdateTransform(UpdateTransformFlags, Teleport);

	/* 音源位置の更新を通知 */
	bTransformUpdated = true;
}

FVector UAtomComponent::UpdateSourcePosition(FVector& NewPosition)
{
	AddRelativeLocation(-1 * SoundRelativeLocationWithAreaSoundVolume);
	SoundRelativeLocationWithAreaSoundVolume = (NewPosition - GetComponentLocation());
	AddRelativeLocation(SoundRelativeLocationWithAreaSoundVolume);
	return NewPosition;
}

FVector UAtomComponent::UpdateTransformForAreaSoundVolume(FVector &SourcePosition, bool bHasOwner, AActor* Owner)
{
	FVector result_source_pos = SourcePosition;
	/* AreaSoundVolume処理 */
	if (bUseAreaSoundVolume && !AreaSoundVolume) {
		bIsSwitchedListenerPosBetweenInsideToOutSide = false;
		AreaSoundVolume = AAtomAreaSoundVolume::GetSoundShapeSettings(result_source_pos);
	}

	AAtomAreaSoundVolume* atom_sound_shape_volume = AreaSoundVolume;
	if (!atom_sound_shape_volume) {
		return result_source_pos;
	}

	if (!Sound || !Sound->bUseAreaSoundVolume || !bUseAreaSoundVolume) {
		return result_source_pos;
	}

	if (FrameNum % Sound->UpdateRateForFrame == 0) {
		FrameNum = 1;
	} else {
		FrameNum++;
		return result_source_pos;
	}

	const FVector ListenerPosition = Listener->GetListeningPoint();
	FVector NearestPosition;
	float distance = atom_sound_shape_volume->GetBrushComponent()->GetClosestPointOnCollision(ListenerPosition, NearestPosition);
	if (distance > 0) {
		if (bHasOwner && Owner) {
			Owner->SetActorLocation(NearestPosition);
		} else {
			/* AreaSoundVolume外淵でListenerに最も近いポイントをSourcePositionにする */
			/* 1フレーム前のAddRelativeLocationを減算 */
			result_source_pos = UpdateSourcePosition(NearestPosition);
		}
	} else {
		if (bHasOwner && Owner) {
			Owner->SetActorLocation(ListenerPosition);
		} else {
			/* AreaSoundVolume内に入っているときはSourcePositionをListenerPositionの位置にする */
			FVector listener_position = ListenerPosition;
			result_source_pos = UpdateSourcePosition(listener_position);
		}
	}
	
	return result_source_pos;
}

#if WITH_EDITOR
FEditorViewportClient* UAtomComponent::CheckWhetherExistingAtAnimationEditor()
{
	UWorld* g_world = this->GetWorld();
	if (!g_world || !g_world->IsPreviewWorld()) {
		return nullptr;
	}

	TArray <FEditorViewportClient*> editor_viewport_clients = GEditor->GetAllViewportClients();
	for (auto It = editor_viewport_clients.CreateConstIterator(); It; ++It) {
		if (g_world != (*It)->GetWorld()) {
			continue;
		}
		FAnimationViewportClient* anim_viewport = static_cast<FAnimationViewportClient*>(*It);
		if (anim_viewport) {
			return (*It);
		}
	}
	
	return nullptr;
}

void UAtomComponent::UpdateListenerTransformInAnimationEditor(const FEditorViewportClient* const anim_viewport)
{
	if (!Listener) {
		return;
	}

	if (!anim_viewport) {
		Listener->SetEditorPreviewMode(false);
		return;
	}

	Listener->SetEditorPreviewMode(true);

	FVector CameraLoc = anim_viewport->GetViewTransform().GetLocation();
	FRotator CameraRot = anim_viewport->GetViewTransform().GetRotation();
	Listener->UpdatePreviewListenerTransform(CameraLoc, CameraRot);
	return;
}
#endif

void UAtomComponent::UpdateTransform(bool bHasOwner)
{
	if (Source == NULL) {
		return;
	}

	AActor* Owner = GetOwner();

	/* ソースの座標を更新 */
	FVector SourcePosition = (bHasOwner && Owner) ? Owner->GetActorLocation() : GetComponentLocation();

	/* AreaSoundVolume処理 */
	SourcePosition = UpdateTransformForAreaSoundVolume(SourcePosition, bHasOwner, Owner);

	CriAtomExVector pos;
	pos.x = SourcePosition.X * DistanceFactor;
	pos.y = SourcePosition.Y * DistanceFactor;
	pos.z = SourcePosition.Z * DistanceFactor;
	criAtomEx3dSource_SetPosition(Source, &pos);

	/* ソースの向きを更新 */
	const FRotator SourceRotation = (bHasOwner && Owner) ? Owner->GetActorRotation() : GetComponentRotation();
	CriAtomExVector front, top;
	FQuat SourceRot_Quat = SourceRotation.Quaternion();
	FVector FrontVector = SourceRot_Quat.GetForwardVector();
	FVector TopVector = SourceRot_Quat.GetUpVector();
	front.x = FrontVector.X;
	front.y = FrontVector.Y;
	front.z = FrontVector.Z;
	top.x = TopVector.X;
	top.y = TopVector.Y;
	top.z = TopVector.Z;
	criAtomEx3dSource_SetOrientation(Source, &front, &top);

	/* 更新の適用 */
	criAtomEx3dSource_Update(Source);

	/* 音源位置の更新完了を通知 */
	bTransformUpdated = false;
};

const UAtomSoundObject * UAtomComponent::GetAppliedSoundObject() const
{
	return AppliedSoundObject;
}

void UAtomComponent::AllocateResource()
{
	/* デフォルトオブジェクトかどうかチェック */
	if (HasAnyFlags(RF_ClassDefaultObject)) {
		/* デフォルトオブジェクトの場合は何もしない */
		return;
	}

	/* プレーヤハンドルが確保済みの場合は何もしない */
	if (Player != NULL) {
		return;
	}

	/* Listenerが確保されていなければリスナを取得 */
	/* 注意）デフォルトで何らかのリスナを設定しておかないと	*/
	/* 　　　3Dポジショニング音再生時にエラーが発生する。	*/
	if (Listener == nullptr) {
		Listener = FAtomListener::GetNearestListener(GetComponentLocation());
		if (Listener == nullptr) {
			Listener = FAtomListener::GetListener();
			if (Listener == nullptr) {
				return;
			}
		}
	}

	/* Listenr位置情報、Source位置情報の初期化 */
	FVector SourceLocation = GetComponentLocation();
	PreviousSourceLocation.x = SourceLocation.X * DistanceFactor;
	PreviousSourceLocation.y = SourceLocation.Y * DistanceFactor;
	PreviousSourceLocation.z = SourceLocation.Z * DistanceFactor;

	/* ソースの作成 */
	Source = criAtomEx3dSource_Create(NULL, SourceWork, sizeof(SourceWork));
	if (Source == NULL) {
		/* ソースが確保できない場合は何もしない */
		return;
	}

	/* プレーヤの作成 */
	Player = criAtomExPlayer_Create(NULL, PlayerWork, sizeof(PlayerWork));
	if (Player == NULL) {
		/* プレーヤが確保できない場合はソースも破棄 */
		criAtomEx3dSource_Destroy(Source);
		Source = NULL;
		return;
	}

	/* コールバックオブジェクトの配列に追加 */
	UAtomCallbackManager::InsertCallbackObjectListForAtomPlayerHn(Player, this);

	if (bUsePlaylist != false) {
		/* シームレス連結再生用にプレイリストを作成 */
		if (Playlist == nullptr) {
			Playlist = new FAtomPlaylist();
		}

		/* データ要求コールバックを設定 */
		criAtomExPlayer_SetDataRequestCallback(Player, UAtomComponent::OnDataRequest, Playlist);
	}

	if (!AtomAudioVolumeHandler) {
		AtomAudioVolumeHandler = new FAtomAudioVolumeHandler();
	}

	/* 距離係数の取得 */
	if (UAtomComponent::DefaultDistanceFactor <= 0.0) {
		/* 距離係数の実質的な初期化 */
		UAtomComponent::SetDefaultDistanceFactor(UCriWareInitializer::GetDistanceFactor());
	}
	DistanceFactor = UAtomComponent::DefaultDistanceFactor;

	/* ソース、リスナをプレーヤに関連付け */
	criAtomExPlayer_Set3dListenerHn(Player, Listener->GetListenerHandle());
	criAtomExPlayer_Set3dSourceHn(Player, Source);

#if defined(XPT_TGT_IOS) || defined(XPT_TGT_ANDROID) || defined(XPT_TGT_SWITCH)
	/* 5.1ch環境向けにパンスピーカータイプを設定 */
	criAtomExPlayer_SetPanSpeakerType(Player, CRIATOMEX_PAN_SPEAKER_TYPE_4CH);
#else
	/* 7.1ch環境向けにパンスピーカータイプを設定 */
	criAtomExPlayer_SetPanSpeakerType(Player, CRIATOMEX_PAN_SPEAKER_TYPE_6CH);
#endif

	/* サウンドオブジェクトを実際に設定 */
	ApplySoundObject(SoundObject);
}

void UAtomComponent::ReleaseResource()
{
	/* デフォルトオブジェクトかどうかチェック */
	if (HasAnyFlags(RF_ClassDefaultObject)) {
		/* デフォルトオブジェクトの場合は何もしない */
		return;
	}

	/* キューシートのリリース */
	if (CueSheet != nullptr) {
		CueSheet->Release();
#if WITH_EDITOR
		/* エディタ上でアセットのプレビューを行う際は既存キューシートを強制的に破棄する */
		if (bIsPreviewSound && (!CueSheet->IsRooted())) {
			CueSheet->ForceUnload();
		}
#endif
		CueSheet = nullptr;
	}

	/* サウンドの参照を破棄 */
	Sound = nullptr;

	/* リージョンの参照を破棄 */
	Region = nullptr;

	/* ソースとプレーヤを破棄 */
	/* 注意）GC処理の順序によっては、ライブラリ終了処理後にここに来る可能性がある。 */
	if (criAtomEx_IsInitialized() != CRI_FALSE) {
		/* 補足）SoundObjectの適用を解除する必要なし。				*/
		/* 　　　criAtomExPlayer_Destroy関数内で登録が解除される。	*/
		if (Player != NULL) {
			/* コールバックオブジェクトの配列から削除 */
			UAtomCallbackManager::RemoveCallbackObjectListForAtomPlayerHn(Player);
			criAtomExPlayer_Destroy(Player);
		}
		if (Source != NULL) {
			criAtomEx3dSource_Destroy(Source);
		}
	}

	/* パラメータのクリア */
	Source = NULL;
	Player = NULL;
	Listener = nullptr;
	DistanceFactor = 1.0f;

	/* シームレス連結再生用のプレイリストを破棄 */
	if (Playlist != nullptr) {
		delete Playlist;
		Playlist = nullptr;
	}

	if (AtomAudioVolumeHandler != nullptr) {
		delete AtomAudioVolumeHandler;
		AtomAudioVolumeHandler = nullptr;
	}
}

#if WITH_EDITOR
void UAtomComponent::DrawDebugShape()
{
	/* AttenuationSettingsの取得 */
	const auto* Attenuation = GetAttenuationSettingsToApply();
	if (Attenuation == nullptr) {
		return;
	}

	/* 減衰範囲の描画に必要なUWorldを取得 */
	UWorld* World = (GEditor ? (GEditor->PlayWorld) : nullptr);
	ULocalPlayer* LocalPlayer = (GEngine ? (GEngine->GetDebugLocalPlayer()) : nullptr);
	if (LocalPlayer) {
		UWorld* PlayerWorld = LocalPlayer->GetWorld();
		if (!World) {
			World = PlayerWorld;
		}
	}
	if (!World) {
		/* 取得失敗時は何もしない */
		return;
	}

	/* 距離減衰描画に必要なパラメータを取得 */
	const FRotator SourceRotation = GetComponentRotation();
	const FVector SourcePosition = GetComponentLocation();
	const FTransform SourceTransform = FTransform(SourceRotation, SourcePosition);
	FColor AudioOuterRadiusColor = FColor(255, 0, 0);
	FColor AudioInnerRadiusColor = FColor(155, 0, 0);
	if (Sound) {
		AudioOuterRadiusColor = Sound->AudioOuterRadiusColor;
		AudioInnerRadiusColor = Sound->AudioInnerRadiusColor;
	}

	/* 距離減衰形状の描画 */
	/* 備考）UnrealEngine.cppのUEngine::RenderStatSoundsを参考に作成。 */
	switch (Attenuation->AttenuationShape) {
		case EAttenuationShape::Sphere:
			if (Attenuation->FalloffDistance > 0.0f) {
				DrawDebugSphere(World, SourceTransform.GetTranslation(), Attenuation->AttenuationShapeExtents.X + Attenuation->FalloffDistance, 10, AudioOuterRadiusColor);
				DrawDebugSphere(World, SourceTransform.GetTranslation(), Attenuation->AttenuationShapeExtents.X, 10, AudioInnerRadiusColor);
			} else {
				DrawDebugSphere(World, SourceTransform.GetTranslation(), Attenuation->AttenuationShapeExtents.X, 10, AudioOuterRadiusColor);
			}
			break;

		case EAttenuationShape::Box:
			if (Attenuation->FalloffDistance > 0.0f) {
				DrawDebugBox(World, SourceTransform.GetTranslation(), Attenuation->AttenuationShapeExtents + FVector(Attenuation->FalloffDistance), SourceTransform.GetRotation(), AudioOuterRadiusColor);
				DrawDebugBox(World, SourceTransform.GetTranslation(), Attenuation->AttenuationShapeExtents, SourceTransform.GetRotation(), AudioInnerRadiusColor);
			} else {
				DrawDebugBox(World, SourceTransform.GetTranslation(), Attenuation->AttenuationShapeExtents, SourceTransform.GetRotation(), AudioOuterRadiusColor);
			}
			break;

		case EAttenuationShape::Capsule:
			if (Attenuation->FalloffDistance > 0.0f) {
				DrawDebugCapsule(World, SourceTransform.GetTranslation(), Attenuation->AttenuationShapeExtents.X + Attenuation->FalloffDistance, Attenuation->AttenuationShapeExtents.Y + Attenuation->FalloffDistance, SourceTransform.GetRotation(), AudioOuterRadiusColor);
				DrawDebugCapsule(World, SourceTransform.GetTranslation(), Attenuation->AttenuationShapeExtents.X, Attenuation->AttenuationShapeExtents.Y, SourceTransform.GetRotation(), AudioInnerRadiusColor);
			} else {
				DrawDebugCapsule(World, SourceTransform.GetTranslation(), Attenuation->AttenuationShapeExtents.X, Attenuation->AttenuationShapeExtents.Y, SourceTransform.GetRotation(), AudioOuterRadiusColor);
			}
			break;

		case EAttenuationShape::Cone:
		{
			const FVector Origin = SourceTransform.GetTranslation() - (SourceTransform.GetUnitAxis(EAxis::X) * Attenuation->ConeOffset);

			if (Attenuation->FalloffDistance > 0.0f || Attenuation->AttenuationShapeExtents.Z > 0.0f) {
				const float OuterAngle = FMath::DegreesToRadians(Attenuation->AttenuationShapeExtents.Y + Attenuation->AttenuationShapeExtents.Z);
				const float InnerAngle = FMath::DegreesToRadians(Attenuation->AttenuationShapeExtents.Y);
				DrawDebugCone(World, Origin, SourceTransform.GetUnitAxis(EAxis::X), Attenuation->AttenuationShapeExtents.X + Attenuation->FalloffDistance + Attenuation->ConeOffset, OuterAngle, OuterAngle, 10, AudioOuterRadiusColor);
				DrawDebugCone(World, Origin, SourceTransform.GetUnitAxis(EAxis::X), Attenuation->AttenuationShapeExtents.X + Attenuation->ConeOffset, InnerAngle, InnerAngle, 10, AudioInnerRadiusColor);
			} else {
				const float Angle = FMath::DegreesToRadians(Attenuation->AttenuationShapeExtents.Y);
				DrawDebugCone(World, Origin, SourceTransform.GetUnitAxis(EAxis::X), Attenuation->AttenuationShapeExtents.X + Attenuation->ConeOffset, Angle, Angle, 10, AudioOuterRadiusColor);
			}
		}
		break;

		default:
			check(false);
			break;
	}
}
#endif

void UAtomComponent::NotifyAudioFinished()
{
	/* 再生開始前は何もしない */
	if (bIsPlayed == false) {
		return;
	}

	/* イベントのトリガ */
	if (OnAudioFinished.IsBound()) {
		OnAudioFinished.Broadcast();
	}
	if (OnAudioFinishedNative.IsBound()) {
		OnAudioFinishedNative.Broadcast(this);
	}

	/* 再生終了を通知 */
	bIsPlayed = false;
}

void UAtomComponent::OnWorldCleanedUp(UWorld* World, bool bSessionEnded, bool bCleanupResources)
{
	/* 自身が所属するワールドかどうかチェック */
	UWorld* MyWorld = GetWorld();
	if (MyWorld != World) {
		return;
	}

	/* セッション終了時は音声を停止 */
	if (bSessionEnded || bCleanupResources) {
		Stop();
	}

	/* リソース破棄要求時はコンポーネントの破棄を要求 */
	if (bCleanupResources) {
		/* ワールド破棄時はイベントのトリガを禁止 */
		bIsPlayed = false;
		this->SetComponentTickEnabled(false);

		/* コンポーネントの破棄 */
		DestroyComponent();
	}
}

void UAtomComponent::UpdateDistanceFactor(float ArgDistanceFactor)
{
	if (ArgDistanceFactor <= 0.0f) {
		UE_LOG(LogCriWareRuntime, Error, TEXT("Invalid distance factor."));
		return;
	}
	/* 以前の DistanceFactor が適用されたメンバーを新しい値で掛け直す */
	float invDistanceFactor = ArgDistanceFactor / DistanceFactor;
	{
		PreviousSourceLocation.x = PreviousSourceLocation.x * invDistanceFactor;
		PreviousSourceLocation.y = PreviousSourceLocation.y * invDistanceFactor;
		PreviousSourceLocation.z = PreviousSourceLocation.z * invDistanceFactor;
	}
	/* 新しい DistanceFactor の保存 */
#if WITH_EDITOR
	/* Play In Editorモードで減衰距離を表示するため、キュー情報から取得 */
	if (GIsPlayInEditorWorld) {
		if (MaxDistanceSphereComponent) {
			MaxDistanceSphereComponent->SetSphereRadius(
				MaxDistanceSphereComponent->GetUnscaledSphereRadius() * DistanceFactor / ArgDistanceFactor, false);
		}
		if (MinDistanceSphereComponent) {
			MinDistanceSphereComponent->SetSphereRadius(
				MinDistanceSphereComponent->GetUnscaledSphereRadius() * DistanceFactor / ArgDistanceFactor, false);
		}
		if (EconomicDistanceSphereComponent && Sound) {
			const float AttenuationDistance = (Sound->GetMaxAttenuationDistance() * UCriWareInitializer::GetDistanceFactor()) / ArgDistanceFactor;
			const float SphereRadius = AttenuationDistance + Sound->GetEconomicTickDistanceMarginToApply();
			EconomicDistanceSphereComponent->SetSphereRadius(SphereRadius, false);
		}
		if (CullDistanceSphereComponent && Sound) {
			const float AttenuationDistance = (Sound->GetMaxAttenuationDistance() * UCriWareInitializer::GetDistanceFactor()) / ArgDistanceFactor;
			const float SphereRadius = AttenuationDistance + Sound->GetCullDistanceMarginToApply();
			CullDistanceSphereComponent->SetSphereRadius(SphereRadius, false);
		}
	}
#endif
	DistanceFactor = ArgDistanceFactor;
	/* CRI Atom 3dsource 側に更新を反映 */
	UpdateTransform();
}

void UAtomComponent::SetDefaultDistanceFactor(float ArgDistanceFactor)
{
	UAtomComponent::DefaultDistanceFactor = ArgDistanceFactor;
}

void UAtomComponent::ApplyLoopSetting()
{
	EAtomLoopSetting LoopSettingToApply;

	if (LoopSetting == EAtomLoopSetting::Inherited && Sound != nullptr) {
		LoopSettingToApply = Sound->LoopSetting;
	} else {
		LoopSettingToApply = LoopSetting;
	}

	if (LoopSettingToApply == EAtomLoopSetting::Loop) {
		criAtomExPlayer_LimitLoopCount(Player, CRIATOMEXPLAYER_FORCE_LOOP);
	} else if (LoopSettingToApply == EAtomLoopSetting::OneShot) {
		criAtomExPlayer_LimitLoopCount(Player, CRIATOMEXPLAYER_IGNORE_LOOP);
	} else {
		criAtomExPlayer_LimitLoopCount(Player, CRIATOMEXPLAYER_NO_LOOP_LIMITATION);
	}
}

void UAtomComponent::ChangeStatus(CriAtomExPlayerStatus PlayerStatus)
{
	/* コンポーネントのステータスに変換 */
	EAtomComponentStatus NewStatus;

	bool IsTickable = false;
	switch (PlayerStatus) {
	case CRIATOMEXPLAYER_STATUS_STOP:
		NewStatus = EAtomComponentStatus::Stop;
		break;

	case CRIATOMEXPLAYER_STATUS_PREP:
		NewStatus  = EAtomComponentStatus::Prep;
		IsTickable = true;
		break;

	case CRIATOMEXPLAYER_STATUS_PLAYING:
		NewStatus  = EAtomComponentStatus::Playing;
		IsTickable = true;
		break;

	case CRIATOMEXPLAYER_STATUS_PLAYEND:
		NewStatus = EAtomComponentStatus::PlayEnd;
		break;

	case CRIATOMEXPLAYER_STATUS_ERROR:
	default:
		NewStatus = EAtomComponentStatus::Error;
		break;
	}

	SetComponentTickEnabled(IsTickable);

	// status event
	if (Status != NewStatus) {
		Status = NewStatus;
		OnStatusChanged.Broadcast(Status, this);
	}
}

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION <= 23
void UAtomComponent::SetActiveFlag(bool InActive)
{
	bIsActive = InActive;
}
#endif

#if WITH_EDITOR
void UAtomComponent::SetAnimSpriteShowFlags(const bool& ShowFlag)
{
	bAnimSpriteShowFlags = ShowFlag;
}

bool UAtomComponent::GetAnimSpriteShowFlags()
{
	return bAnimSpriteShowFlags;
}

bool UAtomComponent::IsExistInAnimationEditor() const
{
	/* 参照しているワールドを取得 */
	UWorld* World = this->GetWorld();
	if (IsValid(World) == true) {
		/* プレビューゲームワールド(エディタ時またはゲーム時)を確認 */
		if (World->IsPreviewWorld() == true) {
			/* エディタビューポートの配列を取得 */
			TArray <FEditorViewportClient*> EditorViewportClient = GEditor->GetAllViewportClients();
			for (FEditorViewportClient*& ViewportClient : EditorViewportClient) {
				/* 自分が参照しているワールドと一致しているか確認 */
				if (World == ViewportClient->GetWorld()) {
					return true;
				}
			}
		}
	}

	return false;
}

void UAtomComponent::SetSpriteShowFlags()
{
	if (IsExistInAnimationEditor() == true) {
		/* スプライト表示フラグの設定 */
		bVisualizeComponent = bAnimSpriteShowFlags;
		/* スプライトを非表示にする場合 */
		if (bVisualizeComponent == false) {
			/* スプライトコンポーネントを破棄 */
			if (SpriteComponent) {
				SpriteComponent->DestroyComponent();
				SpriteComponent = nullptr;
			}
		}
	}
}
#endif

void UAtomComponent::OnExecuteBeatSyncCallback(const FAtomBeatSyncInfo & BeatSyncInfo)
{
	if (OnAtomBeatSyncCallback.IsBound() == true) {
		OnAtomBeatSyncCallback.Broadcast(this, BeatSyncInfo);
	}
}

void UAtomComponent::OnExecuteSequenceCallback(const FAtomSequenceInfo & SequenceInfo)
{
	if (OnAtomSequenceCallback.IsBound() == true) {
		OnAtomSequenceCallback.Broadcast(this, SequenceInfo);
	}
}

#if WITH_EDITOR

void UAtomComponent::PausePIE()
{
	UE_LOG(LogCriWareRuntime, Verbose, TEXT("%s.PausePIE"), *GetFName().ToString());

	WasPlayingInPIE = !IsPaused();

	if (WasPlayingInPIE)
	{
		Pause(true);
	}
}


void UAtomComponent::ResumePIE()
{
	UE_LOG(LogCriWareRuntime, Verbose, TEXT("%s.ResumePIE"), *GetFName().ToString());

	if (WasPlayingInPIE)
	{
		Pause(false);
	}
}

#endif

//~ DEPRECATED functions

bool UAtomComponent::HasBeenEconomicTick() const { return IsReducingTickFrequency(); }
float UAtomComponent::GetCurrentEconomicTickMarginDistance() const { return GetEconomicTickDistanceMargin(); }
float UAtomComponent::GetCurrentEconomicTickBoundaryDistance() const { return GetEconomicTickDistance(); }
float UAtomComponent::GetCurrentEconomicTickFrequency() const { return GetEconomicTickFrequency(); }
float UAtomComponent::GetCurrentCullingMarginDistance() const { return GetCullDistanceMargin(); }
float UAtomComponent::GetCurrentCullingBoundaryDistance() const { return GetCullDistance(); }
float UAtomComponent::GetCurrentMaxAttenuationDistance() const { return GetMaxAttenuationDistance(); }

//~ end of DEPRECATED functions

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/
#undef LOCTEXT_NAMESPACE

/* --- end of file --- */
