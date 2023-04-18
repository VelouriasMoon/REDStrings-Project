#pragma once
#include "CoreMinimal.h"
#include "EnemyAliveAnimKind.generated.h"

UENUM(BlueprintType)
enum class EnemyAliveAnimKind : uint8 {
    IdleMove,
    Attack,
    Action,
    Damage,
    DamageDown,
    BrainCrash,
    Dead,
    InitLayout,
    Event,
    CrashChance,
    NumKind,
};

