#pragma once
#include "CoreMinimal.h"
#include "ETitleLevelFlow.generated.h"

UENUM(BlueprintType)
enum class ETitleLevelFlow : uint8 {
    SaveDataPreLoad,
    SaveDataPreLoadCheck,
    AutoSaveDataPreLoad,
    AutoSaveDataPreLoadCheck,
    Initialize,
    FirstFlow,
    TitleMenu,
    EndingFlow,
};

