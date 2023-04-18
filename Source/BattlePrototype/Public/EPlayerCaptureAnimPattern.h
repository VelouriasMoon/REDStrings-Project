#pragma once
#include "CoreMinimal.h"
#include "EPlayerCaptureAnimPattern.generated.h"

UENUM(BlueprintType)
enum class EPlayerCaptureAnimPattern : uint8 {
    StartL_CaptureL_EndR,
    StartL_CaptureL_EndL,
    StartL_CaptureA_EndL,
    StartL_CaptureA_EndR,
    StartL_CaptureR_EndR,
    StartL_CaptureR_EndL,
    StartR_CaptureL_EndL,
    StartR_CaptureL_EndR,
    StartR_CaptureA_EndL,
    StartR_CaptureA_EndR,
    StartR_CaptureR_EndL,
    StartR_CaptureR_EndR,
};

