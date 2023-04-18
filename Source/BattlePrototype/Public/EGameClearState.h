#pragma once
#include "CoreMinimal.h"
#include "EGameClearState.generated.h"

UENUM(BlueprintType)
enum class EGameClearState : uint8 {
    NotClearBoth,
    ClearMale,
    ClearFemale,
    ClearBoth,
};

