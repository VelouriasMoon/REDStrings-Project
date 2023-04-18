#pragma once
#include "CoreMinimal.h"
#include "ESimpleControllerDirectionalPad.generated.h"

UENUM(BlueprintType)
enum class ESimpleControllerDirectionalPad : uint8 {
    CENTERED,
    UP,
    RIGHT,
    DOWN,
    LEFT,
    RIGHTUP,
    RIGHTDOWN,
    LEFTUP,
    LEFTDOWN,
};

