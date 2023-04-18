#pragma once
#include "CoreMinimal.h"
#include "EOptimizeMaterialConditionBranch.generated.h"

UENUM(BlueprintType)
enum class EOptimizeMaterialConditionBranch : uint8 {
    AND,
    OR,
};

