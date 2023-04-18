#pragma once
#include "CoreMinimal.h"
#include "SaveLoadListType.generated.h"

UENUM(BlueprintType)
enum class SaveLoadListType : uint8 {
    NoData,
    BreakData,
    ClearData,
    Data,
};

