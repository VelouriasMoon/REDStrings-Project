#pragma once
#include "CoreMinimal.h"
#include "ECurveParamType.generated.h"

UENUM(BlueprintType)
enum class ECurveParamType : uint8 {
    None,
    AlphaFade,
    CrossFade,
    ScaleU,
    ScaleV,
    OffsetU,
    OffsetV,
    Rotation,
};

