#pragma once
#include "CoreMinimal.h"
#include "EAssassinAttackHit.generated.h"

UENUM(BlueprintType)
enum class EAssassinAttackHit : uint8 {
    Invalid,
    EffectiveLV0,
    EffectiveLV1,
    EffectiveLV2,
    EffectiveLV3,
};

