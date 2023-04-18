#pragma once
#include "CoreMinimal.h"
#include "EOptimizeMaterialCheckResultType.generated.h"

UENUM(BlueprintType)
enum class EOptimizeMaterialCheckResultType : uint8 {
    OMCR_OFF,
    OMCR_ON,
    OMCR_ON_REVERSE,
    OMCR_MAX UMETA(Hidden),
};

