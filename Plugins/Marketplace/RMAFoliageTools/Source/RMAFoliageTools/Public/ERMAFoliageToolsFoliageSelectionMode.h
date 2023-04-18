#pragma once
#include "CoreMinimal.h"
#include "ERMAFoliageToolsFoliageSelectionMode.generated.h"

UENUM(BlueprintType)
enum class ERMAFoliageToolsFoliageSelectionMode : uint8 {
    FTFSM_All,
    FTFSM_Selection,
    FTFSM_MAX UMETA(Hidden),
};

