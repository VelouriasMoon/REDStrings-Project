#pragma once
#include "CoreMinimal.h"
#include "EEnemyStealthState.generated.h"

UENUM(BlueprintType)
enum class EEnemyStealthState : uint8 {
    Invalid,
    StealthStart,
    InStealth,
    StealthEnd,
};

