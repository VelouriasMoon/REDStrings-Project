#pragma once
#include "CoreMinimal.h"
#include "EChangeableControllerDefaultKeys.generated.h"

UENUM(BlueprintType)
enum class EChangeableControllerDefaultKeys : uint8 {
    Invalid,
    weaponAttackDefault = 0x8,
    jumpDefault = 0x7,
    psychicDefault = 0x1,
    psychicSpecialDefault = 0x4,
    combiVisionMenuOpenDefault = 0x3,
    sasMenuOpenCloseDefault = 0x0,
    stepDashDefault = 0x9,
    weaponAttackSubDefault = 0x6,
    sasChangeDefault = 0x32,
};

