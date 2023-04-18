#pragma once
#include "CoreMinimal.h"
#include "ERSInputDeviceType.generated.h"

UENUM(BlueprintType)
enum class ERSInputDeviceType : uint8 {
    eNone,
    ePad,
    eKey1,
    eKey2,
    eMouse,
};

