#pragma once
#include "CoreMinimal.h"
#include "ESASCutin.generated.h"

UENUM(BlueprintType)
enum class ESASCutin : uint8 {
    On,
    Off,
    Num,
    Default = 0x0,
    ESASCutin_MAX = 0x3,
};

