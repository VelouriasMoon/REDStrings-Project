#pragma once
#include "CoreMinimal.h"
#include "EPlayerCameraTraceType.generated.h"

UENUM(BlueprintType)
enum class EPlayerCameraTraceType : uint8 {
    Up1,
    Up2,
    Dn1,
    Dn2,
    Rt1,
    Rt2,
    Lt1,
    Lt2,
    Max,
};

