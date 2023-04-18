#pragma once
#include "CoreMinimal.h"
#include "EOptionControllerVibration.generated.h"

UENUM(BlueprintType)
enum class EOptionControllerVibration : uint8 {
    On,
    Off,
    Num,
    Default = 0x0,
    EOptionControllerVibration_MAX = 0x3,
};

