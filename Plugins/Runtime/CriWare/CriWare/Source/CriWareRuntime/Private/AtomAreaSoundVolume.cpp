/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2019 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : AtomAreaSoundVolume
 * File     : AtomAreaSoundVolume.cpp
 *
 ****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
#include "AtomAreaSoundVolume.h"

#include "CriWareRuntimePrivatePCH.h"
#include "AtomListener.h"
#include "AtomStatics.h"

#include "Engine/CollisionProfile.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BrushComponent.h"
#include "Net/UnrealNetwork.h"
#include "Runtime/Core/Public/Async/ParallelFor.h"

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/
#define LOCTEXT_NAMESPACE "AtomAreaSoundVolume"

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
TArray<class AAtomAreaSoundVolume*> AAtomAreaSoundVolume::AreaSoundVolumeArray;

/***************************************************************************
 *      クラス定義
 *      Class Definition
 ***************************************************************************/

float GetDistanceForCreatingSounds(
	bool bDeterminationFromVolumeBoundaryPlane,
	const UBrushComponent* BrushComponent,
	const FVector& ActorLocation,
	const FVector& ListenerLocation) 
{
	float distance = 0.0f;
	if (bDeterminationFromVolumeBoundaryPlane && BrushComponent != nullptr)
	{
		/* コリジョン表面からの距離を計測 */
		FVector NearestPosition;
		distance = BrushComponent->GetClosestPointOnCollision(ListenerLocation, NearestPosition);
	}
	else
	{
		/* アクター座標からの距離を計測 */
		distance = (ActorLocation - ListenerLocation).Size();
	}
	return distance;
}

AAtomAreaSoundVolume::AAtomAreaSoundVolume(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	CollisionProfile = UCollisionProfile::NoCollision_ProfileName;
	GetBrushComponent()->SetCollisionProfileName(CollisionProfile);
	GetBrushComponent()->bAlwaysCreatePhysicsState = true;
	GetBrushComponent()->SetMobility(EComponentMobility::Movable);

#if WITH_EDITOR
	bColored = true;
	AtomBrushColor = FColor(255, 128, 64, 255);
#endif
	bEnabled = true;
	SetHidden(false);

	bIsDeterminationFromVolumeBoundaryPlane = false;
	AtomComponents.Empty();
	Sounds.Empty();
	SoundStopDistance = 100000;
	bIsEnableAtomCompoentPack = false;
	bIsAutoPlaySound = true;
	bIsCreatedAtomComponentsArray = false;
	bIsInitialized = false;
	SetActorTickEnabled(false);
}

void AAtomAreaSoundVolume::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AAtomAreaSoundVolume, bEnabled);
}


void AAtomAreaSoundVolume::PostInitProperties()
{
	Super::PostInitProperties();
}

void AAtomAreaSoundVolume::PostUnregisterAllComponents()
{
	// Route clear to super first.
	Super::PostUnregisterAllComponents();

	// Component can be nulled due to GC at this point
	if (GetRootComponent()) {
		GetRootComponent()->TransformUpdated.RemoveAll(this);
	}
	if (AreaSoundVolumeArray.Find(this) != INDEX_NONE) {
		AreaSoundVolumeArray.Remove(this);
	}

	for (UAtomComponent* atom_component : AtomComponents) {
		if (atom_component) {
			atom_component->Stop();
			atom_component->DestroyComponent();
		}
	}
	AtomComponents.Empty();
	bIsCreatedAtomComponentsArray = false;
}

void AAtomAreaSoundVolume::PostRegisterAllComponents()
{
	// Route update to super first.
	Super::PostRegisterAllComponents();

	/* 初期化時にAreaSoundVolume内にAtomComponentを生成しておく */
	CreateSounds(this->GetActorLocation());

	bIsInitialized = true;
	bIsCreatedAtomComponentsArray = false;
	if (Sounds.Num() > 0) {
		SetActorTickEnabled(bEnabled);
	}
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	GetRootComponent()->TransformUpdated.AddUObject(this, &AAtomAreaSoundVolume::TransformUpdated);
	GetBrushComponent()->SetCollisionProfileName(CollisionProfile);
	if (AreaSoundVolumeArray.Find(this) == INDEX_NONE) {
		AreaSoundVolumeArray.Add(this);
	}
}

void AAtomAreaSoundVolume::TransformUpdated(USceneComponent* InRootComponent, EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport)
{

}

void AAtomAreaSoundVolume::SetEnabled(const bool bNewEnabled)
{
	if (bNewEnabled == bEnabled) {
		return;
	}

	if (!bNewEnabled) {
		/* Disableとなったため再生中の音を削除 */
		for (UAtomComponent* atom_component : AtomComponents) {
			if (atom_component) {
				atom_component->Stop();
			}
		}
		AtomComponents.Empty();
		bIsCreatedAtomComponentsArray = false;
	}

	bEnabled = bNewEnabled;
	SetActorTickEnabled(bEnabled);
}

void AAtomAreaSoundVolume::SetPriority(const float NewPriority)
{
	if (NewPriority != Priority) {
		Priority = NewPriority;
		if (AreaSoundVolumeArray.Find(this)) {
			AreaSoundVolumeArray.Sort([](const AAtomAreaSoundVolume& A, const AAtomAreaSoundVolume& B) { return (A.GetPriority() > B.GetPriority()); });
		}
	}
}

AAtomAreaSoundVolume* AAtomAreaSoundVolume::GetSoundShapeSettings(const FVector& ViewLocation)
{
	TArray<bool> retr_isInVolumes;
	retr_isInVolumes.Init(false, AreaSoundVolumeArray.Num());
	//ParallelFor(AreaSoundVolumeArray.Num(), [&](int32 Idx) {
	for(int Idx = 0; Idx < AreaSoundVolumeArray.Num(); Idx++){
		if (AreaSoundVolumeArray[Idx]) {
			if (AreaSoundVolumeArray[Idx]->GetEnabled() && AreaSoundVolumeArray[Idx]->EncompassesPoint(ViewLocation)) {
				retr_isInVolumes[Idx] = true;
			}
		}
	}
	//});

	for (int32 iter_retvalue = 0; iter_retvalue < retr_isInVolumes.Num(); iter_retvalue++) {
		if (retr_isInVolumes[iter_retvalue]) {
			return AreaSoundVolumeArray[iter_retvalue];
		}
	}
	
	return nullptr;
}

TArray<UAtomComponent*> AAtomAreaSoundVolume::CreateSounds(FVector listener_location)
{
	int32 null_sound_count = 0;
	int32 play_sound_cound = 0;
	FVector nearest_point_on_volume;
	GetBrushComponent()->GetClosestPointOnCollision(listener_location, nearest_point_on_volume);

	if (bIsCreatedAtomComponentsArray) {
		/* 既にサウンド再生中の場合はAtomComponentsアレイをそのまま返す */
		return AtomComponents;
	}

	for (USoundAtomCue* sound : Sounds) {
		if (sound) {
			sound->bUseAreaSoundVolume = true;
			UAtomComponent* atom_component = AtomComponents.Num() > 0 && bIsEnableAtomCompoentPack ?
				AtomComponents[0] : UAtomStatics::SpawnSoundAtLocation(this, nullptr, nearest_point_on_volume, FRotator::ZeroRotator, 1.0f, 1.0f, 0.0f, nullptr, nullptr, true);
			if (atom_component) {
				atom_component->bEnableMultipleSoundPlayback = bIsEnableAtomCompoentPack;
				atom_component->AttachAreaSoundVolume(this);
				atom_component->SetSound(sound);
				if (bIsAutoPlaySound) {
					/* AutoPlayが有効な場合にサウンドを再生する */
#if WITH_EDITOR
					UWorld* World = GetWorld();
					bool bIsGameWorld = (World ? World->IsGameWorld() : false);
					if (bIsInitialized && bIsGameWorld) {
#else
					if (bIsInitialized) {
#endif
						atom_component->Play();
					}
				}
				if (!(AtomComponents.Num() > 0 && bIsEnableAtomCompoentPack)) {
					AtomComponents.Add(atom_component);
				}
				play_sound_cound++;
			}
		} else {
			null_sound_count++;
		}
	}

	if (!(Sounds.Num() == play_sound_cound + null_sound_count)) {
		DestroySounds();
	}
	bIsCreatedAtomComponentsArray = (AtomComponents.Num() > 0);

	return AtomComponents;
}

void AAtomAreaSoundVolume::DestroySounds()
{
	for (UAtomComponent* atom_component : AtomComponents) {
		if (atom_component) {
			atom_component->Stop();
		}
	}
	AtomComponents.Empty();
	bIsCreatedAtomComponentsArray = false;
}

void AAtomAreaSoundVolume::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (!bEnabled) {
		return;
	}

	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GWorld, FAtomListener::GetListener()->GetAttachedPlayerIndex());
	if (PlayerController == nullptr) {
		return;
	}

	if (!FAtomListener::GetListener()->IsUpdatedAtLeastOnce()) {
		/* Listenerの座標がUpdateAll関数で更新されていない場合は、原点が指定されてしまうため何も処理しない */
		return;
	}

	FVector ListenerLocation = FAtomListener::GetListener()->GetListeningPoint();
	float distance = GetDistanceForCreatingSounds(bIsDeterminationFromVolumeBoundaryPlane, GetBrushComponent(), GetActorLocation(), ListenerLocation);
	if (distance < 0)
	{
		FString DisplayName = this->GetName();
		UE_LOG(LogCriWareRuntime, Warning, TEXT("AreaSoundVolume(%s) does not have collision."), *DisplayName);
		return;
	}

	if (bIsAutoPlaySound && !bIsCreatedAtomComponentsArray && distance <= SoundStopDistance && Sounds.Num() > 0) {
		CreateSounds(ListenerLocation);
	}

	if (AtomComponents.Num() > 0) {
		/* AtomComponentsが生成されていた場合にはSoundshapeVolume内での生成状態はtrue */
		bIsCreatedAtomComponentsArray = true;
	} else {
		bIsCreatedAtomComponentsArray = false;
	}

	if (bIsCreatedAtomComponentsArray && distance > SoundStopDistance) {
		/* SoundStopDistance以上の場所にリスナーがいる場合は音を停止、再生処理を行わない */
		DestroySounds();
		bIsCreatedAtomComponentsArray = false;
	}
}

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION <= 23
void AAtomAreaSoundVolume::SetHidden(bool InHidden)
{
	bHidden = InHidden;
}
#endif

#if WITH_EDITOR
void AAtomAreaSoundVolume::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	
	BrushColor = AtomBrushColor;

	Super::PostEditChangeProperty(PropertyChangedEvent);

	/* レベル上に置いたすべてのAudioVolumeのプライオリティを比較して、アレイをプライオリティに準じた並び順に変更する */
	if (PropertyChangedEvent.Property && PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(AAtomAreaSoundVolume, Priority)) {
		AreaSoundVolumeArray.Sort([](const AAtomAreaSoundVolume& A, const AAtomAreaSoundVolume& B) { return (A.GetPriority() > B.GetPriority()); });
	}
	
}
#endif // WITH_EDITOR

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/
#undef LOCTEXT_NAMESPACE

 /* --- end of file --- */
