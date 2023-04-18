#pragma once
#include "CoreMinimal.h"
#include "EPlayerCameraActionPriority.generated.h"

UENUM(BlueprintType)
enum class EPlayerCameraActionPriority : uint8 {
    Invalid,
    Low,
    Middle,
    High,
    Top,
};

