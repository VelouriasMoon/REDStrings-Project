#pragma once
#include "CoreMinimal.h"
#include "EGradualQuality.generated.h"

UENUM(BlueprintType)
enum class EGradualQuality : uint8 {
    Low,
    Medium,
    High,
    Num,
    Default = 0x2,
    DefaultTextureQuality = 0x2,
    DefaultShadowQuality = 0x2,
    DefaultPosproQuality = 0x2,
    EGradualQuality_MAX = 0x4,
};

