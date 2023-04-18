#pragma once
#include "CoreMinimal.h"
#include "ELetterSize.generated.h"

UENUM(BlueprintType)
enum class ELetterSize : uint8 {
    Normal,
    Expsnsion,
    Num,
    Default = 0x0,
    ELetterSize_MAX = 0x3,
};

