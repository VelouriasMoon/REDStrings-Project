#pragma once
#include "CoreMinimal.h"
#include "EPlayerAIOrder.generated.h"

UENUM(BlueprintType)
enum class EPlayerAIOrder : uint8 {
    Free,
    SameTarget,
    OtherTarget,
    Escape,
    Wary,
    Limit,
};

