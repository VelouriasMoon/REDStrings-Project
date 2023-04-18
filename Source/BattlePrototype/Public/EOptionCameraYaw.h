#pragma once
#include "CoreMinimal.h"
#include "EOptionCameraYaw.generated.h"

UENUM(BlueprintType)
enum class EOptionCameraYaw : uint8 {
    Normal,
    Reverse,
    Num,
    Default = 0x0,
    EOptionCameraYaw_MAX = 0x3,
};

