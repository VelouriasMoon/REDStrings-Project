#pragma once
#include "CoreMinimal.h"
#include "EWaitPhaseMotionFrameType.generated.h"

UENUM(BlueprintType)
enum class EWaitPhaseMotionFrameType : uint8 {
    None,
    Start,
    Wait,
};

