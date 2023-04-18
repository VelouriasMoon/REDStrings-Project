#pragma once
#include "CoreMinimal.h"
#include "EPlayerSkillCategory.generated.h"

UENUM(BlueprintType)
enum class EPlayerSkillCategory : uint8 {
    Boost,
    Extend,
    Assist,
    Drive,
    BrainField,
    Max,
};

