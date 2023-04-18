#pragma once
#include "CoreMinimal.h"
#include "EEm0800EffectType.generated.h"

UENUM(BlueprintType)
enum class EEm0800EffectType : uint8 {
    None,
    GroundWait,
    GroundNotWait,
    Appear,
    Laser,
    GroundDash,
    JumpOutSignNormal,
    JumpOutSignSeeThrough,
};

