#pragma once
#include "CoreMinimal.h"
#include "ECanBeAddedItems.generated.h"

UENUM(BlueprintType)
enum class ECanBeAddedItems : uint8 {
    CannotBeAdded,
    CanBeAdded,
    Overflow,
};

