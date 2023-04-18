#pragma once
#include "CoreMinimal.h"
#include "EPlatFormConsoleType.generated.h"

UENUM(BlueprintType)
enum class EPlatFormConsoleType : uint8 {
    Invalid,
    Steam,
    PS4,
    PS4Pro,
    PS5,
    XboxOne,
    XboxOneS,
    XboxOneX,
    XSXAnaconda,
    XSXLockhart,
    Num,
};

