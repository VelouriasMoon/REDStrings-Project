#pragma once
#include "CoreMinimal.h"
#include "HCDamageKind.generated.h"

UENUM(BlueprintType)
enum class HCDamageKind : uint8 {
    DamageLight,
    DamageHeavy,
};

