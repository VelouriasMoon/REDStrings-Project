#pragma once
#include "CoreMinimal.h"
#include "EPlayerAITargetSearchModeCPP.generated.h"

UENUM(BlueprintType)
enum class EPlayerAITargetSearchModeCPP : uint8 {
    Near,
    Free,
    SamePlayerTarget,
    OtherPlayerTarget,
    ENPC,
};

