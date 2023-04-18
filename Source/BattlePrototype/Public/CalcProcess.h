#pragma once
#include "CoreMinimal.h"
#include "CalcProcess.generated.h"

UENUM(BlueprintType)
enum class CalcProcess : uint8 {
    None,
    Ready,
    Start,
    PreClean,
    PreWait,
    PreMeasure,
    CreateObject,
    WaitContinue,
    PostMeasure,
    DestroyObject,
    PostClean,
    FinishOne,
    Term,
};

