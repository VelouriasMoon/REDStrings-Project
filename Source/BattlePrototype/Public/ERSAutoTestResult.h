#pragma once
#include "CoreMinimal.h"
#include "ERSAutoTestResult.generated.h"

UENUM(BlueprintType)
enum class ERSAutoTestResult : uint8 {
    Default,
    Invalid,
    Error,
    Running,
    Failed,
    Succeeded,
};

