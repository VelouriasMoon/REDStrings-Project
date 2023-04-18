#pragma once
#include "CoreMinimal.h"
#include "EBrainMesSortType.generated.h"

UENUM(BlueprintType)
enum class EBrainMesSortType : uint8 {
    newArraival,
    oldOrder,
    Unreplied,
};

