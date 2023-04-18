#pragma once
#include "CoreMinimal.h"
#include "EVibSndPrio.generated.h"

UENUM(BlueprintType)
enum class EVibSndPrio : uint8 {
    Default,
    Compatible,
    NormalL,
    NormalM,
    NormalH,
    FootL,
    FootM,
    FootH,
    AttackL,
    AttackM,
    AttackH,
    DamageL,
    DamageM,
    DamageH,
    DirectShotL,
    DirectShotM,
    DirectShotH,
    BrainCrashL,
    BrainCrashM,
    BrainCrashH,
    BrainFieldL,
    BrainFieldM,
    BrainFieldH,
};

