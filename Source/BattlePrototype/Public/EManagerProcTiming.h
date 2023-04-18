#pragma once
#include "CoreMinimal.h"
#include "EManagerProcTiming.generated.h"

UENUM(BlueprintType)
enum class EManagerProcTiming : uint8 {
    Launch,
    StartLogo,
    FinishLogo,
    StartTitle,
    FinishTitle,
    StartIngame,
    FinishIngame,
    StartDebug,
    FinishDebug,
    StartPersistentLevel,
    Num,
};

