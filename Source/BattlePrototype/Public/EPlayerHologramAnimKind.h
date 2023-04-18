#pragma once
#include "CoreMinimal.h"
#include "EPlayerHologramAnimKind.generated.h"

UENUM(BlueprintType)
enum class EPlayerHologramAnimKind : uint8 {
    Invalid,
    CoverDamage,
    CoverDamageAerial,
};

