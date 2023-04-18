#pragma once
#include "CoreMinimal.h"
#include "EOptionAAQuality.generated.h"

UENUM(BlueprintType)
enum class EOptionAAQuality : uint8 {
    None,
    FXAA,
    TXAA,
    Num,
    Default = 0x2,
    EOptionAAQuality_MAX = 0x4,
};

