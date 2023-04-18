#pragma once
#include "CoreMinimal.h"
#include "EPsychicObjectUniqueInputType.generated.h"

UENUM(BlueprintType)
enum class EPsychicObjectUniqueInputType : uint8 {
    None,
    Up,
    Down,
    Left,
    Right,
    Press,
    Hold,
    Repeat,
    LRoll,
    RRoll,
    Max,
};

