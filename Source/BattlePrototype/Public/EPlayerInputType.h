#pragma once
#include "CoreMinimal.h"
#include "EPlayerInputType.generated.h"

UENUM(BlueprintType)
enum class EPlayerInputType : uint8 {
    Default,
    Keyboard,
    Mouse,
    Test,
    Invalid,
};

