#pragma once
#include "CoreMinimal.h"
#include "EUIInputButton.generated.h"

UENUM(BlueprintType)
enum class EUIInputButton : uint8 {
    L_Up,
    L_Down,
    L_Left,
    L_Right,
    R_Up,
    R_Down,
    R_Left,
    R_Right,
    L1,
    R1,
    L2,
    R2,
    L3,
    R3,
    Start,
    Select,
    Up,
    Down,
    Left,
    Right,
    PadUp,
    PadDown,
    PadLeft,
    PadRight,
    Decide,
    Cancel,
    MouseL,
    MouseR,
    MouseM,
    MouseWUp,
    MouseWDown,
    Num,
};

