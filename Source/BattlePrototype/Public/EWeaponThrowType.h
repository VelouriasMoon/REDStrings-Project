#pragma once
#include "CoreMinimal.h"
#include "EWeaponThrowType.generated.h"

UENUM(BlueprintType)
enum class EWeaponThrowType : uint8 {
    ToPoint,
    ToTarget,
};

