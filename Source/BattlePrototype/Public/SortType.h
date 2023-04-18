#pragma once
#include "CoreMinimal.h"
#include "SortType.generated.h"

UENUM(BlueprintType)
enum class SortType : uint8 {
    stNormal,
    stReverce,
    stActiveTop,
    stCanReport,
    stCleared,
};

