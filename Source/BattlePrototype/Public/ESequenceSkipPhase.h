#pragma once
#include "CoreMinimal.h"
#include "ESequenceSkipPhase.generated.h"

UENUM(BlueprintType)
enum class ESequenceSkipPhase : uint8 {
    None,
    WaitSkip,
};

