#pragma once
#include "CoreMinimal.h"
#include "EFallActionParam.generated.h"

UENUM(BlueprintType)
enum class EFallActionParam : uint8 {
    Jump,
    MoveJump,
    SprintJump,
    AirSprintJump,
    Dodge,
    Other,
};

