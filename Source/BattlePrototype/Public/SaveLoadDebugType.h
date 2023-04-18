#pragma once
#include "CoreMinimal.h"
#include "SaveLoadDebugType.generated.h"

UENUM(BlueprintType)
enum class SaveLoadDebugType : uint8 {
    NormalMode,
    BreakMode,
    ClearKasaneMode,
    ClearYuitoMode,
    ClearYuitoKasaneMode,
    ClearDataMode,
    ClearExMode,
    ClearEndContentMode,
};

