#pragma once
#include "CoreMinimal.h"
#include "ERSGamepadLayoutType.generated.h"

UENUM(BlueprintType)
enum class ERSGamepadLayoutType : uint8 {
    RAW,
    UI,
    BATTLE,
    BATTLE_EVENT,
    LAST_INDEX,
};

