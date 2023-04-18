#pragma once
#include "CoreMinimal.h"
#include "ETitleSaveCheck.generated.h"

UENUM(BlueprintType)
enum class ETitleSaveCheck : uint8 {
    SaveData,
    AutoSave,
    SystemSave,
};

