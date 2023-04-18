#pragma once
#include "CoreMinimal.h"
#include "HCHitCameraShakeType.generated.h"

UENUM(BlueprintType)
enum class HCHitCameraShakeType : uint8 {
    Default,
    Shake_S,
    Shake_M,
    Shake_L,
    Shake_Object,
    None,
};

