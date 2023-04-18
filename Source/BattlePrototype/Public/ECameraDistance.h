#pragma once
#include "CoreMinimal.h"
#include "ECameraDistance.generated.h"

UENUM(BlueprintType)
enum class ECameraDistance : uint8 {
    Near,
    Normal,
    Far,
    Num,
    Default = 0x1,
    ECameraDistance_MAX = 0x4,
};

