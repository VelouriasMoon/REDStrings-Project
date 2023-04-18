#pragma once
#include "CoreMinimal.h"
#include "EDisplayedFlagOnTimming.generated.h"

UENUM(BlueprintType)
enum class EDisplayedFlagOnTimming : uint8 {
    BeginedDisplay,
    AfterDisplayed,
};

