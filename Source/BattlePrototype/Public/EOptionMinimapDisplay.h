#pragma once
#include "CoreMinimal.h"
#include "EOptionMinimapDisplay.generated.h"

UENUM(BlueprintType)
enum class EOptionMinimapDisplay : uint8 {
    On,
    Off,
    Num,
    Default = 0x0,
    EOptionMinimapDisplay_MAX = 0x3,
};

