#pragma once
#include "CoreMinimal.h"
#include "EEffectConnectPoint.generated.h"

UENUM(BlueprintType)
enum class EEffectConnectPoint : uint8 {
    Owner,
    Pos,
    Weapon0,
    Weapon1,
    ThrowWeapon,
};

