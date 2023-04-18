#pragma once
#include "CoreMinimal.h"
#include "EBTLoadAsyncFlow.generated.h"

UENUM(BlueprintType)
enum class EBTLoadAsyncFlow : uint8 {
    Stanby,
    PreWork,
    TaskStart,
    TaskFinishWait,
};

