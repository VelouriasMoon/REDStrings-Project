#pragma once
#include "CoreMinimal.h"
#include "HCHitControllerVibrationType.generated.h"

UENUM(BlueprintType)
enum class HCHitControllerVibrationType : uint8 {
    None,
    Shake_SS,
    Shake_S,
    Shake_M,
    Shake_L,
    Shake_XL,
};

