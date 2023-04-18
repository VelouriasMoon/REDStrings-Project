#pragma once
#include "CoreMinimal.h"
#include "ECameraAfterMoveType.generated.h"

UENUM(BlueprintType)
enum class ECameraAfterMoveType : uint8 {
    On,
    Off,
    Num,
    Default = 0x1,
    ECameraAfterMoveType_MAX = 0x3,
};

