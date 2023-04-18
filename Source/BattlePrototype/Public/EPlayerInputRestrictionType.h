#pragma once
#include "CoreMinimal.h"
#include "EPlayerInputRestrictionType.generated.h"

UENUM(BlueprintType)
enum class EPlayerInputRestrictionType : uint8 {
    NoBattle,
    OnlyWalk,
    DisableInput,
    EventDisableInput,
    EventMove,
    BrainFieldWarning,
    BrainFieldTimeUp,
    BattleEm1500,
    EventState,
    ChildYuito,
};

