#pragma once
#include "CoreMinimal.h"
#include "EPlayerNeonNotifyType.generated.h"

UENUM(BlueprintType)
enum class EPlayerNeonNotifyType : uint8 {
    DriveMax,
    Dying,
    ActionFailed,
};

