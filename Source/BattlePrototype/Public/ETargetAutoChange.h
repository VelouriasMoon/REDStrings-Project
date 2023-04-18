#pragma once
#include "CoreMinimal.h"
#include "ETargetAutoChange.generated.h"

UENUM(BlueprintType)
enum class ETargetAutoChange : uint8 {
    On,
    Off,
    Num,
    Default = 0x0,
    ETargetAutoChange_MAX = 0x3,
};

