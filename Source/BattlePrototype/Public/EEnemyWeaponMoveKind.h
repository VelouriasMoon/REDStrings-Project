#pragma once
#include "CoreMinimal.h"
#include "EEnemyWeaponMoveKind.generated.h"

UENUM(BlueprintType)
enum class EEnemyWeaponMoveKind : uint8 {
    Invalid,
    Curve,
    Common,
    Projectile,
    Gravity,
    Custom,
    Horming,
    Intercept,
};

