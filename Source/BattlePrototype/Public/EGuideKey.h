#pragma once
#include "CoreMinimal.h"
#include "EGuideKey.generated.h"

UENUM(BlueprintType)
enum class EGuideKey : uint8 {
    Invalid,
    DECIDE,
    CANCEL,
    CROSS,
    CIRCLE,
    SQUARE,
    TRIANGLE,
    L1,
    R1,
    L2,
    R2,
    L3,
    R3,
    ARROW,
    UP,
    DOWN,
    LEFT,
    RIGHT,
    UP_DOWN,
    LEFT_RIGHT,
    L_STICK,
    L_STICK_UP,
    L_STICK_DOWN,
    L_STICK_LEFT,
    L_STICK_RIGHT,
    L_STICK_UP_DOWN,
    L_STICK_LEFT_RIGHT,
    R_STICK,
    R_STICK_UP,
    R_STICK_DOWN,
    R_STICK_LEFT,
    R_STICK_RIGHT,
    R_STICK_UP_DOWN,
    R_STICK_LEFT_RIGHT,
    OPTION,
    TOUCH_PAD,
};

