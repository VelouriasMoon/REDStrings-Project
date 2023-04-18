#pragma once
#include "CoreMinimal.h"
#include "EBgmCategory.generated.h"

UENUM(BlueprintType)
enum class EBgmCategory : uint8 {
    Stage,
    Boss,
    Event,
    BrainField,
    Shop,
    BgmCategoryMax,
};

