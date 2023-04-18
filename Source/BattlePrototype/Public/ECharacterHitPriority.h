#pragma once
#include "CoreMinimal.h"
#include "ECharacterHitPriority.generated.h"

UENUM(BlueprintType)
enum class ECharacterHitPriority : uint8 {
    Fix,
    Telepo,
    Highest,
    EnemyHigh,
    EnemyMiddle,
    EnemyLow,
    PlayerHigh,
    PlayerMiddle,
    PlayerLow,
    NpcMoveLeft,
    NpcMoveRight,
    NpcMoveEx,
    Lowest,
};

