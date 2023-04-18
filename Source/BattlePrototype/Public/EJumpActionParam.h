#pragma once
#include "CoreMinimal.h"
#include "EJumpActionParam.generated.h"

UENUM(BlueprintType)
enum class EJumpActionParam : uint8 {
    Default,
    MoveJump,
    SprintJump,
    AirJump,
    AirSprintJump,
};

