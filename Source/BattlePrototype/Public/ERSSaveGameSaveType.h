#pragma once
#include "CoreMinimal.h"
#include "ERSSaveGameSaveType.generated.h"

UENUM(BlueprintType)
enum class ERSSaveGameSaveType : uint8 {
    Invalid,
    Normal,
    NormalOnly,
    Auto,
    System,
    RetryData,
    AsyncAutoSaveData,
    AsyncSystem,
    Normal_Header_Xbox,
    Normal_Xbox,
    NormalOnly_Xbox,
    Debug,
    DebugTime,
    TrialSystem,
    Trial2_System,
    Trial2_Normal,
    Trial2_Auto,
    Trial2_Normal_Header_Xbox,
    Trial2_Normal_Xbox,
    Num,
};

