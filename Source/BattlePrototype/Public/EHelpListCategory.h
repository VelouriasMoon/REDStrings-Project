#pragma once
#include "CoreMinimal.h"
#include "EHelpListCategory.generated.h"

UENUM(BlueprintType)
enum class EHelpListCategory : uint8 {
    Battle,
    System,
    Num,
    All = 0x2,
};

