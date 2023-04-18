#pragma once
#include "CoreMinimal.h"
#include "EPsychicObjectAttackType.generated.h"

UENUM(BlueprintType)
enum class EPsychicObjectAttackType : uint8 {
    Throw,
    Drop,
    Swing,
    ThrowAll,
    Boomerang,
    Scissors,
    Chipsaw,
    Firearm,
    Scales,
    Shield,
    VendingMachine,
    Max,
};

