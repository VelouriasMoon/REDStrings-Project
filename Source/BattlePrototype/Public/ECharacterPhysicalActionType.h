#pragma once
#include "CoreMinimal.h"
#include "ECharacterPhysicalActionType.generated.h"

UENUM(BlueprintType)
enum class ECharacterPhysicalActionType : uint8 {
    Walk,
    Run,
    Dash,
    Leap,
    Jump,
    Rub,
    Landing,
    Down,
    Sliding,
    Hand,
    Knee,
    Weapon,
    Utility01,
    Utility02,
    Utility03,
    MAX,
};

