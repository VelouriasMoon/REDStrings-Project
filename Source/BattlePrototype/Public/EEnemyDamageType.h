#pragma once
#include "CoreMinimal.h"
#include "EEnemyDamageType.generated.h"

UENUM(BlueprintType)
enum class EEnemyDamageType : uint8 {
    Wince,
    KnockBack,
    Launch,
    Down,
};

