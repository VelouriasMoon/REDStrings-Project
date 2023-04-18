#pragma once
#include "CoreMinimal.h"
#include "EOptionCameraPitch.generated.h"

UENUM(BlueprintType)
enum class EOptionCameraPitch : uint8 {
    Normal,
    Reverse,
    Num,
    Default = 0x0,
    EOptionCameraPitch_MAX = 0x3,
};

