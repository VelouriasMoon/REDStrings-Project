#pragma once
#include "CoreMinimal.h"
#include "EPlayerSkillIconCategory.generated.h"

UENUM(BlueprintType)
enum class EPlayerSkillIconCategory : uint8 {
    WeaponAttackUp,
    PsychicAttackUp,
    CrashUp,
    BrainCrash,
    EnhancedBody,
    ExtendAction,
    ExtendWeaponAttack,
    ExtendPsychic,
    ExtendPsychicCombo,
    EnhancedGauge,
    Item,
};

