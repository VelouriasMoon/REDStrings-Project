#pragma once
#include "CoreMinimal.h"
#include "HDamageEffectType.generated.h"

UENUM(BlueprintType)
enum class HDamageEffectType : uint8 {
    Default,
    Slash,
    Armor,
    OutRange,
    Invincible,
    Weak,
    Human,
    HumanOutRange,
    Penetrate,
    NoEffect,
    Water,
    Ice,
    IceOutRange,
    Max,
};

