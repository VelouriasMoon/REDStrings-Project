#pragma once
#include "CoreMinimal.h"
#include "EPlayerAIMoveModeCPP.generated.h"

UENUM(BlueprintType)
enum class EPlayerAIMoveModeCPP : uint8 {
    Wait,
    FollowPlayer,
    ApproachTargetNear,
    ApproachTargetMiddle,
    ApproachTargetFar,
    MoveCircle,
    MoveRandom,
    MoveAim,
    MoveAttack,
    EscapeKeepOutArea,
    ReviveNpc,
};

