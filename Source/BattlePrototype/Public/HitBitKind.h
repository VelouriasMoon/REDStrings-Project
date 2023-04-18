#pragma once
#include "CoreMinimal.h"
#include "HitBitKind.generated.h"

UENUM(BlueprintType)
enum class HitBitKind : uint8 {
    None,
    Character,
    Flames,
    Destroy = 0x4,
};

