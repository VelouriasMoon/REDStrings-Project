#pragma once
#include "CoreMinimal.h"
#include "ERSGamepadType.generated.h"

UENUM(BlueprintType)
enum class ERSGamepadType : uint8 {
    BUTTON,
    STICK,
    WHEEL,
    LAST_INDEX,
};

