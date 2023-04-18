#pragma once
#include "CoreMinimal.h"
#include "ETargetCameraTrace.generated.h"

UENUM(BlueprintType)
enum class ETargetCameraTrace : uint8 {
    On,
    Off,
    Num,
    Default = 0x1,
    ETargetCameraTrace_MAX = 0x3,
};

