#pragma once
#include "CoreMinimal.h"
#include "E_SASKindNative.generated.h"

UENUM(BlueprintType)
enum class E_SASKindNative : uint8 {
    Fire,
    Metal,
    SeeThrough,
    Telepo,
    Stealth,
    Electric,
    Copy,
    Accelerator,
    Psychic_ch0100,
    Psychic_ch0200,
    Invalid,
    Num,
    ValidNum = 0xA,
    E_MAX = 0xC,
};

