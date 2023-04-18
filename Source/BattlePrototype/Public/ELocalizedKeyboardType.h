#pragma once
#include "CoreMinimal.h"
#include "ELocalizedKeyboardType.generated.h"

UENUM(BlueprintType)
enum class ELocalizedKeyboardType : uint8 {
    QWERTY,
    AZERTY,
    QWERTZ,
    QWERTY_J,
    Num,
};

