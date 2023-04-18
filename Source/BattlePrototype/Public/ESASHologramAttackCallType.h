#pragma once
#include "CoreMinimal.h"
#include "ESASHologramAttackCallType.generated.h"

UENUM(BlueprintType)
enum class ESASHologramAttackCallType : uint8 {
    BadStatusFlooded,
    FloodedDamageReaction,
    BadStatusOil,
    OilDamageReaction,
    DamageReactionL,
    DamageReactionDown,
    DriveHologramRush,
};

