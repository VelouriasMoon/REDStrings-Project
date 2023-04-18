/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2014 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom Statics
 * File     : AtomStatics.cpp
 *
 ****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* モジュールヘッダ */
#include "AtomStatics.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareRuntimePrivatePCH.h"
#include "CriWareInitializer.h"
#include "AtomSoundManager.h"
#include "AtomDisposer.h"

/* Unreal Engine 4関連ヘッダ */
#include "UObject/Package.h"
#include "GameFramework/WorldSettings.h"
#include "Containers/Map.h"

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/
#define LOCTEXT_NAMESPACE "AtomStatics"

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
TMap<TPair<int32, int32>, int32> UAtomStatics::DictForAtomComponentIdsAtomPlayGateCreated;

/* 距離係数の初期化。この時点では UCriWareInitializer::GetDistanceFactor() は正しい値を返さないので 0 初期化 */
float UAtomStatics::CurrentDistanceFactor = 0.0f;

/***************************************************************************
 *      クラス定義
 *      Class Definition
 ***************************************************************************/
FAtomComponentParams::FAtomComponentParams()
	:SoundObject(nullptr)
	,AttenuationSettings(nullptr)
{
	DefaultVolume = AtomComponentPropertyDefaultValue::DefaultVolume;
	DefaultPitchMultiplier = AtomComponentPropertyDefaultValue::DefaultPitchMultiplier;
	StartTime = AtomComponentPropertyDefaultValue::StartTime;
	bEnableMultipleSoundPlayback = AtomComponentPropertyDefaultValue::bEnableMultipleSoundPlayback;
	bUsePlaylist = AtomComponentPropertyDefaultValue::bUsePlaylist;
	bIsMovable = AtomComponentPropertyDefaultValue::bIsMovable;
	bCanStraddleAudioVolume = AtomComponentPropertyDefaultValue::bCanStraddleAudioVolume;
	bUseAudioVolume = AtomComponentPropertyDefaultValue::bUseAudioVolume;
	bUseAreaSoundVolume = AtomComponentPropertyDefaultValue::bUseAreaSoundVolume;
	DefaultBlockIndex = AtomComponentPropertyDefaultValue::DefaultBlockIndex;
	LoopSetting = AtomComponentPropertyDefaultValue::LoopSetting;
	Rotation = FRotator::ZeroRotator;
}

UAtomStatics::UAtomStatics()
{
#if WITH_EDITOR
	/* Localization of unreal properties metadata with LOCTEXT markups and reflection */
	CRI_LOCCLASS(GetClass());
#endif
}

UAtomComponent* UAtomStatics::AllocateComponent()
{
	UAtomComponentPool* Pool = UAtomComponentPool::GetDefaultPool();
	if (Pool == nullptr) {
		return nullptr;
	}

	return Pool->Acquire();
}

void UAtomStatics::PlaySoundAtLocation(UObject* WorldContextObject, class USoundAtomCue* Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings)
{
	SpawnSoundAtLocation(WorldContextObject, Sound, Location, FRotator::ZeroRotator, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings, ConcurrencySettings);
}

void UAtomStatics::PlaySoundAtLocation(UObject* WorldContextObject, class USoundAtomCue* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings)
{
	SpawnSoundAtLocation(WorldContextObject, Sound, Location, Rotation, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings, ConcurrencySettings);
}

UAtomComponent* UAtomStatics::SpawnSound2D(const UObject* WorldContextObject, USoundAtomCue* Sound, float PitchMultiplier, float StartTime, bool bPersistAcrossLevelTransition, bool bAutoDestroy)
{
#if WITH_EDITOR
	if (!Sound || !GEngine || !GEngine->UseSound()) {
#else
	/* GEngine->UseSound() always returns false in running outside Editor, because CriWareInitializer invokes "-nosound" option. */
	if (!Sound || !GEngine) {
#endif
		return nullptr;
	}

	/* 音声再生の可否をチェック */
	UWorld* ThisWorld = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (!ThisWorld || !ThisWorld->bAllowAudioPlayback || ThisWorld->GetNetMode() == NM_DedicatedServer) {
		return nullptr;
	}

	const bool bIsInGameWorld = ThisWorld->IsGameWorld();
	AWorldSettings *WorldSettings = ThisWorld->GetWorldSettings();

	/* 音声再生用にAtomComponentを確保 */
	UAtomComponent* AtomComponent = UAtomStatics::AllocateComponent();
	if (AtomComponent) {
		/* 必要に応じてルート化 */
		if (bPersistAcrossLevelTransition) {
			AtomComponent->MarkAsRooted();
		} else if (WorldSettings) {
			FString ObjName = MakeUniqueObjectName(WorldSettings, UAtomComponent::StaticClass()).ToString();
			AtomComponent->Rename(*ObjName, WorldSettings,
				REN_ForceNoResetLoaders | REN_DontCreateRedirectors | REN_DoNotDirty | REN_NonTransactional);
		}

		AtomComponent->SetPitchMultiplier(PitchMultiplier);
		AtomComponent->bIsUISound = true;
		AtomComponent->bAutoDestroy = bAutoDestroy;
		AtomComponent->bAllowAnyoneToDestroyMe = true;
		AtomComponent->bOnly2DSound = true;
		AtomComponent->SetSound(Sound);

		if (!bPersistAcrossLevelTransition) {
			/* 再生終了検知のためRegisterComponentを実行 */
			/* 注意）シーク再生をリクエスト済みなので、Auto ActivateはOFFに設定。   */
			/* 　　　→Activate時の再生でシーク再生がキャンセルされるのを防止。     */
			AtomComponent->bAutoActivate = false;
			AtomComponent->RegisterComponent();
		}

		AtomComponent->PlayWithoutSoundCulling(StartTime);
	}

	return AtomComponent;
}

UAtomComponent* UAtomStatics::CreateRootedAtomComponent(const UObject* WorldContextObject, bool bAutoDestroy)
{
#if WITH_EDITOR
	if (!GEngine || !GEngine->UseSound()) {
#else
	if (!GEngine) {
#endif
		return nullptr;
	}

	UWorld* ThisWorld = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (!ThisWorld || !ThisWorld->bAllowAudioPlayback || ThisWorld->GetNetMode() == NM_DedicatedServer) {
		return nullptr;
	}

	const bool bIsInGameWorld = ThisWorld->IsGameWorld();
	AWorldSettings *WorldSettings = ThisWorld->GetWorldSettings();

	/* 音声再生用にAtomComponentを確保 */
	UAtomComponent* AtomComponent = UAtomStatics::AllocateComponent();
	if (AtomComponent) {
		/* ルート化 */
		AtomComponent->MarkAsRooted();

		AtomComponent->bIsUISound = true;
		AtomComponent->bAutoDestroy = bAutoDestroy;
		AtomComponent->bAllowAnyoneToDestroyMe = true;
	}

	return AtomComponent;
}

bool UAtomStatics::ShouldCullSoundPlayback(USoundAtomCue* Sound, FVector Location, const FSoundAttenuationSettings* AttenuationSettings, bool Is3DSound)
{
	/* 3Dサウンドでなければカリングしない */
	if (Is3DSound == false) {
		return false;
	}

	/* Soundがセットされていなければカリングしない */
	if (!Sound) {
		return false;
	}

	/* カリング機能がOFFのときはカリングしない */
	if (Sound->IsDistanceCullingEnabled() == false) {
		return false;
	}

	/* ループサウンドはカリングしない */
	if (Sound->IsLooping() == true) {
		return false;
	}

	/* カリングしない距離を算出する */
	float MaxDistance = WORLD_MAX;

	auto AttenuationSettingsToApply = AttenuationSettings ? AttenuationSettings : Sound->GetAttenuationSettingsToApply();
	
	/* 距離減衰の最大距離を取得する */
	float MaxAttenuationDistance;
	if (AttenuationSettingsToApply != nullptr) {
		MaxAttenuationDistance = AttenuationSettingsToApply->FalloffDistance;
	} else {
		MaxAttenuationDistance = Sound->GetMaxAttenuationDistanceToApply();
	}

	MaxDistance = MaxAttenuationDistance + Sound->GetCullDistanceMarginToApply();
	

	/* (2地点間の距離(sqrt計算済み) > MaxDistance) の比較をするよりも */
	/* (2地点間の距離の2乗(sqrt計算を省略) > MaxDistanceの2乗) の比較を行う方が処理効率が良い。 */
	/* 故にMaxDistanceの2乗を算出する。 */
	/* pow関数は処理に時間がかかる上、最適化もあまり期待できないため使用しない。 */
	const double MaxDistanceSquared = MaxDistance * MaxDistance;

	const FVector & SourceLocation = Location;

	/* デフォルトのリスナの座標を取得 */
	FAtomListener* DefaultListener = FAtomListener::GetNearestListener(SourceLocation);
	if (DefaultListener == NULL) {
		DefaultListener = FAtomListener::GetListener();
		if (DefaultListener == NULL) {
			return false;
		}
	}
	const FVector ListenerLocation = DefaultListener->GetListenerLocation();

	/* MaxDistance2と同じ理由で「2地点間の距離の2乗」を算出するだけにとどめ、ルートまでは計算しない。 */
	const double SourceListenerDistanceSquared = (SourceLocation - ListenerLocation).SizeSquared();

	/* カリングすべきかどうか判定して返す */
	return SourceListenerDistanceSquared > MaxDistanceSquared;
}

UAtomComponent* UAtomStatics::SpawnSoundAtLocation(const UObject* WorldContextObject, class USoundAtomCue* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	if (!GEngine) {
		return nullptr;
	}

	/* 備考）Soundがnullptrの場合はAtomComponentの作成のみを行う。 */

	/* 音声再生の可否をチェック */
	UWorld* ThisWorld = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (!ThisWorld || !ThisWorld->bAllowAudioPlayback || ThisWorld->GetNetMode() == NM_DedicatedServer) {
		return nullptr;
	}

	const bool bIsInGameWorld = ThisWorld->IsGameWorld();
	AWorldSettings *WorldSettings = ThisWorld->GetWorldSettings();

	const FSoundAttenuationSettings* AttenuationCore = nullptr;
	if (AttenuationSettings) {
		AttenuationCore = &(AttenuationSettings->Attenuation);
	}

	/* カリングすべきであればAtomComponentを作成せずに終了する。 */
	if (ShouldCullSoundPlayback(Sound, Location, AttenuationCore, true)) {
		return nullptr;
	}

	/* 音声再生用にAtomComponentを確保 */
	UAtomComponent* AtomComponent = UAtomStatics::AllocateComponent();
	if (AtomComponent) {
		if (WorldSettings) {
			FString ObjName = MakeUniqueObjectName(WorldSettings, UAtomComponent::StaticClass()).ToString();
			AtomComponent->Rename(*ObjName, WorldSettings,
				REN_ForceNoResetLoaders | REN_DontCreateRedirectors | REN_DoNotDirty | REN_NonTransactional);
		}

		AtomComponent->SetWorldLocationAndRotation(Location, Rotation);
		AtomComponent->SetPitchMultiplier(PitchMultiplier);
		AtomComponent->DefaultVolume = VolumeMultiplier;
		AtomComponent->AttenuationSettings = AttenuationSettings;
		AtomComponent->bAutoDestroy = bAutoDestroy;
		AtomComponent->bAllowAnyoneToDestroyMe = true;
		AtomComponent->bIsUISound = !bIsInGameWorld;
		AtomComponent->bOnly2DSound = false;

		/* 音声データの指定 */
		if (Sound != nullptr) {
			AtomComponent->SetSound(Sound);
		}

		/* 再生終了検知のためRegisterComponentを実行 */
		/* 注意）シーク再生をリクエスト済みなので、Auto ActivateはOFFに設定。   */
		/* 　　　→Activate時の再生でシーク再生がキャンセルされるのを防止。     */
		AtomComponent->bAutoActivate = false;
		AtomComponent->RegisterComponent();

		/* 再生の開始 */
		if (Sound != nullptr) {
			AtomComponent->PlayWithoutSoundCulling(StartTime);
		}
	}

	return AtomComponent;
}

UAtomComponent* UAtomStatics::SpawnSoundAtLocation(const UObject* WorldContextObject, class USoundAtomCueSheet* CueSheet, FString CueName, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	if (!GEngine) {
		return nullptr;
	}

	/* 備考）CueNameがEmptyの場合はAtomComponentの作成のみを行う。 */

	/* 音声再生の可否をチェック */
	UWorld* ThisWorld = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (!ThisWorld || !ThisWorld->bAllowAudioPlayback || ThisWorld->GetNetMode() == NM_DedicatedServer) {
		return nullptr;
	}

	const bool bIsInGameWorld = ThisWorld->IsGameWorld();
	AWorldSettings *WorldSettings = ThisWorld->GetWorldSettings();

	/* 音声再生用にAtomComponentを確保 */
	UAtomComponent* AtomComponent = UAtomStatics::AllocateComponent();
	if (AtomComponent) {
		if (WorldSettings) {
			FString ObjName = MakeUniqueObjectName(WorldSettings, UAtomComponent::StaticClass()).ToString();
			AtomComponent->Rename(*ObjName, WorldSettings,
				REN_ForceNoResetLoaders | REN_DontCreateRedirectors | REN_DoNotDirty | REN_NonTransactional);
		}

		AtomComponent->SetWorldLocationAndRotation(Location, Rotation);
		AtomComponent->SetPitchMultiplier(PitchMultiplier);
		AtomComponent->DefaultVolume = VolumeMultiplier;
		AtomComponent->AttenuationSettings = AttenuationSettings;
		AtomComponent->bAutoDestroy = bAutoDestroy;
		AtomComponent->bAllowAnyoneToDestroyMe = true;
		AtomComponent->bIsUISound = !bIsInGameWorld;
		AtomComponent->bOnly2DSound = false;

		/* 音声データの指定 */
		if (!CueName.IsEmpty()) {
			AtomComponent->SetSound(CueSheet, CueName);
		}

		/* 再生終了検知のためRegisterComponentを実行 */
		/* 注意）シーク再生をリクエスト済みなので、Auto ActivateはOFFに設定。   */
		/* 　　　→Activate時の再生でシーク再生がキャンセルされるのを防止。     */
		AtomComponent->bAutoActivate = false;
		AtomComponent->RegisterComponent();

		/* 再生の開始 */
		if (!CueName.IsEmpty()) {
			AtomComponent->PlayWithoutSoundCulling(StartTime);
		}
	}

	return AtomComponent;
}

class UAtomComponent* UAtomStatics::SpawnSoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, EAttachLocation::Type LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	/* サウンド未指定時は何もしない */
	if (Sound == nullptr) {
		return nullptr;
	}

	/* アタッチ先の有無をチェック */
	if (AttachToComponent == NULL) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("UAtomStatics::SpawnSoundAttached: NULL AttachComponent specified!"));
		return NULL;
	}

	/* 音声再生の可否をチェック */
	/* 備考）Personaアセットブラウザ等での再生をブロック。 */
	UWorld* ThisWorld = AttachToComponent->GetWorld();
	if (ThisWorld->bAllowAudioPlayback == false) {
		return NULL;
	}

	/* 再生すべき音源の絶対座標を取得 */
	FVector AbsLocation = Location;
	if (LocationType == EAttachLocation::KeepRelativeOffset)
	{
		if (AttachPointName != NAME_None)
		{
			AbsLocation = AttachToComponent->GetSocketTransform(AttachPointName).TransformPosition(Location);
		}
		else
		{
			AbsLocation = AttachToComponent->GetComponentTransform().TransformPosition(Location);
		}
	}
	else if (LocationType == EAttachLocation::SnapToTarget || LocationType == EAttachLocation::SnapToTargetIncludingScale)
	{
		AbsLocation = AttachToComponent->GetSocketLocation(AttachPointName);
	}

	const FSoundAttenuationSettings* AttenuationCore = nullptr;
	if (AttenuationSettings) {
		AttenuationCore = &(AttenuationSettings->Attenuation);
	}

	/* カリングすべきであればAtomComponentを作成せずに終了する。 */
	if (ShouldCullSoundPlayback(Sound, AbsLocation, AttenuationCore, true)) {
		return nullptr;
	}

	/* 音声再生用にAtomComponentを確保 */
	UAtomComponent* AtomComponent = UAtomStatics::AllocateComponent();
	if (AtomComponent) {
		if (AttachToComponent->GetOwner() != nullptr) {
			FString ObjName = MakeUniqueObjectName(AttachToComponent->GetOwner(), UAtomComponent::StaticClass()).ToString();
			AtomComponent->Rename(*ObjName, AttachToComponent->GetOwner(),
				REN_ForceNoResetLoaders | REN_DontCreateRedirectors | REN_DoNotDirty | REN_NonTransactional);
		}

		const bool bIsInGameWorld = AtomComponent->GetWorld()->IsGameWorld();

		if (LocationType == EAttachLocation::SnapToTarget || LocationType == EAttachLocation::SnapToTargetIncludingScale) {
			AtomComponent->AttachToComponent(AttachToComponent, FAttachmentTransformRules::SnapToTargetNotIncludingScale, AttachPointName);
		}
		else {
			AtomComponent->AttachToComponent(AttachToComponent, FAttachmentTransformRules::KeepRelativeTransform, AttachPointName);
			if (LocationType == EAttachLocation::KeepWorldPosition) {
				AtomComponent->SetWorldLocationAndRotation(Location, Rotation);
			}
			else {
				AtomComponent->SetRelativeLocationAndRotation(Location, Rotation);
			}
		}

		AtomComponent->SetPitchMultiplier(PitchMultiplier);
		AtomComponent->DefaultVolume = VolumeMultiplier;
		AtomComponent->AttenuationSettings = AttenuationSettings;
		AtomComponent->bStopWhenOwnerDestroyed = bStopWhenAttachedToDestroyed;
		AtomComponent->bAutoDestroy = bAutoDestroy;
		AtomComponent->bAllowAnyoneToDestroyMe = true;
		AtomComponent->bIsUISound = !bIsInGameWorld;
		AtomComponent->bOnly2DSound = false;
		AtomComponent->SetSound(Sound);

		/* 再生終了検知のためRegisterComponentを実行 */
		/* 注意）シーク再生をリクエスト済みなので、Auto ActivateはOFFに設定。   */
		/* 　　　→Activate時の再生でシーク再生がキャンセルされるのを防止。     */
		AtomComponent->bAutoActivate = false;
		AtomComponent->RegisterComponentWithWorld(AttachToComponent->GetWorld());

		AtomComponent->PlayWithoutSoundCulling(StartTime);
	}

	return AtomComponent;
}

UAtomComponent* UAtomStatics::SpawnSoundAttached(USoundAtomCueSheet* CueSheet, FString CueName, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, EAttachLocation::Type LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	/* アタッチ先の有無をチェック */
	if (AttachToComponent == NULL) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("UAtomStatics::SpawnSoundAttached: NULL AttachComponent specified!"));
		return NULL;
	}

	/* 音声再生の可否をチェック */
	/* 備考）Personaアセットブラウザ等での再生をブロック。 */
	UWorld* ThisWorld = AttachToComponent->GetWorld();
	if (ThisWorld->bAllowAudioPlayback == false) {
		return NULL;
	}

	/* 音声再生用にAtomComponentを確保 */
	UAtomComponent* AtomComponent = UAtomStatics::AllocateComponent();
	if (AtomComponent) {
		if (AttachToComponent->GetOwner() != nullptr) {
			FString ObjName = MakeUniqueObjectName(AttachToComponent->GetOwner(), UAtomComponent::StaticClass()).ToString();
			AtomComponent->Rename(*ObjName, AttachToComponent->GetOwner(),
				REN_ForceNoResetLoaders | REN_DontCreateRedirectors | REN_DoNotDirty | REN_NonTransactional);
		}

		const bool bIsInGameWorld = AtomComponent->GetWorld()->IsGameWorld();

		AtomComponent->AttachToComponent(AttachToComponent, FAttachmentTransformRules::KeepRelativeTransform, AttachPointName);
		if (LocationType == EAttachLocation::KeepWorldPosition) {
			AtomComponent->SetWorldLocationAndRotation(Location, Rotation);
		} else {
			AtomComponent->SetRelativeLocationAndRotation(Location, Rotation);
		}
		AtomComponent->SetPitchMultiplier(PitchMultiplier);
		AtomComponent->DefaultVolume = VolumeMultiplier;
		AtomComponent->AttenuationSettings = AttenuationSettings;
		AtomComponent->bStopWhenOwnerDestroyed = bStopWhenAttachedToDestroyed;
		AtomComponent->bAutoDestroy = bAutoDestroy;
		AtomComponent->bAllowAnyoneToDestroyMe = true;
		AtomComponent->bIsUISound = !bIsInGameWorld;
		AtomComponent->bOnly2DSound = false;
		AtomComponent->SetSound(CueSheet, CueName);

		/* 再生終了検知のためRegisterComponentを実行 */
		/* 注意）シーク再生をリクエスト済みなので、Auto ActivateはOFFに設定。   */
		/* 　　　→Activate時の再生でシーク再生がキャンセルされるのを防止。     */
		AtomComponent->bAutoActivate = false;
		AtomComponent->RegisterComponentWithWorld(AttachToComponent->GetWorld());

		AtomComponent->PlayWithoutSoundCulling(StartTime);
	}

	return AtomComponent;
}

UAtomComponent* UAtomStatics::SpawnSoundAttached
(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, EAttachLocation::Type LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	return SpawnSoundAttached(Sound, AttachToComponent, AttachPointName, Location,  FRotator::ZeroRotator, LocationType, bStopWhenAttachedToDestroyed, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings, ConcurrencySettings, bAutoDestroy);
}

UAtomComponent* UAtomStatics::PlaySoundAttached(USoundAtomCue* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings)
{
	/* Sound未指定時はnullptrを返す */
	if (Sound == nullptr) {
		return nullptr;
	}

	/* アタッチ先の有無をチェック */
	if (AttachToComponent == NULL) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("UAtomStatics::SpawnSoundAttached: NULL AttachComponent specified!"));
		return NULL;
	}

	/* 音声再生の可否をチェック */
	/* 備考）Personaアセットブラウザ等での再生をブロック。 */
	UWorld* ThisWorld = AttachToComponent->GetWorld();
	if (ThisWorld->bAllowAudioPlayback == false) {
		return NULL;
	}

	/* 音声再生用にAtomComponentを確保 */
	UAtomComponent* AtomComponent = UAtomStatics::AllocateComponent();
	if (AtomComponent) {
		if (AttachToComponent->GetOwner() != nullptr) {
			FString ObjName = MakeUniqueObjectName(AttachToComponent->GetOwner(), UAtomComponent::StaticClass()).ToString();
			AtomComponent->Rename(*ObjName, AttachToComponent->GetOwner(),
				REN_ForceNoResetLoaders | REN_DontCreateRedirectors | REN_DoNotDirty | REN_NonTransactional);
		}

		// Attachされたボーンの座標値を取得
		FVector TestLocation = Location;
		if (AttachPointName != NAME_None) {
			TestLocation = AttachToComponent->GetSocketTransform(AttachPointName).GetLocation();
		} else {
			TestLocation = AttachToComponent->GetComponentTransform().GetLocation();
		}

		const bool bIsInGameWorld = AtomComponent->GetWorld()->IsGameWorld();

		AtomComponent->SetWorldLocation(TestLocation);
		AtomComponent->DefaultVolume = VolumeMultiplier;
		AtomComponent->AttenuationSettings = AttenuationSettings;
		AtomComponent->bStopWhenOwnerDestroyed = bStopWhenAttachedToDestroyed;
		AtomComponent->bAutoDestroy = true;
		AtomComponent->bAllowAnyoneToDestroyMe = true;
		AtomComponent->bIsUISound = !bIsInGameWorld;
		AtomComponent->SetSound(Sound);

		/* 再生終了検知のためRegisterComponentを実行 */
		/* 注意）シーク再生をリクエスト済みなので、Auto ActivateはOFFに設定。   */
		/* 　　　→Activate時の再生でシーク再生がキャンセルされるのを防止。     */
		AtomComponent->bAutoActivate = false;
		AtomComponent->RegisterComponent();

		AtomComponent->Play(StartTime);
	}

	return AtomComponent;
}

void UAtomStatics::CalculateAbsLocationToPlaySounds(USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, EAttachLocation::Type LocationType, FVector & AbsLocation)
{
	AbsLocation = Location;
	if (LocationType == EAttachLocation::KeepRelativeOffset)
	{
		if (AttachPointName != NAME_None)
		{
			AbsLocation = AttachToComponent->GetSocketTransform(AttachPointName).TransformPosition(Location);
		}
		else
		{
			AbsLocation = AttachToComponent->GetComponentTransform().TransformPosition(Location);
		}
	}
	else if (LocationType == EAttachLocation::SnapToTarget || LocationType == EAttachLocation::SnapToTargetIncludingScale)
	{
		AbsLocation = AttachToComponent->GetSocketLocation(AttachPointName);
	}
}

UAtomComponent* UAtomStatics::PlaySoundForAnimNotify(USoundAtomCue* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, bool bFollow)
{
	/* Sound未指定時はnullptrを返す */
	if (Sound == nullptr) {
		return nullptr;
	}

	/* アタッチ先の有無をチェック */
	if (AttachToComponent == NULL) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("UAtomStatics::SpawnSoundAttached: NULL AttachComponent specified!"));
		return nullptr;
	}

	/* 音声再生の可否をチェック */
	/* 備考）Personaアセットブラウザ等での再生をブロック。 */
	UWorld* ThisWorld = AttachToComponent->GetWorld();
	if (ThisWorld->bAllowAudioPlayback == false) {
		return nullptr;
	}

	/* ゲーム実行中かどうか判定 */
	bool bIsInGameWorld = true;
#if WITH_EDITOR
	bIsInGameWorld = ThisWorld->IsGameWorld();
#endif

	/* アニメーションエディタ上での発音かどうか判定 */
	const bool IsOnAnimationEditor = (bIsInGameWorld == false);

	if (IsOnAnimationEditor == true) {
		/* ループ音声時やアニメーションエディタ上ではコンポーネントを使用して再生 */
		if (bFollow) {
			return SpawnSoundAttached(Sound, AttachToComponent, AttachPointName, Location, FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset, bStopWhenAttachedToDestroyed, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings, nullptr, true);
		} else {
			FVector AbsLocation;
			CalculateAbsLocationToPlaySounds(AttachToComponent, AttachPointName, Location, EAttachLocation::KeepRelativeOffset, AbsLocation);
			return SpawnSoundAtLocation(AttachToComponent, Sound, AbsLocation, FRotator::ZeroRotator, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings, nullptr, true);
		}
	} else {
		/* ループ音でなく、かつアニメーションエディタ上でない場合はコンポーネントを作成しない */
		/* (処理負荷を下げるため) */

		/* 3Dポジショニングを行うかどうかの判定 */
		const bool bEnabled3DPositioning = (bIsInGameWorld == true);

		FAtomSoundManager::PlaySoundAnimNotify(StartTime, AttachToComponent, AttachPointName, Sound, bEnabled3DPositioning, VolumeMultiplier, PitchMultiplier, AttenuationSettings, bFollow);
		return nullptr;
	}
}

void UAtomStatics::PauseAudioOutput(bool bPause)
{
	if (bPause != false) {
		/* ポーズ */
		criAtomExAsr_PauseOutputVoice(CRI_TRUE);
		criAtomEx_PauseTimer(CRI_TRUE);

		/* レベル遷移時やプレビュー終了時にポーズ解除するアクタを作成 */
		AAtomDisposer* ExistingActor = (AAtomDisposer*)StaticFindObject(
			AAtomDisposer::StaticClass(), ANY_PACKAGE, TEXT("UAtomStatics_PauseAudioOutput"));
		if (ExistingActor == NULL) {
			FActorSpawnParameters SpawnInfo;
			SpawnInfo.Name = *FString::Printf(TEXT("UAtomStatics_PauseAudioOutput"));
			AAtomDisposer* NewActor = GWorld->SpawnActor<AAtomDisposer>(SpawnInfo);
			NewActor->SetEndPlayCallback(UAtomStatics::ResumeAudioOutput, nullptr);
		}
	} else {
		/* ポーズ解除 */
		UAtomStatics::ResumeAudioOutput(nullptr);
	}
}

void UAtomStatics::ResumeAudioOutput(void* Object)
{
	/* ポーズ解除 */
	criAtomExAsr_PauseOutputVoice(CRI_FALSE);
	criAtomEx_PauseTimer(CRI_FALSE);
}

void UAtomStatics::StopAllSounds()
{
	/* 全てのAtomExプレーヤを停止 */
	criAtomExPlayer_StopAllPlayers();
}

bool UAtomStatics::LoadAtomConfig(USoundAtomConfig* AcfObject)
{
	/* ACFデータの解放 */
	if (UCriWareInitializer::AcfData != nullptr) {
		UE_LOG(LogCriWareRuntime, Log, TEXT("Atom Config is unloaded."));
		criAtomEx_UnregisterAcf();
		FMemory::Free(UCriWareInitializer::AcfData);
		UCriWareInitializer::AcfData = nullptr;
	}

	/* ACFアセットの参照をクリア */
	UCriWareInitializer::AcfAssetReference.Reset();

	if (AcfObject != nullptr) {
		int32 AcfDataSize = AcfObject->RawData.GetBulkDataSize();
		AcfObject->RawData.GetCopy((void**)&UCriWareInitializer::AcfData, false);
		if (UCriWareInitializer::AcfData == nullptr) {
			UE_LOG(LogCriWareRuntime, Error, TEXT("Failed to load '%s'."), *AcfObject->GetName());
			return false;
		} else {
			/* ACFデータのロード */
			criAtomEx_RegisterAcfData(UCriWareInitializer::AcfData, AcfDataSize, NULL, 0);

			/* ACFアセットの参照の更新 */
			UCriWareInitializer::AcfAssetReference = FSoftObjectPath(AcfObject);
			return true;
		}
	}

	return false;
}

void UAtomStatics::UpdateDistanceFactorForAllSounds(float ArgDistanceFactor)
{
	if (ArgDistanceFactor <= 0.0f) {
		UE_LOG(LogCriWareRuntime, Error, TEXT("Invalid distance factor."));
		return;
	}
	for (auto AtomComponentPair : UAtomComponent::AtomIDToComponentMap) {
		UAtomComponent* AtomComponent = AtomComponentPair.Value;
		if (!AtomComponent->IsValidLowLevel()) {
			continue;
		}
		if (!AtomComponent->IsActive()) {
			continue;
		}
		if (AtomComponent->bIsPreviewSound) {
			continue;
		}
#if WITH_EDITOR
		/* テンプレートは対象外 */
		if (AtomComponent->IsTemplate()) {
			continue;
		}
#endif
		/* 破棄済みのコンポーネントは対象外 */
		if (AtomComponent->IsBeingDestroyed() || AtomComponent->IsPendingKill()) {
			continue;
		}

		/* 再生中でないコンポーネントは対象外 */
		if (!AtomComponent->IsPlaying()) {
			continue;
		}

		AtomComponent->UpdateDistanceFactor(ArgDistanceFactor);
	}
	UAtomStatics::SetCurrentDistanceFactor(ArgDistanceFactor);
	FAtomListener::SetDistanceFactorForAllListeners(ArgDistanceFactor);
	FAtomSoundManager::SetDistanceFactor(ArgDistanceFactor);
	UAtomComponent::SetDefaultDistanceFactor(ArgDistanceFactor);
}

void UAtomStatics::AddToAtomComponentIds(UObject* AtomPlayGateRef, UObject* SkeltalMeshComponentRef, int32 AtomComponentId)
{
	int32 id1 = AtomPlayGateRef->GetUniqueID();
	int32 id2 = SkeltalMeshComponentRef->GetUniqueID();
	TPair<int32, int32> key = TPair<int32, int32>(id1, id2);
	DictForAtomComponentIdsAtomPlayGateCreated.Add(key, AtomComponentId);
}

/* タイミングによっては key についてID値が Add される前にここに来るケースもある */
void UAtomStatics::StopAllSoundsForKeyFromAtomComponentIds(UObject* AtomPlayGateRef, UObject* SkeltalMeshComponentRef)
{
	TPair<int32, int32> Key = TPair<int32, int32>(
		AtomPlayGateRef->GetUniqueID(),
		SkeltalMeshComponentRef->GetUniqueID());
	int32 AtomComponentId;
	/* Key に紐づいた AtomComponentId を辞書から探す。見つかれば削除して停止 */
	if (DictForAtomComponentIdsAtomPlayGateCreated.RemoveAndCopyValue(Key, AtomComponentId)) {
		auto AtomComponent = UAtomComponent::GetAtomComponentFromID(AtomComponentId);
		if ((AtomComponent != nullptr) && (AtomComponent->IsValidLowLevel()) && (!AtomComponent->IsPendingKillOrUnreachable())) {
			/* 有効な AtomComponent であれば停止命令を発行。破棄は AtomComponent の bAutoDestroy プロパティ任せ */
			AtomComponent->Stop();
		}
	}
}

float UAtomStatics::GetCurrentDistanceFactor()
{
	return UAtomStatics::CurrentDistanceFactor;
}

void UAtomStatics::SetCurrentDistanceFactor(float InDistanceFactor)
{
	UAtomStatics::CurrentDistanceFactor = InDistanceFactor;
}

AAtomAudioVolume* UAtomStatics::GetAudioVolumeAffectingListener(const int32 PlayerIndex, const EAtomAudioVolumeType TypeNum)
{
	FAtomListener* Listener = FAtomListener::GetListener(PlayerIndex);
	if (Listener != nullptr) {
		return Listener->AtomAudioVolumeHandler->GetAudioVolume(static_cast<int32>(TypeNum)).Get();
	}

	UE_LOG(LogCriWareRuntime, Error, TEXT("Listener is null pointer"));

	return nullptr;
}

FAtomListenerFocusPointInfo UAtomStatics::GetListenerFocusPointInfo(const int32 PlayerIndex)
{
	FAtomListener* Listener = FAtomListener::GetListener(PlayerIndex);
	if (Listener != nullptr) {
		return Listener->GetFocusPointInfo();
	}

	UE_LOG(LogCriWareRuntime, Error, TEXT("Listener is null pointer"));

	return { nullptr, nullptr, -1.0f, -1.0f };
}

void UAtomStatics::SetListenerFocusPointInfo(const FAtomListenerFocusPointInfo FocusPointInfo, const int32 PlayerIndex)
{
	FAtomListener* Listener = FAtomListener::GetListener(PlayerIndex);
	if (Listener != nullptr) {
		Listener->SetFocusPointInfo(FocusPointInfo);
	}
}

void UAtomStatics::SetListenerFocusPointTargetActor(AActor * TargetActor, const int32 PlayerIndex)
{
	FAtomListener* Listener = FAtomListener::GetListener(PlayerIndex);
	if (Listener != nullptr) {
		Listener->SetFocusPointTargetActor(TargetActor);
	}
}

void UAtomStatics::SetListenerFocusPointTargetComponent(USceneComponent * TargetComponent, const int32 PlayerIndex)
{
	FAtomListener* Listener = FAtomListener::GetListener(PlayerIndex);
	if (Listener != nullptr) {
		Listener->SetFocusPointTargetComponent(TargetComponent);
	}
}

void UAtomStatics::SetListenerFocusPointDistanceLevel(const float DistanceLevel, const int32 PlayerIndex)
{
	FAtomListener* Listener = FAtomListener::GetListener(PlayerIndex);
	if (Listener != nullptr) {
		Listener->SetFocusPointDistanceLevel(DistanceLevel);
	}
}

void UAtomStatics::SetListenerFocusPointDirectionLevel(const float DirectionLevel, const int32 PlayerIndex)
{
	FAtomListener* Listener = FAtomListener::GetListener(PlayerIndex);
	if (Listener != nullptr) {
		Listener->SetFocusPointDirectionLevel(DirectionLevel);
	}
}

FVector UAtomStatics::GetListeningPoint(const int32 PlayerIndex)
{
	FAtomListener* Listener = FAtomListener::GetListener(PlayerIndex);
	if (Listener != nullptr) {
		return Listener->GetListeningPoint();
	}

	return FVector();
}

AWorldSettings* UAtomStatics::GetWorldSettings(const UObject* WorldContextObject)
{
	UWorld* ThisWorld = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if(!IsValid(ThisWorld)) {
		return nullptr;
	}

	return ThisWorld->GetWorldSettings();
}

bool UAtomStatics::RenameAtomComponentAsUnique(UAtomComponent* AtomComponent, UObject* Outer)
{
	if(!IsValid(AtomComponent) || !IsValid(Outer)) {
		return false;
	}

	FString ObjName = MakeUniqueObjectName(Outer, UAtomComponent::StaticClass()).ToString();
	AtomComponent->Rename(*ObjName, Outer,
		REN_ForceNoResetLoaders | REN_DontCreateRedirectors | REN_DoNotDirty | REN_NonTransactional);
	return true;
}

void UAtomStatics::SetParamsToAtomComponent(UAtomComponent* AtomComponent, const FAtomComponentParams& Params)
{
	if (!IsValid(AtomComponent)) {
		return;
	}

	AtomComponent->DefaultVolume = Params.DefaultVolume;
	AtomComponent->SetPitchMultiplier(Params.DefaultPitchMultiplier);
	/* Params.StartTimeはPlayWithoutCulling関数の引数として指定する */
	AtomComponent->bEnableMultipleSoundPlayback = Params.bEnableMultipleSoundPlayback;
	AtomComponent->bUsePlaylist = Params.bUsePlaylist;
	AtomComponent->bIsMovable = Params.bIsMovable;
	AtomComponent->bCanStraddleAudioVolume = Params.bCanStraddleAudioVolume;
	AtomComponent->bUseAudioVolume = Params.bUseAudioVolume;
	AtomComponent->bUseAreaSoundVolume = Params.bUseAreaSoundVolume;
	AtomComponent->SoundObject = Params.SoundObject;
	AtomComponent->AttenuationSettings = Params.AttenuationSettings;
	AtomComponent->DefaultBlockIndex = Params.DefaultBlockIndex;
	if (Params.DefaultAisacControl.Num() > 0) AtomComponent->DefaultAisacControl = Params.DefaultAisacControl;
	if (Params.DefaultSelectorLabel.Num() > 0) AtomComponent->DefaultSelectorLabel = Params.DefaultSelectorLabel;
	AtomComponent->LoopSetting = Params.LoopSetting;
	/* Params.Rotationは各Spawn関数内で設定する */
}

bool UAtomStatics::IsInGameWorld(const UObject* WorldContextObject)
{
	UWorld* ThisWorld = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if(!IsValid(ThisWorld)) {
		return false;
	}
	return ThisWorld->IsGameWorld();
}

void UAtomStatics::PlayAtomSoundAtLocation(const UObject* WorldContextObject, class USoundAtomCue* Sound, FVector Location, const FAtomComponentParams& Params)
{
	SpawnAtomSoundAtLocation(WorldContextObject, Sound, Location, Params);
}

void UAtomStatics::PlayAtomSoundAtLocationByName(const UObject* WorldContextObject, class USoundAtomCueSheet* CueSheet, FString CueName, FVector Location, const FAtomComponentParams& Params)
{
	SpawnAtomSoundAtLocationByName(WorldContextObject, CueSheet, CueName, Location, Params);
}

UAtomComponent* UAtomStatics::SpawnAtomSound2D_CommonInternal(const UObject* WorldContextObject, const FAtomComponentParams& Params, bool bPersistAcrossLevelTransition, bool bAutoDestroy, const TCHAR * FunctionName)
{
	/* 「状況に応じて音声再生をスキップする処理」は上の階層で実施済み */

	if(!IsValid(WorldContextObject)) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("UAtomStatics::%s canceled: Invalid WorldContextObject specified!"), FunctionName);
		return nullptr;
	}

	UWorld* ThisWorld = WorldContextObject->GetWorld();
	if(!IsValid(ThisWorld)) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("UAtomStatics::%s canceled: Invalid WorldContextObject specified!"), FunctionName);
		return nullptr;
	}

	/* PersonaアセットブラウザやDedicatedサーバー等での再生をブロック。 */
	if (!ThisWorld->bAllowAudioPlayback || ThisWorld->GetNetMode() == NM_DedicatedServer) {
		/* 正常動作であるためログは出力しない */
		return nullptr;
	}

	/* 音声再生用にAtomComponentを確保 */
	UAtomComponent* AtomComponent = UAtomStatics::AllocateComponent();
	if (!IsValid(AtomComponent)) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("UAtomStatics::%s canceled: Failed to create AtomComponent."), FunctionName);
		return nullptr;
	}

	/* 必要に応じてルート化 */
	if (bPersistAcrossLevelTransition) {
		AtomComponent->MarkAsRooted();
	}
	else {
		RenameAtomComponentAsUnique(AtomComponent, GetWorldSettings(WorldContextObject));
	}

	SetParamsToAtomComponent(AtomComponent, Params);
	AtomComponent->bAutoDestroy = bAutoDestroy;
	AtomComponent->bAllowAnyoneToDestroyMe = true;
	AtomComponent->bIsUISound = true;
	AtomComponent->bOnly2DSound = true;

	if (!bPersistAcrossLevelTransition) {
		/* 再生終了検知のためRegisterComponentを実行 */
		/* 注意）シーク再生をリクエスト済みなので、Auto ActivateはOFFに設定。   */
		/* 　　　→Activate時の再生でシーク再生がキャンセルされるのを防止。     */
		AtomComponent->bAutoActivate = false;
		AtomComponent->RegisterComponent();
	}
	return AtomComponent;
}


UAtomComponent* UAtomStatics::SpawnAtomSound2D(const UObject* WorldContextObject, USoundAtomCue* Sound, const FAtomComponentParams& Params, bool bPersistAcrossLevelTransition, bool bAutoDestroy)
{
	/* サウンド未指定時は何もしない */
	if (!IsValid(Sound)) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("UAtomStatics::SpawnAtomSound2D canceled: Invalid SoundAtomCue specified."));
		return nullptr;
	}

	/* 音声再生用にAtomComponentを確保 */
	UAtomComponent* AtomComponent = UAtomStatics::SpawnAtomSound2D_CommonInternal(WorldContextObject, Params, bPersistAcrossLevelTransition, bAutoDestroy, TEXT("SpawnAtomSound2D"));
	if (!IsValid(AtomComponent)) {
		/* ログ出力はCommonInternal関数内で実施済み */
		return nullptr;
	}

	AtomComponent->SetSound(Sound);
	AtomComponent->PlayWithoutSoundCulling(Params.StartTime);

	return AtomComponent;
}

UAtomComponent* UAtomStatics::SpawnAtomSound2DByName(const UObject* WorldContextObject, class USoundAtomCueSheet* CueSheet, FString CueName, const FAtomComponentParams& Params, bool bPersistAcrossLevelTransition, bool bAutoDestroy)
{
	/* キューシートやキュー名が無い場合は何もしない */
	if (!IsValid(CueSheet) || CueName.IsEmpty()) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("UAtomStatics::SpawnAtomSound2DByName canceled: Invalid CueSheet specified or No CueName specified."));
		return nullptr;
	}

	/* 音声再生用にAtomComponentを確保 */
	UAtomComponent* AtomComponent = UAtomStatics::SpawnAtomSound2D_CommonInternal(WorldContextObject, Params, bPersistAcrossLevelTransition, bAutoDestroy, TEXT("SpawnAtomSound2DByName"));
	if (!IsValid(AtomComponent)) {
		/* ログ出力はCommonInternal関数内で実施済み */
		return nullptr;
	}

	AtomComponent->SetSound(CueSheet, CueName);
	AtomComponent->PlayWithoutSoundCulling(Params.StartTime);

	return AtomComponent;
}

UAtomComponent* UAtomStatics::SpawnAtomSoundAtLocation_CommonInternal(const UObject* WorldContextObject, FVector Location, const FAtomComponentParams& Params, bool bAutoDestroy, const TCHAR * FunctionName)
{
	/* 「キューアセットのチェック」又は「キューシート・キュー名のチェック」は上の階層で実施済み */
	/* カリングのチェックは上の階層で実施済み */

	if(!IsValid(WorldContextObject)) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("UAtomStatics::%s canceled: Invalid WorldContextObject specified!"), FunctionName);
		return nullptr;
	}

	UWorld* ThisWorld = WorldContextObject->GetWorld();
	if(!IsValid(ThisWorld)) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("UAtomStatics::%s canceled: Invalid WorldContextObject specified!"), FunctionName);
		return nullptr;
	}

	/* PersonaアセットブラウザやDedicatedサーバー等での再生をブロック。 */
	if (!ThisWorld->bAllowAudioPlayback || ThisWorld->GetNetMode() == NM_DedicatedServer) {
		/* 正常動作であるためログは出力しない */
		return nullptr;
	}

	/* 音声再生用にAtomComponentを確保 */
	UAtomComponent* AtomComponent = UAtomStatics::AllocateComponent();
	if (!IsValid(AtomComponent)) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("UAtomStatics::%s canceled: Failed to create AtomComponent."), FunctionName);
		return nullptr;
	}

	RenameAtomComponentAsUnique(AtomComponent, GetWorldSettings(WorldContextObject));

	SetParamsToAtomComponent(AtomComponent, Params);
	AtomComponent->SetWorldLocationAndRotation(Location, Params.Rotation);
	AtomComponent->bAutoDestroy = bAutoDestroy;
	AtomComponent->bAllowAnyoneToDestroyMe = true;
	AtomComponent->bIsUISound = !IsInGameWorld(WorldContextObject);
	AtomComponent->bOnly2DSound = false;

	/* 再生終了検知のためRegisterComponentを実行 */
	/* 注意）シーク再生をリクエスト済みなので、Auto ActivateはOFFに設定。   */
	/* 　　　→Activate時の再生でシーク再生がキャンセルされるのを防止。     */
	AtomComponent->bAutoActivate = false;
	AtomComponent->RegisterComponent();

	return AtomComponent;
}

UAtomComponent* UAtomStatics::SpawnAtomSoundAtLocation(const UObject* WorldContextObject, class USoundAtomCue* Sound, FVector Location, const FAtomComponentParams& Params, bool bAutoDestroy)
{
	/* サウンド未指定時は何もしない */
	if (!IsValid(Sound)) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("UAtomStatics::SpawnAtomSoundAttached canceled: Invalid SoundAtomCue specified."));
		return nullptr;
	}

	/* Attenuation情報を取得 */
	const FSoundAttenuationSettings* AttenuationCore = nullptr;
	if (IsValid(Params.AttenuationSettings)) {
		AttenuationCore = &(Params.AttenuationSettings->Attenuation);
	}

	/* カリングすべきであればAtomComponentを作成せずに終了する。 */
	if (ShouldCullSoundPlayback(Sound, Location, AttenuationCore, true)) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("UAtomStatics::SpawnAtomSoundAtLocation canceled: by Distance Culling."));
		return nullptr;
	}

	/* 音声再生用にAtomComponentを確保 */
	UAtomComponent* AtomComponent = UAtomStatics::SpawnAtomSoundAtLocation_CommonInternal(WorldContextObject, Location, Params, bAutoDestroy, TEXT("SpawnAtomSoundAtLocation"));
	if (!IsValid(AtomComponent)) {
		/* ログ出力はCommonInternal関数内で実施済み */
		return nullptr;
	}

	AtomComponent->SetSound(Sound);
	AtomComponent->PlayWithoutSoundCulling(Params.StartTime);
	return AtomComponent;
}

UAtomComponent* UAtomStatics::SpawnAtomSoundAtLocationByName(const UObject* WorldContextObject, class USoundAtomCueSheet* CueSheet, FString CueName, FVector Location, const FAtomComponentParams& Params, bool bAutoDestroy)
{
	/* キューシートやキュー名が無い場合は何もしない */
	if (!IsValid(CueSheet) || CueName.IsEmpty()) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("UAtomStatics::SpawnAtomSoundAtLocationByName canceled: Invalid CueSheet specified or No CueName specified."));
		return nullptr;
	}

	/* 音声再生用にAtomComponentを確保 */
	UAtomComponent* AtomComponent = UAtomStatics::SpawnAtomSoundAtLocation_CommonInternal(WorldContextObject, Location, Params, bAutoDestroy, TEXT("SpawnAtomSoundAtLocationByName"));
	if (!IsValid(AtomComponent)) {
		/* ログ出力はCommonInternal関数内で実施済み */
		return nullptr;
	}

	AtomComponent->SetSound(CueSheet, CueName);
	AtomComponent->PlayWithoutSoundCulling(Params.StartTime);
	return AtomComponent;
}

UAtomComponent* UAtomStatics::SpawnAtomSoundAttached_CommonInternal(class USceneComponent* AttachToComponent, const FAtomComponentParams& Params, FName AttachPointName, FVector Location, EAttachLocation::Type LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoDestroy, const TCHAR * FunctionName)
{
	/* 「キューアセットのチェック」又は「キューシート・キュー名のチェック」は上の階層で実施済み */
	/* カリングのチェックは上の階層で実施済み */
	/* AttachToComponentのValidateチェックは上の階層で実施済み */

	UWorld* ThisWorld = AttachToComponent->GetWorld();
	if(!IsValid(ThisWorld)) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("UAtomStatics::%s canceled: AttachComponent is NOT WorldContextObject."), FunctionName);
		return nullptr;
	}

	/* PersonaアセットブラウザやDedicatedサーバー等での再生をブロック。 */
	if (!ThisWorld->bAllowAudioPlayback || ThisWorld->GetNetMode() == NM_DedicatedServer) {
		/* 正常動作であるためログは出力しない */
		return nullptr;
	}

	/* 音声再生用にAtomComponentを確保 */
	UAtomComponent* AtomComponent = UAtomStatics::AllocateComponent();
	if (!IsValid(AtomComponent)) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("UAtomStatics::%s canceled: Failed to create AtomComponent."), FunctionName);
		return nullptr;
	}

	RenameAtomComponentAsUnique(AtomComponent, AttachToComponent->GetOwner());

	const bool bIsInGameWorld = IsValid(AtomComponent->GetWorld()) ? AtomComponent->GetWorld()->IsGameWorld() : false;

	if (LocationType == EAttachLocation::SnapToTarget || LocationType == EAttachLocation::SnapToTargetIncludingScale) {
		AtomComponent->AttachToComponent(AttachToComponent, FAttachmentTransformRules::SnapToTargetNotIncludingScale, AttachPointName);
	}
	else {
		AtomComponent->AttachToComponent(AttachToComponent, FAttachmentTransformRules::KeepRelativeTransform, AttachPointName);
		if (LocationType == EAttachLocation::KeepWorldPosition) {
			AtomComponent->SetWorldLocationAndRotation(Location, Params.Rotation);
		}
		else {
			AtomComponent->SetRelativeLocationAndRotation(Location, Params.Rotation);
		}
	}

	SetParamsToAtomComponent(AtomComponent, Params);
	AtomComponent->bStopWhenOwnerDestroyed = bStopWhenAttachedToDestroyed;
	AtomComponent->bAutoDestroy = bAutoDestroy;
	AtomComponent->bAllowAnyoneToDestroyMe = true;
	AtomComponent->bIsUISound = !bIsInGameWorld;
	AtomComponent->bOnly2DSound = false;

	/* 再生終了検知のためRegisterComponentを実行 */
	/* 注意）シーク再生をリクエスト済みなので、Auto ActivateはOFFに設定。   */
	/* 　　　→Activate時の再生でシーク再生がキャンセルされるのを防止。     */
	AtomComponent->bAutoActivate = false;
	AtomComponent->RegisterComponentWithWorld(AttachToComponent->GetWorld());

	return AtomComponent;
}

UAtomComponent* UAtomStatics::SpawnAtomSoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, const FAtomComponentParams& Params, FName AttachPointName, FVector Location, EAttachLocation::Type LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoDestroy)
{
	/* サウンド未指定時は何もしない */
	if (!IsValid(Sound)) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("UAtomStatics::SpawnAtomSoundAttached canceled: Invalid SoundAtomCue specified."));
		return nullptr;
	}

	/* アタッチ先の有無をチェック */
	/* CalculateAbsLocationToPlaySounds関数を実行する前に必ずAttachToComponentのValidateチェックを行う必要がある */
	if (!IsValid(AttachToComponent)) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("UAtomStatics::SpawnAtomSoundAttached canceled: Invalid AttachComponent specified!"));
		return nullptr;
	}

	/* 再生すべき音源の絶対座標を取得 */
	FVector AbsLocation = Location;
	CalculateAbsLocationToPlaySounds(AttachToComponent, AttachPointName, Location, LocationType, AbsLocation);

	/* Attenuation情報を取得 */
	const FSoundAttenuationSettings* AttenuationCore = nullptr;
	if (IsValid(Params.AttenuationSettings)) {
		AttenuationCore = &(Params.AttenuationSettings->Attenuation);
	}

	/* カリングすべきであればAtomComponentを作成せずに終了する。 */
	if (ShouldCullSoundPlayback(Sound, Location, AttenuationCore, true)) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("UAtomStatics::SpawnAtomSoundAttached canceled: by Distance Culling."));
		return nullptr;
	}

	/* 音声再生用にAtomComponentを確保 */
	UAtomComponent* AtomComponent = UAtomStatics::SpawnAtomSoundAttached_CommonInternal(AttachToComponent, Params, AttachPointName, Location, LocationType, bStopWhenAttachedToDestroyed, bAutoDestroy, TEXT("SpawnAtomSoundAttached"));
	if (!IsValid(AtomComponent)) {
		/* ログ出力はCommonInternal関数内で実施済み */
		return nullptr;
	}

	AtomComponent->SetSound(Sound);
	AtomComponent->PlayWithoutSoundCulling(Params.StartTime);
	return AtomComponent;
}

UAtomComponent* UAtomStatics::SpawnAtomSoundAttachedByName(class USoundAtomCueSheet* CueSheet, FString CueName, class USceneComponent* AttachToComponent, const FAtomComponentParams& Params, FName AttachPointName, FVector Location, EAttachLocation::Type LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoDestroy)
{
	/* キューシートやキュー名が無い場合は何もしない */
	if (!IsValid(CueSheet) || CueName.IsEmpty()) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("UAtomStatics::SpawnAtomSoundAttachedByName canceled: Invalid CueSheet specified or No CueName specified."));
		return nullptr;
	}

	/* アタッチ先の有無をチェック */
	if (!IsValid(AttachToComponent)) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("UAtomStatics::SpawnAtomSoundAttachedByName canceled: Invalid AttachComponent specified!"));
		return nullptr;
	}

	/* 音声再生用にAtomComponentを確保 */
	UAtomComponent* AtomComponent = UAtomStatics::SpawnAtomSoundAttached_CommonInternal(AttachToComponent, Params, AttachPointName, Location, LocationType, bStopWhenAttachedToDestroyed, bAutoDestroy, TEXT("SpawnAtomSoundAttachedByName"));
	if (!IsValid(AtomComponent)) {
		/* ログ出力はCommonInternal関数内で実施済み */
		return nullptr;
	}
	
	AtomComponent->SetSound(CueSheet, CueName);
	AtomComponent->PlayWithoutSoundCulling(Params.StartTime);
	return AtomComponent;
}

UAtom3dRegion* UAtomStatics::GetListenerRegion(const int32 PlayerIndex)
{
	FAtomListener* Listener = FAtomListener::GetListener(PlayerIndex);
	if (Listener == nullptr) {
		return nullptr;
	}
	auto RegionWeakPtr = Listener->GetRegion();
	if (!RegionWeakPtr.IsValid()) {
		return nullptr;
	}
	return RegionWeakPtr.Get();
}

void UAtomStatics::SetListenerRegion(UAtom3dRegion* Region, const int32 PlayerIndex)
{
	FAtomListener* Listener = FAtomListener::GetListener(PlayerIndex);
	if (Listener != nullptr) {
		Listener->SetRegion(Region);
	}
}

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/
#undef LOCTEXT_NAMESPACE

/* --- end of file --- */
