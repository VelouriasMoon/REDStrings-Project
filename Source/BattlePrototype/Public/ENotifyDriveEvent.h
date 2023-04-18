#pragma once
#include "CoreMinimal.h"
#include "ENotifyDriveEvent.generated.h"

UENUM(BlueprintType)
enum class ENotifyDriveEvent : uint8 {
    SAS,
    JustDodge,
    HitPsychicCombo,
    Defeated,
    DefeatedBrainCrash,
    DefeatedNpc,
    TakeDamage,
    WeaponHitCH0100,
    WeaponHitCH0200,
    PsychicAttack,
    PsychicUnique,
    HologramAttack,
    BeginBrainField,
    EndBrainField,
    HitCombinationVision,
    NexusDriveSeeThroughBestJustDodgeAttack,
};

