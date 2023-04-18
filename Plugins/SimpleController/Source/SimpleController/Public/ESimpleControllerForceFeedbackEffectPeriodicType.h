#pragma once
#include "CoreMinimal.h"
#include "ESimpleControllerForceFeedbackEffectPeriodicType.generated.h"

UENUM(BlueprintType)
enum class ESimpleControllerForceFeedbackEffectPeriodicType : uint8 {
    SINE,
    TRIANGLE,
    SAWTOOTHUP,
    SAWTOOTHDOWN,
};

