#pragma once
#include "CoreMinimal.h"
#include "ESASActionIconType.generated.h"

UENUM(BlueprintType)
enum class ESASActionIconType : uint8 {
    None,
    Fire,
    Stealth,
    Electric,
    Accelerate,
    Teleport,
    Unusable,
};

