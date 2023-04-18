#pragma once
#include "CoreMinimal.h"
#include "EOptionMinimapScaling.generated.h"

UENUM(BlueprintType)
enum class EOptionMinimapScaling : uint8 {
    Normal,
    Expansion,
    Num,
    Default = 0x1,
    EOptionMinimapScaling_MAX = 0x3,
};

