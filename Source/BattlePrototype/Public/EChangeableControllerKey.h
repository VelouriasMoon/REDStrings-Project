#pragma once
#include "CoreMinimal.h"
#include "EChangeableControllerKey.generated.h"

UENUM(BlueprintType)
enum class EChangeableControllerKey : uint8 {
    weaponAttack,
    jump,
    psychic,
    psychicSpecial,
    combiVisionMenuOpen,
    sasMenuOpenClose,
    stepDash,
    weaponAttackSub,
    sasChange,
    Num,
    Default = 0x0,
    EChangeableControllerKey_MAX = 0xA,
};

