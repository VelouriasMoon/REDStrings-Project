#pragma once
#include "CoreMinimal.h"
#include "ECharacterIgnoreDamage.generated.h"

UENUM(BlueprintType)
enum class ECharacterIgnoreDamage : uint8 {
    Nothing,
    Damage,
    ReactionS,
    ReactionL,
    Down,
    Crash,
    Flame,
    Electric,
    Flooded,
    Oil,
    NoDeath,
};

