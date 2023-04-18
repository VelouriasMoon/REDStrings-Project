#pragma once
#include "CoreMinimal.h"
#include "EItemTradeAction.generated.h"

UENUM(BlueprintType)
enum class EItemTradeAction : uint8 {
    None,
    L1,
    R1,
    Equipment,
    EnemyBooks,
    End = 0x6,
};

