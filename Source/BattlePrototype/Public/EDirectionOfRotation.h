#pragma once
#include "CoreMinimal.h"
#include "EDirectionOfRotation.generated.h"

UENUM(BlueprintType)
enum class EDirectionOfRotation : uint8 {
    None,
    Right,
    Left,
    NumOfEnum,
};

