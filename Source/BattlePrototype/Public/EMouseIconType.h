#pragma once
#include "CoreMinimal.h"
#include "EMouseIconType.generated.h"

UENUM(BlueprintType)
enum class EMouseIconType : uint8 {
    Invalid,
    Move,
    Left,
    Right,
    Center,
    Ex1,
    Ex2,
    Num,
};

