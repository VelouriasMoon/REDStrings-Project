#pragma once
#include "CoreMinimal.h"
#include "HCHitEffectType.generated.h"

UENUM(BlueprintType)
enum class HCHitEffectType : uint8 {
    Default,
    Slashed,
    NoEffect,
};

