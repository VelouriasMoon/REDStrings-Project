#pragma once
#include "CoreMinimal.h"
#include "EOptimizeMaterialConditionType.generated.h"

UENUM(BlueprintType)
enum class EOptimizeMaterialConditionType : uint8 {
    LESS,
    LESS_EQUAL,
    EQUAL,
    NOT_EQUAL,
    GREATOR,
    GREATOR_EQUAL,
};

