#pragma once
#include "CoreMinimal.h"
#include "EBrainTalkPriority.generated.h"

UENUM(BlueprintType)
enum class EBrainTalkPriority : uint8 {
    Sensitive,
    Low,
    Normal,
    High,
    Extreme,
    Num,
};

