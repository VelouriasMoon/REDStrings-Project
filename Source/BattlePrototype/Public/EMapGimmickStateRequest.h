#pragma once
#include "CoreMinimal.h"
#include "EMapGimmickStateRequest.generated.h"

UENUM(BlueprintType)
enum class EMapGimmickStateRequest : uint8 {
    MGEVENT_START_CHARGE,
    MGEVENT_CANCEL_CHARGE,
    Num,
};

