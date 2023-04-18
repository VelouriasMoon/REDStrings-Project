#pragma once
#include "CoreMinimal.h"
#include "EItemRarity.generated.h"

UENUM(BlueprintType)
enum class EItemRarity : uint8 {
    Invalid,
    None,
    Common,
    Rare,
    Epic,
    Legendary,
    BrainCrash,
    Num,
};

