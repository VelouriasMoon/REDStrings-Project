#pragma once
#include "CoreMinimal.h"
#include "EOptionMinimapRotation.generated.h"

UENUM(BlueprintType)
enum class EOptionMinimapRotation : uint8 {
    On,
    Off,
    Num,
    Default = 0x1,
    EOptionMinimapRotation_MAX = 0x3,
};

