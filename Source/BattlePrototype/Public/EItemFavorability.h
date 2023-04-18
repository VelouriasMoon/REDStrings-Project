#pragma once
#include "CoreMinimal.h"
#include "EItemFavorability.generated.h"

UENUM(BlueprintType)
enum class EItemFavorability : uint8 {
    Normal,
    Likely,
    Lovely,
    VeryLovely,
    Num,
};

