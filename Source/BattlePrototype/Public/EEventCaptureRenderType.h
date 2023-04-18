#pragma once
#include "CoreMinimal.h"
#include "EEventCaptureRenderType.generated.h"

UENUM(BlueprintType)
enum class EEventCaptureRenderType : uint8 {
    Default,
    HighRes,
    ManyCaptureTAA,
    HighResManyCapture,
};

