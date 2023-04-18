#pragma once
#include "CoreMinimal.h"
#include "HCSkillAttribute.generated.h"

UENUM(BlueprintType)
enum class HCSkillAttribute : uint8 {
    Default,
    Flame,
    Electric,
    Water,
    Oil,
    Confusion,
};

