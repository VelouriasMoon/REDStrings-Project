#pragma once
#include "CoreMinimal.h"
#include "EPsychicObjectState.generated.h"

UENUM(BlueprintType)
enum class EPsychicObjectState : uint8 {
    None,
    Wait,
    Capturing,
    Capture,
    PullOut,
    Attracting,
    Attract,
    Attack,
    Input,
    Max,
};

