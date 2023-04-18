#pragma once
#include "CoreMinimal.h"
#include "EHCBadState.generated.h"

UENUM(BlueprintType)
enum class EHCBadState : uint8 {
    State_None,
    State_Flame,
    State_Electric,
    State_Flooded,
    State_Oil,
    State_Confusion,
    State_Cable,
    State_MAX UMETA(Hidden),
};

