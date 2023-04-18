#pragma once
#include "CoreMinimal.h"
#include "EBrainTalkPriorityCheckResult.generated.h"

UENUM(BlueprintType)
enum class EBrainTalkPriorityCheckResult : uint8 {
    Play,
    Stock,
    Discard,
};

