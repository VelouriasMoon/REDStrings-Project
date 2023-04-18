#pragma once
#include "CoreMinimal.h"
#include "EPsychicObjectCategory.generated.h"

UENUM(BlueprintType)
enum class EPsychicObjectCategory : uint8 {
    Normal,
    Unique,
    Huge,
    Max,
};

