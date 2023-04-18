#pragma once
#include "CoreMinimal.h"
#include "EOptionCameraRotateSpeed.generated.h"

UENUM(BlueprintType)
enum class EOptionCameraRotateSpeed : uint8 {
    Invalid,
    Min,
    Max = 0x5,
    Default = 0x4,
};

