#pragma once
#include "CoreMinimal.h"
#include "EnemyMoveAnimKind.generated.h"

UENUM(BlueprintType)
enum class EnemyMoveAnimKind : uint8 {
    Default,
    Walk1,
    Walk2,
    Run1,
    Run2,
    Wait1,
    Wait2,
    Other,
    RotR1,
    RotR2,
    RotL1,
    RotL2,
    Fall,
    Land,
    Takeoff,
    FlyUp,
};

