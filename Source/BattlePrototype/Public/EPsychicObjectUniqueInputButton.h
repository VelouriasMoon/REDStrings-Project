#pragma once
#include "CoreMinimal.h"
#include "EPsychicObjectUniqueInputButton.generated.h"

UENUM(BlueprintType)
enum class EPsychicObjectUniqueInputButton : uint8 {
    LeftStick,
    RightStick,
    L1,
    L2,
    R1,
    R2,
    RUp,
    RDown,
    RLeft,
    RRight,
    LeftStickHold,
    RightStickHold,
    Max,
};

