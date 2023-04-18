#pragma once
#include "CoreMinimal.h"
#include "EPsychicObjectProcedure.generated.h"

UENUM(BlueprintType)
enum class EPsychicObjectProcedure : uint8 {
    None,
    Capture,
    PullOut,
    LiftUp,
    Attract,
    Attack,
    Input,
    Destroy,
    Max,
};

