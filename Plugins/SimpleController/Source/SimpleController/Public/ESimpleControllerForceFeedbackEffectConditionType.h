#pragma once
#include "CoreMinimal.h"
#include "ESimpleControllerForceFeedbackEffectConditionType.generated.h"

UENUM(BlueprintType)
enum class ESimpleControllerForceFeedbackEffectConditionType : uint8 {
    SPRING,
    DAMPER,
    INERTIA,
    FRICTION,
};

