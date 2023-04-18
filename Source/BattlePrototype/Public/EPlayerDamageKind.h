#pragma once
#include "CoreMinimal.h"
#include "EPlayerDamageKind.generated.h"

UENUM(BlueprintType)
enum class EPlayerDamageKind : uint8 {
    None,
    NormalFront,
    NormalBack,
    NormalLeft,
    NormalRight,
    KnockbackFront,
    KnockbackBack,
    KnockbackLeft,
    KnockbackRight,
    BlowFront,
    BlowBack,
    ShockFront,
    ShockBack,
    BrainCrash,
    SpecialDown,
    CoverDamage,
    CoverDamageBlow,
    Launch,
    AerialDamage,
    BrainFieldWarning,
    BrainFieldTimeUp,
    Dead,
    BrainFieldTimeUpDead,
    Down,
    KnockbackLongFront,
    KnockbackLongBack,
    KnockbackLongLeft,
    KnockbackLongRight,
};

