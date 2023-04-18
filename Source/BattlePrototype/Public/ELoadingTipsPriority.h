#pragma once
#include "CoreMinimal.h"
#include "ELoadingTipsPriority.generated.h"

UENUM(BlueprintType)
enum class ELoadingTipsPriority : uint8 {
    Normal,
    High,
};

