#pragma once
#include "CoreMinimal.h"
#include "ESASHologramAttackTiming.generated.h"

UENUM(BlueprintType)
enum class ESASHologramAttackTiming : uint8 {
    BadStatusOil,
    BadStatusFlooded,
    DamageReactionL,
    Down,
    DriveHologramRush,
    PluginManual,
    Invalid,
};

