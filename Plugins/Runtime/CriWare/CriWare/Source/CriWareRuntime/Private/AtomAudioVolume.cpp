/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2020 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : AtomAudioVolume
 * File     : AtomAudioVolume.cpp
 *
 ****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
#include "AtomAudioVolume.h"
#include "SoundAtomCueSheet.h"
#include "AtomListener.h"
#include "AtomAsrRack.h"
#include "CriWareInitializer.h"

#include "Engine/CollisionProfile.h"
#include "Components/BrushComponent.h"
#include "Net/UnrealNetwork.h"
#include "Runtime/Core/Public/Async/ParallelFor.h"

#if WITH_EDITOR
#include "Kismet/GameplayStatics.h"
#endif
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
bool AAtomEntranceVolume::bIsInitialized = false;
TArray<class AAtomEntranceVolume*> AAtomEntranceVolume::EntranceVolumeArray;
float AAtomAudioVolume::MaxInterpolationDistanceForBus = 0.0f;
float AAtomAudioVolume::MaxInterpolationDistanceForAisac = 0.0f;
int32 AAtomAudioVolume::CurrentAudioVolumeNum_Bus = 0;
int32 AAtomAudioVolume::CurrentAudioVolumeNum_Aisac = 0;
int32 AAtomAudioVolume::CurrentAudioVolumeNum_Snapshot = 0;

/***************************************************************************
 *      クラス定義
 *      Class Definition
 ***************************************************************************/
AAtomEntranceVolume::AAtomEntranceVolume(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	GetBrushComponent()->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
	GetBrushComponent()->bAlwaysCreatePhysicsState = true;
	GetBrushComponent()->SetMobility(EComponentMobility::Movable);
	GetBrushComponent()->SetGenerateOverlapEvents(true);

	EntranceVolumeArray.Empty();

	bEnabled = true;

	SetHidden(false);
	bColored = true;
#if WITH_EDITOR
	AtomBrushColor = FColor(128, 64, 200);
	BrushColor = AtomBrushColor;
#endif
}

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION <= 23
void AAtomEntranceVolume::SetHidden(bool InHidden)
{
	bHidden = InHidden;
}
#endif

AAtomEntranceVolume * AAtomEntranceVolume::GetEntranceSettings(const FVector & ViewLocation)
{
	for (AAtomEntranceVolume* Volume : EntranceVolumeArray) {
		// Volume encompasses, break out of loop.
		bool isAddedStaticArray = false;
		if (Volume) {
			isAddedStaticArray = Volume->bIsAddedStaticArray_EntranceVolume;

			if (Volume->GetEnabled() && isAddedStaticArray && Volume->EncompassesPoint(ViewLocation)) {
				/* Priorityが高い順に並んでいるためヒットした一番最初のPriorityが高いボリュームが出力される */
				/* ボリュームが重複されている場合は、順序付けの観点よりすでに出力されているものが再度出力される */
				/* ボリュームを重複させる場合はPriority付けは必須 */
				return Volume;
			}
		}
	}

	return nullptr;
}

void AAtomEntranceVolume::SetEnabled(bool bNewEnabled) {
	bEnabled = bNewEnabled; 
}

void AAtomEntranceVolume::OnConstruction(const FTransform & Transform)
{
	Super::OnConstruction(Transform);
}

void AAtomEntranceVolume::PostInitProperties()
{
	Super::PostInitProperties();
}

void AAtomEntranceVolume::PostUnregisterAllComponents()
{
	Super::PostUnregisterAllComponents();
	if (GetRootComponent()) {
		GetRootComponent()->TransformUpdated.RemoveAll(this);
	}
	for (TWeakObjectPtr<AAtomAudioVolume> atom_audio_volume : NeighbourhoodAudioVolumeArray)
	{
		if (atom_audio_volume.IsValid() && IsValid(this) && atom_audio_volume.Get()->EntranceVolumes.Num() > 0 && atom_audio_volume.Get()->EntranceVolumes.Find(this) != INDEX_NONE)
		{
			atom_audio_volume.Get()->EntranceVolumes.Remove(this);
			atom_audio_volume.Get()->EntranceVolumes.Sort([](const AAtomEntranceVolume& A, const AAtomEntranceVolume& B) { return (A.GetPriority() > B.GetPriority()); });
			atom_audio_volume.Get()->EntranceVolumes.Shrink();
		}
	}
	if (EntranceVolumeArray.Find(this) != INDEX_NONE) {
		EntranceVolumeArray.Remove(this);
		bIsAddedStaticArray_EntranceVolume = false;
	}
}

void AAtomEntranceVolume::PostRegisterAllComponents()
{
	Super::PostRegisterAllComponents();
	GetRootComponent()->TransformUpdated.AddUObject(this, &AAtomEntranceVolume::TransformUpdated);

	if (EntranceVolumeArray.Find(this) == INDEX_NONE) {
		bIsAddedStaticArray_EntranceVolume = true;
		EntranceVolumeArray.Add(this);
		EntranceVolumeArray.Sort([](const AAtomEntranceVolume& A, const AAtomEntranceVolume& B) { return (A.GetPriority() > B.GetPriority()); });
	}
	bIsInitialized = true;
}

void AAtomEntranceVolume::TransformUpdated(USceneComponent* InRootComponent, EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport)
{
	
}

void AAtomEntranceVolume::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AAtomEntranceVolume, bEnabled);
}

#if WITH_EDITOR
void AAtomEntranceVolume::PostEditChangeProperty(FPropertyChangedEvent & PropertyChangedEvent)
{
	if (PropertyChangedEvent.Property && PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(AAtomEntranceVolume, AtomBrushColor)) {
		BrushColor = AtomBrushColor;
	}
	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

void InitializeAudioVolumeSetting(struct FAtomAudioVolumeParameters* AtomAudioVolumeParameters)
{
	if (!AtomAudioVolumeParameters) {
		return;
	}

	FAtomConfigDataTable* AcfDataTableObject = nullptr;
	UDataTable* DataTableObject = UCriWareInitializer::AcfDataTableObject;//Cast<UDataTable>(UCriWareInitializer::AcfDataTableAssetReference.TryLoad());
	if (DataTableObject != nullptr) {
		TArray<FName> DataTableRowName = DataTableObject->GetRowNames();
		FString ContextString;
		if (DataTableRowName.Num() > 0) {
			/* ACFデータは1つのみのため、1番目に取得される名前を使用する */
			AcfDataTableObject = DataTableObject->FindRow<FAtomConfigDataTable>(DataTableRowName[0], ContextString);
		}
	}

	if (AtomAudioVolumeParameters->bUseSnapshotSettings) {
		for (FSnapshotSwitchSettings& DspBusEffect : AtomAudioVolumeParameters->SnapshotSwitchSettings) {
			if (AcfDataTableObject != nullptr) {
				DspBusEffect.DspBusSettingsName = AcfDataTableObject->DspBusSettings[DspBusEffect.DspBusSettingsID].BusSettingsName;
				DspBusEffect.SnapshotName = AcfDataTableObject->DspBusSettings[DspBusEffect.DspBusSettingsID].Snapshot[DspBusEffect.SnapshotID].Name;
			} else {
				DspBusEffect.DspBusSettingsName = "";
				DspBusEffect.SnapshotName = "";
			}
		}
	}

	if (AtomAudioVolumeParameters->bUseBusSendSettings) {
		for (FBusSendInterpolationSettings& SoundCueBus : AtomAudioVolumeParameters->BusSendInterpolateSettings) {
			if (AcfDataTableObject != nullptr) {
				SoundCueBus.DspBusSettingsName = AcfDataTableObject->DspBusSettings[SoundCueBus.DspBusSettingsID].BusSettingsName;
				SoundCueBus.BusName = AcfDataTableObject->DspBusSettings[SoundCueBus.DspBusSettingsID].Snapshot[SoundCueBus.BusID].Name;
			} else {
				SoundCueBus.DspBusSettingsName = "";
				SoundCueBus.BusName = "";
			}
		}
	}

	if (AtomAudioVolumeParameters->bUseAisacControlSettings) {
		for (FAisacControlInterpolationSettings& AisacControl : AtomAudioVolumeParameters->AisacControlInterpolateSettings) {
			if (AcfDataTableObject != nullptr) {
				AisacControl.AisacControlName = AcfDataTableObject->AisacControl[AisacControl.AisacControlID].Name;
				AisacControl.AisacControlValueForInside = 0.0f;
				AisacControl.AisacControlValueForOutside = 0.0f;
			} else {
				AisacControl.AisacControlName = "";
				AisacControl.AisacControlValueForInside = 0.0f;
				AisacControl.AisacControlValueForOutside = 0.0f;
			}
		}
	}
}

void AdjustDisplayAudioVolumeSetting(struct FAtomAudioVolumeParameters* AtomAudioVolumeParameters)
{
	if (!AtomAudioVolumeParameters) {
		return;
	}
	
	/* Jsonから読み込んだデータテーブル構造体を取得 */
	FAtomConfigDataTable* AcfDataTableObject = nullptr;
	UDataTable* DataTableObject = Cast<UDataTable>(UCriWareInitializer::AcfDataTableAssetReference.TryLoad());
	if (DataTableObject != nullptr) {
		TArray<FName> DataTableRowName = DataTableObject->GetRowNames();
		FString ContextString;
		if (DataTableRowName.Num() > 0) {
			/* ACFデータは1つのみのため、1番目に取得される名前を使用する */
			AcfDataTableObject = DataTableObject->FindRow<FAtomConfigDataTable>(DataTableRowName[0], ContextString);
		}
	}

	if (AtomAudioVolumeParameters->bUseSnapshotSettings) {
		for (FSnapshotSwitchSettings& DspBusEffect : AtomAudioVolumeParameters->SnapshotSwitchSettings) {
			if (AcfDataTableObject != nullptr) {
				if (DspBusEffect.DspBusSettingsID >= AcfDataTableObject->DspBusSettings.Num()) {
					DspBusEffect.DspBusSettingsID = 0;
				} else if (DspBusEffect.DspBusSettingsID < 0) {
					DspBusEffect.DspBusSettingsID = AcfDataTableObject->DspBusSettings.Num() - 1;
				}
				int DspBusSettingsID = DspBusEffect.DspBusSettingsID;

				if (DspBusEffect.SnapshotID >= AcfDataTableObject->DspBusSettings[DspBusSettingsID].Snapshot.Num()) {
					DspBusEffect.SnapshotID = 0;
				} else if (DspBusEffect.SnapshotID < 0) {
					DspBusEffect.SnapshotID = AcfDataTableObject->DspBusSettings[DspBusSettingsID].Snapshot.Num() - 1;
				}
				int SnapshotID = DspBusEffect.SnapshotID;

				DspBusEffect.DspBusSettingsName = AcfDataTableObject->DspBusSettings[DspBusSettingsID].BusSettingsName;
				if (AcfDataTableObject->DspBusSettings[DspBusSettingsID].Snapshot.Num() > 0 && SnapshotID < AcfDataTableObject->DspBusSettings[DspBusSettingsID].Snapshot.Num()) {
					DspBusEffect.SnapshotName = AcfDataTableObject->DspBusSettings[DspBusSettingsID].Snapshot[SnapshotID].Name;
				} else {
					DspBusEffect.SnapshotName = "";
				}
			} else {
				DspBusEffect.DspBusSettingsID = 0;
				DspBusEffect.DspBusSettingsName = "";
				DspBusEffect.SnapshotID = 0;
				DspBusEffect.SnapshotName = "";
			}
		}
	}

	if (AtomAudioVolumeParameters->bUseBusSendSettings) {
		for (FBusSendInterpolationSettings& SoundCueBus : AtomAudioVolumeParameters->BusSendInterpolateSettings) {
			if (AcfDataTableObject != nullptr) {
				if (SoundCueBus.DspBusSettingsID >= AcfDataTableObject->DspBusSettings.Num()) {
					SoundCueBus.DspBusSettingsID = 0;
				} else if (SoundCueBus.DspBusSettingsID < 0) {
					SoundCueBus.DspBusSettingsID = AcfDataTableObject->DspBusSettings.Num() - 1;
				}
				int DspBusSettingsID = SoundCueBus.DspBusSettingsID;

				if (SoundCueBus.BusID >= AcfDataTableObject->DspBusSettings[DspBusSettingsID].Bus.Num()) {
					SoundCueBus.BusID = 0;
				} else if (SoundCueBus.BusID < 0) {
					SoundCueBus.BusID = AcfDataTableObject->DspBusSettings[DspBusSettingsID].Bus.Num() - 1;
				}
				int BusID = SoundCueBus.BusID;

				SoundCueBus.DspBusSettingsName = AcfDataTableObject->DspBusSettings[DspBusSettingsID].BusSettingsName;
				if (AcfDataTableObject->DspBusSettings[DspBusSettingsID].Bus.Num() > 0 && BusID < AcfDataTableObject->DspBusSettings[DspBusSettingsID].Bus.Num()) {
					SoundCueBus.BusName = AcfDataTableObject->DspBusSettings[DspBusSettingsID].Bus[BusID].Name;
				} else {
					SoundCueBus.BusName = "";
				}
			} else {
				SoundCueBus.DspBusSettingsID = 0;
				SoundCueBus.DspBusSettingsName = "";
				SoundCueBus.BusID = 0;
				SoundCueBus.BusName = "";
			}
		}
	}

	if (AtomAudioVolumeParameters->bUseAisacControlSettings) {
		for (FAisacControlInterpolationSettings& AisacControl : AtomAudioVolumeParameters->AisacControlInterpolateSettings) {
			if (AcfDataTableObject != nullptr) {
				if (AisacControl.AisacControlID >= AcfDataTableObject->AisacControl.Num()) {
					AisacControl.AisacControlID = 0;
				} else if (AisacControl.AisacControlID < 0) {
					AisacControl.AisacControlID = AcfDataTableObject->AisacControl.Num() - 1;
				}
				int AisacControlID = AisacControl.AisacControlID;

				AisacControl.AisacControlName = AcfDataTableObject->AisacControl[AisacControlID].Name;
			} else {
				AisacControl.AisacControlName = "";
			}
		}
	}
}

FSnapshotSwitchSettings::FSnapshotSwitchSettings()
	: AsrRackID(0)
	, DspBusSettingsID(0)
	, SnapshotID(0)
	, FadeTime(1.0f)
{

}

bool FSnapshotSwitchSettings::operator==(const FSnapshotSwitchSettings& Other) const
{
	return (FadeTime == Other.FadeTime);
}

void FSnapshotSwitchSettings::PostSerialize(const FArchive& Ar)
{

}

FAisacControlInterpolationSettings::FAisacControlInterpolationSettings()
	: AisacControlID(0)
	, AisacControlName("")
	, AisacControlValueForInside(0.0f)
	, AisacControlValueForOutside(0.0f)
	, Width(0.0f)
	, LerpValue(AisacControlValueForInside)
	, LerpValueForVolumeOutside(AisacControlValueForOutside)
{

}

FBusSendInterpolationSettings::FBusSendInterpolationSettings()
	: DspBusSettingsID(0)
	, BusID(0)
	, BusSendLevelForInside(0.0f)
	, BusSendLevelForOutside(0.0f)
	, Width(0.0f)
	, LerpValue(BusSendLevelForInside)
	, LerpValueForVolumeOutside(BusSendLevelForOutside)
{

}

UAtomAudioVolumeSettings::UAtomAudioVolumeSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void UAtomAudioVolumeSettings::PostInitProperties()
{
	Super::PostInitProperties();
	InitializeAudioVolumeSetting(&AtomAudioVolumeParameters);
}

#if WITH_EDITOR
void UAtomAudioVolumeSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	AdjustDisplayAudioVolumeSetting(&AtomAudioVolumeParameters);
}
#endif // WITH_EDITOR

AAtomAudioVolume::AAtomAudioVolume(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	CollisionProfile = UCollisionProfile::NoCollision_ProfileName;
#if WITH_EDITOR
	CollisionProfileForDetectingEntranceVolume = "Trigger";
#endif
	GetBrushComponent()->SetCollisionProfileName(CollisionProfile);
	GetBrushComponent()->bAlwaysCreatePhysicsState = true;
	
	if (!UCriWareInitializer::bIsInitialised_AudioVolume) {
		UCriWareInitializer::AudioVolumeArray_Snapshot.Empty();
		UCriWareInitializer::AudioVolumeArray_Bus.Empty();
		UCriWareInitializer::AudioVolumeArray_Aisac.Empty();
	}

	SetHidden(false);

	bOverrideAtomAudioVolume = true;

	bColored = true;
#if WITH_EDITOR
	BrushColor = AtomAudioVolumeSettingsOverrides.AtomAudioVolumeWireFrameColor;
#endif

	bEnabled = true;

	GetBrushComponent()->SetMobility(EComponentMobility::Movable);
	GetBrushComponent()->SetGenerateOverlapEvents(true);

	bIsAddedStaticArray_Snapshot = false;
	bIsAddedStaticArray_Bus = false;
	bIsAddedStaticArray_Aisac = false;
}

void AAtomAudioVolume::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AAtomAudioVolume, bEnabled);
}

void AAtomAudioVolume::InitializeStaticVariable()
{
	if ((bOverrideAtomAudioVolume == true) || (AtomAudioVolumeSettings != NULL)) {
		FAtomAudioVolumeParameters* AtomAudioVolumeParam = AAtomAudioVolume::GetAtomAudioVolumeSettingsToApply(this);

		/* 生成されたAudioVolumeを管理用アレイに登録 */
		if (AtomAudioVolumeParam->bUseSnapshotSettings) {
			if (UCriWareInitializer::AudioVolumeArray_Snapshot.Find(this) == INDEX_NONE) {
				bIsAddedStaticArray_Snapshot = true;
				UCriWareInitializer::AudioVolumeArray_Snapshot.Add(this);
				UCriWareInitializer::AudioVolumeArray_Snapshot.Sort([](const TWeakObjectPtr<AAtomAudioVolume>& A, const TWeakObjectPtr<AAtomAudioVolume>& B) { return (A.Get()->GetPriority() > B.Get()->GetPriority()); });
			}
		}
		if (AtomAudioVolumeParam->bUseBusSendSettings) {
			if (UCriWareInitializer::AudioVolumeArray_Bus.Find(this) == INDEX_NONE) {
				bIsAddedStaticArray_Bus = true;
				UCriWareInitializer::AudioVolumeArray_Bus.Add(this);
				UCriWareInitializer::AudioVolumeArray_Bus.Sort([](const TWeakObjectPtr<AAtomAudioVolume>& A, const TWeakObjectPtr<AAtomAudioVolume>& B) { return (A.Get()->GetPriority() > B.Get()->GetPriority()); });
				for (FBusSendInterpolationSettings BusInterpolation : AtomAudioVolumeParam->BusSendInterpolateSettings) {
					MaxInterpolationDistanceForBus = FMath::Max(MaxInterpolationDistanceForBus, BusInterpolation.Width);
				}
			}
		}
		if (AtomAudioVolumeParam->bUseAisacControlSettings) {
			if (UCriWareInitializer::AudioVolumeArray_Aisac.Find(this) == INDEX_NONE) {
				bIsAddedStaticArray_Aisac = true;
				UCriWareInitializer::AudioVolumeArray_Aisac.Add(this);
				UCriWareInitializer::AudioVolumeArray_Aisac.Sort([](const TWeakObjectPtr<AAtomAudioVolume>& A, const TWeakObjectPtr<AAtomAudioVolume>& B) { return (A.Get()->GetPriority() > B.Get()->GetPriority()); });
				for (FAisacControlInterpolationSettings AisacInterpolation : AtomAudioVolumeParam->AisacControlInterpolateSettings) {
					MaxInterpolationDistanceForAisac = FMath::Max(MaxInterpolationDistanceForAisac, AisacInterpolation.Width);
				}
			}
		}
	}
}

void AAtomAudioVolume::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
}

void AAtomAudioVolume::PostInitProperties()
{
	Super::PostInitProperties();

	FAtomListener::ResetEntranceVolumeArray();
	
	if ((bOverrideAtomAudioVolume == true) || (AtomAudioVolumeSettings != NULL)) {
		FAtomAudioVolumeParameters* AtomAudioVolumeParam = AAtomAudioVolume::GetAtomAudioVolumeSettingsToApply(this);
		InitializeAudioVolumeSetting(AtomAudioVolumeParam);
	}
	GetBrushComponent()->SetCollisionProfileName(CollisionProfile);
}

void AAtomAudioVolume::PostUnregisterAllComponents()
{
	// Route clear to super first.
	Super::PostUnregisterAllComponents();

	for (AAtomEntranceVolume* entrance_volume : EntranceVolumes)
	{
		if (entrance_volume && entrance_volume->NeighbourhoodAudioVolumeArray.Find(this) != INDEX_NONE)
		{
			entrance_volume->NeighbourhoodAudioVolumeArray.Remove(this);
			entrance_volume->NeighbourhoodAudioVolumeArray.Sort([](const TWeakObjectPtr<AAtomAudioVolume>& A, const TWeakObjectPtr<AAtomAudioVolume>& B) { return (A.Get()->GetPriority() > B.Get()->GetPriority()); });
			entrance_volume->NeighbourhoodAudioVolumeArray.Shrink();
		}
	}

	// Component can be nulled due to GC at this point
	if (GetRootComponent()) {
		GetRootComponent()->TransformUpdated.RemoveAll(this);
	}

	/* 管理用アレイから削除 */
	if (UCriWareInitializer::AudioVolumeArray_Snapshot.Find(this) != INDEX_NONE) {
		UCriWareInitializer::AudioVolumeArray_Snapshot.Remove(this);
		bIsAddedStaticArray_Snapshot = false;
	}
	if (UCriWareInitializer::AudioVolumeArray_Bus.Find(this) != INDEX_NONE) {
		UCriWareInitializer::AudioVolumeArray_Bus.Remove(this);
		bIsAddedStaticArray_Bus = false;
	}
	if (UCriWareInitializer::AudioVolumeArray_Aisac.Find(this) != INDEX_NONE) {
		UCriWareInitializer::AudioVolumeArray_Aisac.Remove(this);
		bIsAddedStaticArray_Aisac = false;
	}

	if (UCriWareInitializer::AudioVolumeArray_Aisac.Num() == 0 && UCriWareInitializer::AudioVolumeArray_Bus.Num() == 0 && UCriWareInitializer::AudioVolumeArray_Snapshot.Num() == 0) {
		UCriWareInitializer::bIsInitialised_AudioVolume = false;
	}
}

void AAtomAudioVolume::PostRegisterAllComponents()
{
	// Route update to super first.
	Super::PostRegisterAllComponents();
	GetRootComponent()->TransformUpdated.AddUObject(this, &AAtomAudioVolume::TransformUpdated);

#if WITH_EDITOR
	bool bIsInGameWorld = GetWorld()->IsGameWorld();
	if (bIsInGameWorld) {
#endif
		InitializeStaticVariable();
		UCriWareInitializer::bIsInitialised_AudioVolume = true;
#if WITH_EDITOR
	}
#endif
}

void AAtomAudioVolume::TransformUpdated(USceneComponent* InRootComponent, EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport)
{

}

void AAtomAudioVolume::SetEnabled(const bool bNewEnabled)
{
	if (bNewEnabled == bEnabled) {
		return;
	}

	bEnabled = bNewEnabled;

	/* AudioVolumeの接続をしているEntranceVolumeの有効・無効化処理 */
	/* EntranceVolumeに設定されているAudioVolumeの内、2つ以上のAudioVolumeが有効であればEntranceVolumeも有効にする */
	/* EntranceVolumeに設定されているAudioVolumeの内、1つ以下のAudioVolumeのみしか有効になっていない場合はEntranceVolumeを無効にする */
	if (EntranceVolumes.Num() > 0) {
		if (bNewEnabled) {
			for (AAtomEntranceVolume* EntranceVolume : EntranceVolumes) 
			{
				if(!EntranceVolume)
				{
					continue;
				}
				int32 AudioVolumeEnabledCount = 0;
				for (TWeakObjectPtr<AAtomAudioVolume> AtomAudioVolume : EntranceVolume->NeighbourhoodAudioVolumeArray) {
					if (AtomAudioVolume.IsValid() && AtomAudioVolume->GetEnabled()) {
						AudioVolumeEnabledCount++;
					}
				}
				if (AudioVolumeEnabledCount > 0) {
					EntranceVolume->SetEnabled(true);
				}
			}
		} else {
			for (AAtomEntranceVolume* EntranceVolume : EntranceVolumes) 
			{
				if(!EntranceVolume)
				{
					continue;
				}
				int32 AudioVolumeEnabledCount = 0;
				for (TWeakObjectPtr<AAtomAudioVolume> AtomAudioVolume : EntranceVolume->NeighbourhoodAudioVolumeArray) {
					if (AtomAudioVolume.IsValid() && AtomAudioVolume->GetEnabled()) {
						AudioVolumeEnabledCount++;
					}
				}
				if (AudioVolumeEnabledCount <= 1) {
					EntranceVolume->SetEnabled(false);
				}
			}
		}
	}

	if (bNewEnabled == true) {
		return;
	}

	if ((bOverrideAtomAudioVolume == true) || (AtomAudioVolumeSettings != NULL)) {
		FAtomAudioVolumeParameters* AtomAudioVolumeParam = AAtomAudioVolume::GetAtomAudioVolumeSettingsToApply(this);
		if (AtomAudioVolumeParam && AtomAudioVolumeParam->bUseSnapshotSettings) {
			FAtomListener* listener = FAtomListener::GetListener();
			FVector ListenerLocation = listener->GetListeningPoint();
			auto AudioVolume = GetAudioSettings(ListenerLocation, EAtomAudioVolumeType::UseSnapshot);
			if (this == AudioVolume) {
				for (FSnapshotSwitchSettings DspBusEffect : AtomAudioVolumeParam->SnapshotSwitchSettings) {
					UAtomAsrRack* asr_rack = UAtomAsrRack::GetAsrRack(DspBusEffect.AsrRackID);

					/* リスナーが入っているAudioVolumeが無効化されたためボリュームに入る前のSnapshotに戻す */
					criAtomExAsrRack_ApplyDspBusSnapshot(DspBusEffect.AsrRackID, TCHAR_TO_UTF8(*asr_rack->UserSetSnapshotName), 0);
				}
			}
		}
	}
}

void AAtomAudioVolume::SetPriority(const float NewPriority)
{
	if (NewPriority != Priority) {
		Priority = NewPriority;
		if (UCriWareInitializer::AudioVolumeArray_Snapshot.Find(this) != INDEX_NONE) {
			UCriWareInitializer::AudioVolumeArray_Snapshot.Sort([](const TWeakObjectPtr<AAtomAudioVolume>& A, const TWeakObjectPtr<AAtomAudioVolume>& B) { return (A.Get()->GetPriority() > B.Get()->GetPriority()); });
		}
		if (UCriWareInitializer::AudioVolumeArray_Bus.Find(this) != INDEX_NONE) {
			UCriWareInitializer::AudioVolumeArray_Bus.Sort([](const TWeakObjectPtr<AAtomAudioVolume>& A, const TWeakObjectPtr<AAtomAudioVolume>& B) { return (A.Get()->GetPriority() > B.Get()->GetPriority()); });
		}
		if (UCriWareInitializer::AudioVolumeArray_Aisac.Find(this) != INDEX_NONE) {
			UCriWareInitializer::AudioVolumeArray_Aisac.Sort([](const TWeakObjectPtr<AAtomAudioVolume>& A, const TWeakObjectPtr<AAtomAudioVolume>& B) { return (A.Get()->GetPriority() > B.Get()->GetPriority()); });
		}
	}
}

bool AAtomAudioVolume::CheckIfSharesSameVolumeTag(const AAtomAudioVolume* Volume) const
{
	if (!Volume) {
		return false;
	}

	for (FName TagName : Volume->AudioVolumeTags) {
		if (AudioVolumeTags.Find(TagName) != INDEX_NONE) {
			return true;
		}
	}
	return false;
}

void AAtomAudioVolume::SetReverbSettings(const FSnapshotSwitchSettings& NewReverbSettings)
{
	if ((bOverrideAtomAudioVolume == true) || (AtomAudioVolumeSettings != NULL)) {
		FAtomAudioVolumeParameters* AtomAudioVolumeParam = AAtomAudioVolume::GetAtomAudioVolumeSettingsToApply(this);
		AtomAudioVolumeParam->SnapshotSwitchSettings.Add(NewReverbSettings);
	}
}

bool IsChangedAudioVolumeNum(int previous_volume_num, int current_volume_num)
{
	if (previous_volume_num == 0 || previous_volume_num != current_volume_num)
	{
		return true;
	}
	return false;
}

TWeakObjectPtr<class AAtomAudioVolume> AAtomAudioVolume::GetNearestAtomAudioVolume(const FVector& Positiion, EAtomAudioVolumeType SettingsID)
{
	if (!UCriWareInitializer::bIsInitialised_AudioVolume) {
		/* AudioVolumeが初期化されていなかったnullptrを返す */
		return nullptr;
	}

	TArray<TWeakObjectPtr<class AAtomAudioVolume>> TempAudioVolumeArray;
	// Find the highest priority volume encompassing the current view location.
	switch (SettingsID)
	{
	case EAtomAudioVolumeType::UseSnapshot://ForSnapshot
		TempAudioVolumeArray = UCriWareInitializer::AudioVolumeArray_Snapshot;
		break;
	case EAtomAudioVolumeType::UseBus://ForBus
		TempAudioVolumeArray = UCriWareInitializer::AudioVolumeArray_Bus;
		break;
	case EAtomAudioVolumeType::UseAisacControl://ForAisac
		TempAudioVolumeArray = UCriWareInitializer::AudioVolumeArray_Aisac;
		break;
	default:
		TempAudioVolumeArray = UCriWareInitializer::AudioVolumeArray_Snapshot;
		break;
	}

	TArray<float> VolumeDistance;
	FVector listener_position = Positiion;
	VolumeDistance.Init(-1, TempAudioVolumeArray.Num());
	//ParallelFor(TempAudioVolumeArray.Num(), [&](int32 Idx) {
	for(int Idx = 0; Idx < TempAudioVolumeArray.Num(); Idx++){
		TWeakObjectPtr<AAtomAudioVolume> AudioVolume = TempAudioVolumeArray[Idx];
		if (AudioVolume.IsValid()) {
			bool bIsAddedStaticArray = false;
			FVector OutPos;
			VolumeDistance[Idx] = AudioVolume->GetBrushComponent()->GetClosestPointOnCollision(listener_position, OutPos);
		}
	}
	//});

	float min_dist = 0.0f;
	int32 min_id  = -1;
	for (int iter = 0; iter < VolumeDistance.Num(); iter++)
	{
		if (VolumeDistance[iter] < 0)
		{
			continue;
		}

		if (min_id == -1 || min_dist > VolumeDistance[iter])
		{
			min_dist = VolumeDistance[iter];
			min_id = iter;
		}
	}
	return min_id != -1 ? TempAudioVolumeArray[min_id] : nullptr;
}


TWeakObjectPtr<AAtomAudioVolume> AAtomAudioVolume::GetAudioSettings(const FVector& ViewLocation, EAtomAudioVolumeType SettingsID, const TWeakObjectPtr<AAtomEntranceVolume>& EntranceVolume)
{
	TArray<TWeakObjectPtr<class AAtomAudioVolume>> TempAudioVolumeArray;

	if (!UCriWareInitializer::bIsInitialised_AudioVolume) {
		/* AudioVolumeが初期化されていなかったnullptrを返す */
		return nullptr;
	}

	bool bChangeAudioVolumeNum = false;

	// Find the highest priority volume encompassing the current view location.
	switch (SettingsID)
	{
	case EAtomAudioVolumeType::UseSnapshot://ForSnapshot
		TempAudioVolumeArray = UCriWareInitializer::AudioVolumeArray_Snapshot;
		bChangeAudioVolumeNum = IsChangedAudioVolumeNum(CurrentAudioVolumeNum_Snapshot, TempAudioVolumeArray.Num());
		break;
	case EAtomAudioVolumeType::UseBus://ForBus
		TempAudioVolumeArray = UCriWareInitializer::AudioVolumeArray_Bus;
		bChangeAudioVolumeNum = IsChangedAudioVolumeNum(CurrentAudioVolumeNum_Bus, TempAudioVolumeArray.Num());
		break;
	case EAtomAudioVolumeType::UseAisacControl://ForAisac
		TempAudioVolumeArray = UCriWareInitializer::AudioVolumeArray_Aisac;
		bChangeAudioVolumeNum = IsChangedAudioVolumeNum(CurrentAudioVolumeNum_Aisac, TempAudioVolumeArray.Num());
		break;
	default:
		TempAudioVolumeArray = UCriWareInitializer::AudioVolumeArray_Snapshot;
		bChangeAudioVolumeNum = IsChangedAudioVolumeNum(CurrentAudioVolumeNum_Snapshot, TempAudioVolumeArray.Num());
		break;
	}
	
	if (!bChangeAudioVolumeNum && EntranceVolume != nullptr && EntranceVolume->NeighbourhoodAudioVolumeArray.Num() > 0) {
		TArray<bool> ContainIsInVolumeArray;
		ContainIsInVolumeArray.Init(false, EntranceVolume->NeighbourhoodAudioVolumeArray.Num());
		//ParallelFor(EntranceVolume->NeighbourhoodAudioVolumeArray.Num(), [&](int32 Idx) {
		for(int Idx = 0; Idx < EntranceVolume->NeighbourhoodAudioVolumeArray.Num(); Idx++){
			TWeakObjectPtr<AAtomAudioVolume> AudioVolume = EntranceVolume->NeighbourhoodAudioVolumeArray[Idx];
			if (AudioVolume.IsValid()) {
				bool bIsAddedStaticArray = false;
				switch (SettingsID)
				{
				case EAtomAudioVolumeType::UseSnapshot://ForSnapshot
					bIsAddedStaticArray = AudioVolume->bIsAddedStaticArray_Snapshot;
					break;
				case EAtomAudioVolumeType::UseBus://ForBus
					bIsAddedStaticArray = AudioVolume->bIsAddedStaticArray_Bus;
					break;
				case EAtomAudioVolumeType::UseAisacControl://ForAisac
					bIsAddedStaticArray = AudioVolume->bIsAddedStaticArray_Aisac;
					break;
				default:
					bIsAddedStaticArray = AudioVolume->bIsAddedStaticArray_Snapshot;
					break;
				}
				if (AudioVolume->GetEnabled() && bIsAddedStaticArray && AudioVolume->EncompassesPoint(ViewLocation)) {
					/* Priorityが高い順に並んでいるためヒットした一番最初のPriorityが高いボリュームが出力される */
					/* ボリュームが重複されている場合は、順序付けの観点よりすでに出力されているものが再度出力される */
					/* ボリュームを重複させる場合はPriority付けは必須 */
					ContainIsInVolumeArray[Idx] = true;
				}
			}
		}
		//});
		for (int32 Index = 0; Index < ContainIsInVolumeArray.Num(); Index++) {
			if (ContainIsInVolumeArray[Index]) {
				/* 配列はPriorityが高い順になっているためPriorityの比較の必要はなく最初にtrueが当たったIDのVolumeを返す */
				return EntranceVolume->NeighbourhoodAudioVolumeArray[Index].Get();
			}
		}
	}

	/* EntranceVolumeにセットされているAudioVolumeのどれにも侵入していなかったらグローバルなAudioVolumeアレイにセットされているAudioVolumeのどれかに侵入しているか確認する	 */
	if (TempAudioVolumeArray.Num() > 0) {
		TArray<bool> ContainIsInVolumeArray;
		ContainIsInVolumeArray.Init(false, TempAudioVolumeArray.Num());
		//ParallelFor(TempAudioVolumeArray.Num(), [&](int32 Idx) {
		for(int Idx = 0; Idx < TempAudioVolumeArray.Num(); Idx++){
			TWeakObjectPtr<AAtomAudioVolume> audio_volume = TempAudioVolumeArray[Idx];
			// Volume encompasses, break out of loop.
			if (audio_volume.IsValid()) {
				bool isAddedStaticArray = false;
				switch (SettingsID)
				{
				case EAtomAudioVolumeType::UseSnapshot://ForSnapshot
					isAddedStaticArray = audio_volume->bIsAddedStaticArray_Snapshot;
					break;
				case EAtomAudioVolumeType::UseBus://ForBus
					isAddedStaticArray = audio_volume->bIsAddedStaticArray_Bus;
					break;
				case EAtomAudioVolumeType::UseAisacControl://ForAisac
					isAddedStaticArray = audio_volume->bIsAddedStaticArray_Aisac;
					break;
				default:
					isAddedStaticArray = audio_volume->bIsAddedStaticArray_Snapshot;
					break;
				}
				if (audio_volume->GetEnabled() && isAddedStaticArray && audio_volume->EncompassesPoint(ViewLocation)) {
					/* Priorityが高い順に並んでいるためヒットした一番最初のPriorityが高いボリュームが出力される */
					/* ボリュームが重複されている場合は、順序付けの観点よりすでに出力されているものが再度出力される */
					/* ボリュームを重複させる場合はPriority付けは必須 */
					ContainIsInVolumeArray[Idx] = true;
				}
			}
		}
		//});
		for (int32 iter_id = 0; iter_id < ContainIsInVolumeArray.Num(); iter_id++) {
			if (ContainIsInVolumeArray[iter_id]) {
				/* 配列はPriorityが高い順になっているためPriorityの比較の必要はなく最初にtrueが当たったIDのVolumeを返す */
				return TempAudioVolumeArray[iter_id].Get();
			}
		}
	}
	
	return nullptr;
}

void AAtomAudioVolume::EnableAllAudioVolume(bool bEnable)
{
	for (TWeakObjectPtr<class AAtomAudioVolume> Volume : UCriWareInitializer::AudioVolumeArray_Snapshot) {
		Volume->SetEnabled(bEnable);
		if (bEnable == false && (Volume->bOverrideAtomAudioVolume == true || Volume->AtomAudioVolumeSettings != NULL)) {
			const FAtomAudioVolumeParameters* AtomAudioVolumeParam = AAtomAudioVolume::GetAtomAudioVolumeSettingsToApply(Volume.Get());
			for (FSnapshotSwitchSettings DspBusEffect : AtomAudioVolumeParam->SnapshotSwitchSettings) {
				UAtomAsrRack* AsrRack = UAtomAsrRack::GetAsrRack(DspBusEffect.AsrRackID);
				/* リスナーが入っているAudioVolumeが無効化されたためボリュームに入る前のSnapshotに戻す */
				criAtomExAsrRack_ApplyDspBusSnapshot(DspBusEffect.AsrRackID, TCHAR_TO_UTF8(*AsrRack->UserSetSnapshotName), 0);
			}
		}
	}

	for (TWeakObjectPtr<class AAtomAudioVolume> Volume : UCriWareInitializer::AudioVolumeArray_Bus) {
		Volume->SetEnabled(bEnable);
	}

	for (TWeakObjectPtr<class AAtomAudioVolume> Volume : UCriWareInitializer::AudioVolumeArray_Aisac) {
		Volume->SetEnabled(bEnable);
	}
}

/* 値が絶対帰ることを保証すべき */
FAtomAudioVolumeParameters* AAtomAudioVolume::GetAtomAudioVolumeSettingsToApply(const TWeakObjectPtr<AAtomAudioVolume>& AtomAudioVolume)
{
	if (AtomAudioVolume == nullptr) {
		return nullptr;
	}
	/* AttenuationSettingsを使用するかどうかチェック */
	if (AtomAudioVolume->bOverrideAtomAudioVolume == true) {
		/* AttenuationSettings上書き時 */
		return reinterpret_cast<FAtomAudioVolumeParameters*>(&(AtomAudioVolume->AtomAudioVolumeSettingsOverrides));
	}	
	if (AtomAudioVolume->AtomAudioVolumeSettings != NULL) {
		/* AttenuationSettingsアセット使用時 */
		return reinterpret_cast<FAtomAudioVolumeParameters*>(&(AtomAudioVolume->AtomAudioVolumeSettings->AtomAudioVolumeParameters));
	}
	return nullptr;
}

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION <= 23
void AAtomAudioVolume::SetHidden(bool InHidden)
{
	bHidden = InHidden;
}
#endif

#if WITH_EDITOR
void AAtomAudioVolume::ProcessAudioVolumeParameterSettings(FAtomAudioVolumeParameters* AtomAudioVolumeParam, TArray<TWeakObjectPtr<class AAtomAudioVolume>> AudioVolumeArray, bool& bIsAddedStaticArray, EAtomAudioVolumeType SettingsID)
{
	if (AtomAudioVolumeParam->bUseBusSendSettings) {
		if (AudioVolumeArray.Find(this) == INDEX_NONE) {
			bIsAddedStaticArray = true;
			AudioVolumeArray.Add(this);
			AudioVolumeArray.Sort([](const TWeakObjectPtr<class AAtomAudioVolume>& A, const TWeakObjectPtr<class AAtomAudioVolume>& B) { return (A.Get()->GetPriority() > B.Get()->GetPriority()); });
			switch (SettingsID) {
			case EAtomAudioVolumeType::UseBus :
				for (FBusSendInterpolationSettings BusInterpolation : AtomAudioVolumeParam->BusSendInterpolateSettings) {
					MaxInterpolationDistanceForBus = FMath::Max(MaxInterpolationDistanceForBus, BusInterpolation.Width);
				}
				break;
			case EAtomAudioVolumeType::UseAisacControl :
				for (FAisacControlInterpolationSettings AisacInterpolation : AtomAudioVolumeParam->AisacControlInterpolateSettings) {
					MaxInterpolationDistanceForAisac = FMath::Max(MaxInterpolationDistanceForAisac, AisacInterpolation.Width);
				}
				break;
			default:
				break;
			}
		}
	} else {
		if (AudioVolumeArray.Find(this) != INDEX_NONE) {
			AudioVolumeArray.Remove(this);
			bIsAddedStaticArray = false;
		}
	}
}

void AAtomAudioVolume::ProcessAutoSettingsForEntranceVolume(FPropertyChangedEvent& PropertyChangedEvent)
{
	if (PropertyChangedEvent.Property && PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(AAtomAudioVolume, bAutoSettingEntranceVolume)) {
		TArray<AActor*> ActorArray;
		/* レベル上にあるEntranceVolumeをすべて取得する */
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAtomEntranceVolume::StaticClass(), ActorArray);

		/* Null要素をすべてshrink */
		AAtomEntranceVolume::EntranceVolumeArray.Remove(nullptr);
		EntranceVolumes.Remove(nullptr);
		
		for (AActor* tmp_actor : ActorArray) {
			AAtomEntranceVolume* atom_entrance_volume = Cast<AAtomEntranceVolume>(tmp_actor);
			if (AAtomEntranceVolume::EntranceVolumeArray.Find(atom_entrance_volume) == INDEX_NONE) {
				/* AAtomEntranceVolume::EntranceVolumeArrayに登録しPriority順に並べ替える */
				atom_entrance_volume->bIsAddedStaticArray_EntranceVolume = true;
				AAtomEntranceVolume::EntranceVolumeArray.Add(atom_entrance_volume);
				AAtomEntranceVolume::EntranceVolumeArray.Sort([](const AAtomEntranceVolume& A, const AAtomEntranceVolume& B) { return (A.GetPriority() > B.GetPriority()); });
			}
		}

		/* bAutoSettingEntranceVolumeが有効になった場合は、このAudioVolumeに内包すると判定されたEntranceVolumeアレイからこのVolumeに接しているEntranceVolumeを破棄する */
		/* 破棄後、EntranceVolumeのNeighbourhoodAudioVolumeArrayにこのAudioVolumeを破棄する */
		for (AAtomEntranceVolume* entrance_volume : AAtomEntranceVolume::EntranceVolumeArray) {
			if (!IsValid(entrance_volume)) 
			{
				continue;
			}

			FVector entrasnce_actor_location = entrance_volume->GetActorLocation();
			GetBrushComponent()->SetCollisionProfileName(CollisionProfileForDetectingEntranceVolume);
			for (FVector points : entrance_volume->Brush->Points) {
				/* pointsはlocal座標のため、World座標にする */
				FVector world_point_location = entrasnce_actor_location + points;
				if (UWorld* WorldPtr = GetWorld()) {
					// LineTraceTestByChannel is generally threadsafe, but there is a very narrow race condition here 
					// if World goes invalid before the scene lock and queries begin.
					TArray<FHitResult> HitResults;
					WorldPtr->LineTraceMultiByChannel(HitResults, entrasnce_actor_location, world_point_location, ECollisionChannel::ECC_WorldDynamic);
					for (auto Hit : HitResults) {
						AAtomAudioVolume* ResultVolume = Cast<AAtomAudioVolume>(Hit.GetActor());
						if (bAutoSettingEntranceVolume) {
							if (this == ResultVolume && EntranceVolumes.Find(entrance_volume) == INDEX_NONE) {
								EntranceVolumes.Add(entrance_volume);
								EntranceVolumes.Sort([](const AAtomEntranceVolume& A, const AAtomEntranceVolume& B) { return (A.GetPriority() > B.GetPriority()); });
								entrance_volume->NeighbourhoodAudioVolumeArray.Remove(nullptr);
								if (entrance_volume->NeighbourhoodAudioVolumeArray.Find(this) == INDEX_NONE) {
									entrance_volume->NeighbourhoodAudioVolumeArray.Add(this);
									entrance_volume->NeighbourhoodAudioVolumeArray.Sort([](const TWeakObjectPtr<AAtomAudioVolume>& A, const TWeakObjectPtr<AAtomAudioVolume>& B) { return (A.Get()->GetPriority() > B.Get()->GetPriority()); });
								}
							}
						} else {
							if (this == ResultVolume && EntranceVolumes.Find(entrance_volume) != INDEX_NONE) {
								EntranceVolumes.Remove(entrance_volume);
								EntranceVolumes.Sort([](const AAtomEntranceVolume& A, const AAtomEntranceVolume& B) { return (A.GetPriority() > B.GetPriority()); });
								if (entrance_volume->NeighbourhoodAudioVolumeArray.Find(this) != INDEX_NONE) {
									entrance_volume->NeighbourhoodAudioVolumeArray.Remove(this);
									entrance_volume->NeighbourhoodAudioVolumeArray.Sort([](const TWeakObjectPtr<AAtomAudioVolume>& A, const TWeakObjectPtr<AAtomAudioVolume>& B) { return (A.Get()->GetPriority() > B.Get()->GetPriority()); });
									entrance_volume->NeighbourhoodAudioVolumeArray.Remove(nullptr);
								}
							}
						}
					}
				}
			}
			GetBrushComponent()->SetCollisionProfileName(CollisionProfile);

			/* EntranceVolumeが3個以上AudioVolumeを登録しているとき、2個になるようPriorityが低いものを除外する */
			if (entrance_volume->NeighbourhoodAudioVolumeArray.Num() > 2) 
			{
				TArray<TWeakObjectPtr<AAtomAudioVolume>> RemoveAudioVolumeArray;
				for (int iter = entrance_volume->NeighbourhoodAudioVolumeArray.Num() - 1; iter > 1; iter--)
				{
					TWeakObjectPtr<AAtomAudioVolume> RemoveAudioVolume = entrance_volume->NeighbourhoodAudioVolumeArray[iter];
					RemoveAudioVolume->EntranceVolumes.Remove(entrance_volume);
					RemoveAudioVolumeArray.Add(RemoveAudioVolume);
				}
				for (TWeakObjectPtr<AAtomAudioVolume> remove_audiovolume : RemoveAudioVolumeArray) {
					entrance_volume->NeighbourhoodAudioVolumeArray.Remove(remove_audiovolume);
				}
			}
		}
	}

	/* ProcessAutoSettingsForEntranceVolume関数内のみで使う関数の定義 */
	struct ProcessAutoSettingsForEntranceVolumeFunc
	{
		static void RemoveUnnecessaryEntranceVolume()
		{
			for (AAtomEntranceVolume* entrance_volume : AAtomEntranceVolume::EntranceVolumeArray)
			{
				/* EntranceVolumeが3個以上AudioVolumeを登録しているとき、2個になるようPriorityが低いものを除外する */
				if (entrance_volume->NeighbourhoodAudioVolumeArray.Num() > 2)
				{
					TArray<TWeakObjectPtr<AAtomAudioVolume>> RemoveAudioVolumeArray;
					for (int iter = entrance_volume->NeighbourhoodAudioVolumeArray.Num() - 1; iter > 1; iter--)
					{
						TWeakObjectPtr<AAtomAudioVolume> RemoveAudioVolume = entrance_volume->NeighbourhoodAudioVolumeArray[iter];
						RemoveAudioVolume->EntranceVolumes.Remove(entrance_volume);
						RemoveAudioVolumeArray.Add(RemoveAudioVolume);
					}
					for (TWeakObjectPtr<AAtomAudioVolume> remove_audiovolume : RemoveAudioVolumeArray) {
						entrance_volume->NeighbourhoodAudioVolumeArray.Remove(remove_audiovolume);
					}
				}
			}
		}
	};

	/* ユーザが手動でAudioVolumeのEntranceVolumeアレイにレベル上のEntranceVolumeを設定していた場合に、bAutoSettingNeighborAudioVolumeToEntranceVolumeを有効に自動的にレベル上のEntranceVolumeのNeighborhoodAudioVolumeArrayにこのAudioVolumeを登録する */
	/* bAutoSettingNeighborAudioVolumeToEntranceVolumeを無効化したらレベル上のEntranceVolumeのNeighborhoodAudioVolumeArrayからこのAudioVolumeを破棄する */
	if (bAutoSettingNeighbourAudioVolumeToEntranceVolume) {
		for (AAtomEntranceVolume* entrance_volume : EntranceVolumes) {
			if (entrance_volume && entrance_volume->NeighbourhoodAudioVolumeArray.Find(this) == INDEX_NONE) {
				entrance_volume->NeighbourhoodAudioVolumeArray.Add(this);
				entrance_volume->NeighbourhoodAudioVolumeArray.Sort([](const TWeakObjectPtr<AAtomAudioVolume>& A, const TWeakObjectPtr<AAtomAudioVolume>& B) { return (A.Get()->GetPriority() > B.Get()->GetPriority()); });
			}
		}
		ProcessAutoSettingsForEntranceVolumeFunc::RemoveUnnecessaryEntranceVolume();
	} else {
		for (AAtomEntranceVolume* entrance_volume : EntranceVolumes) {
			if (entrance_volume && entrance_volume->NeighbourhoodAudioVolumeArray.Find(this) != INDEX_NONE) {
				entrance_volume->NeighbourhoodAudioVolumeArray.Remove(this);
				entrance_volume->NeighbourhoodAudioVolumeArray.Sort([](const TWeakObjectPtr<AAtomAudioVolume>& A, const TWeakObjectPtr<AAtomAudioVolume>& B) { return (A.Get()->GetPriority() > B.Get()->GetPriority()); });
			}
		}
		ProcessAutoSettingsForEntranceVolumeFunc::RemoveUnnecessaryEntranceVolume();
	}
}


void AAtomAudioVolume::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	if (!((bOverrideAtomAudioVolume == true) || (AtomAudioVolumeSettings != NULL))) {
		Super::PostEditChangeProperty(PropertyChangedEvent);
		return;
	}

	FAtomAudioVolumeParameters* AtomAudioVolumeParam = AAtomAudioVolume::GetAtomAudioVolumeSettingsToApply(this);

	/* ワイヤーフレームのカラー更新 */
	BrushColor = AtomAudioVolumeParam->AtomAudioVolumeWireFrameColor;

	Super::PostEditChangeProperty(PropertyChangedEvent);

	ProcessAutoSettingsForEntranceVolume(PropertyChangedEvent);

	/* Snapshot設定の設定・破棄 */
	ProcessAudioVolumeParameterSettings(AtomAudioVolumeParam, UCriWareInitializer::AudioVolumeArray_Snapshot, bIsAddedStaticArray_Snapshot, EAtomAudioVolumeType::UseSnapshot);
	/* BusSend設定の設定・破棄 */
	ProcessAudioVolumeParameterSettings(AtomAudioVolumeParam, UCriWareInitializer::AudioVolumeArray_Bus, bIsAddedStaticArray_Bus, EAtomAudioVolumeType::UseBus);
	/* AisacControl設定の設定・破棄 */
	ProcessAudioVolumeParameterSettings(AtomAudioVolumeParam, UCriWareInitializer::AudioVolumeArray_Aisac, bIsAddedStaticArray_Aisac, EAtomAudioVolumeType::UseAisacControl);

	/* レベル上に置いたすべてのAudioVolumeのプライオリティを比較して、アレイをプライオリティに準じた並び順に変更する */
	if (AtomAudioVolumeParam->bUseSnapshotSettings) {
		UCriWareInitializer::AudioVolumeArray_Snapshot.Sort([](const TWeakObjectPtr<class AAtomAudioVolume>& A, const TWeakObjectPtr<class AAtomAudioVolume>& B) { return (A.Get()->GetPriority() > B.Get()->GetPriority()); });
	}
	if (AtomAudioVolumeParam->bUseBusSendSettings) {
		UCriWareInitializer::AudioVolumeArray_Bus.Sort([](const TWeakObjectPtr<class AAtomAudioVolume>& A, const TWeakObjectPtr<class AAtomAudioVolume>& B) { return (A.Get()->GetPriority() > B.Get()->GetPriority()); });
	}
	if (AtomAudioVolumeParam->bUseAisacControlSettings) {
		UCriWareInitializer::AudioVolumeArray_Aisac.Sort([](const TWeakObjectPtr<class AAtomAudioVolume>& A, const TWeakObjectPtr<class AAtomAudioVolume>& B) { return (A.Get()->GetPriority() > B.Get()->GetPriority()); });
	}

	/* index指定のアレイ要素の調整（最大数以上のindexが指定されたら0に戻すなど） */
	AdjustDisplayAudioVolumeSetting(AtomAudioVolumeParam);
}
#endif // WITH_EDITOR

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/

 /* --- end of file --- */
