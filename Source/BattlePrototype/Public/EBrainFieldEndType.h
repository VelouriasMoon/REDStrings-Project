#pragma once
#include "CoreMinimal.h"
#include "EBrainFieldEndType.generated.h"

UENUM(BlueprintType)
enum class EBrainFieldEndType : uint8 {
    Normal,
    ReceiveBrainCrash,
    EnemyBrainField,
    GameOver,
    ReceiveBrainCrash_Override,
    Revive,
    Max,
};

