#pragma once
#include "CoreMinimal.h"
#include "ESimpleControllerForceFeedbackEffectType.generated.h"

UENUM(BlueprintType)
enum class ESimpleControllerForceFeedbackEffectType : uint8 {
    CONSTANT,
    LEFTRIGHT,
};

