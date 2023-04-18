#pragma once
#include "CoreMinimal.h"
#include "ESpecialDamageParticleType.generated.h"

UENUM(BlueprintType)
enum class ESpecialDamageParticleType : uint8 {
    None,
    PlayerNormal,
    PlayerObject,
    EnemyNormal,
    EnemyObject,
    Num,
};

