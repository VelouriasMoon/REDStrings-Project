#pragma once
#include "CoreMinimal.h"
#include "EPlayerAnimDir.generated.h"

UENUM(BlueprintType)
enum class EPlayerAnimDir : uint8 {
    Forward,
    Backward,
    Left,
    Right,
    ForwardLeft,
    ForwardRight,
    BackwardLeft,
    BackwardRight,
};

