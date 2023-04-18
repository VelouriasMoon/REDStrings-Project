#pragma once
#include "CoreMinimal.h"
#include "ESimpleControllerForceFeedbackDirectionType.generated.h"

UENUM(BlueprintType)
enum class ESimpleControllerForceFeedbackDirectionType : uint8 {
    CARTESIAN,
    POLAR,
    SPHERICAL,
};

