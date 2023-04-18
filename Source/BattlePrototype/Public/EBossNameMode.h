#pragma once
#include "CoreMinimal.h"
#include "EBossNameMode.generated.h"

UENUM(BlueprintType)
enum class EBossNameMode : uint8 {
    Default,
    FreeTime,
    WaitInput,
};

