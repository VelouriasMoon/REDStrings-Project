#pragma once
#include "CoreMinimal.h"
#include "EMapGimmickStatusFunc.generated.h"

UENUM(BlueprintType)
enum class EMapGimmickStatusFunc : uint8 {
    MGSTATUS_STATE_BEGIN,
    MGSTATUS_TICK,
    MGSTATUS_STATE_END,
    MGSTATUS_ON_REQUEST_CANCEL,
    Num,
};

