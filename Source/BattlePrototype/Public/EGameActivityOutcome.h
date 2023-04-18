#pragma once
#include "CoreMinimal.h"
#include "EGameActivityOutcome.generated.h"

UENUM(BlueprintType)
enum class EGameActivityOutcome : uint8 {
    Completed,
    Failed,
    Cancelled,
};

