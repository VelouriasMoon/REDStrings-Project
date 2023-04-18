#pragma once
#include "CoreMinimal.h"
#include "EGameOverResult.generated.h"

UENUM(BlueprintType)
enum class EGameOverResult : uint8 {
    Invalid,
    Retry,
    ReturnToTitle,
    ReturnToAgitatingPoint = 0x2,
};

