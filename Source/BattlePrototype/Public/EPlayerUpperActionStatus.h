#pragma once
#include "CoreMinimal.h"
#include "EPlayerUpperActionStatus.generated.h"

UENUM(BlueprintType)
enum class EPlayerUpperActionStatus : uint8 {
    END_ACTION,
    UPPER_PSYCHIC_ACTION,
    UPPER_ACTION,
    DISABLE_MOVE,
    CHANGE_BATTLE,
    CAPTURE,
    PSYCHIC_LEFT,
    PSYCHIC_RIGHT,
};

