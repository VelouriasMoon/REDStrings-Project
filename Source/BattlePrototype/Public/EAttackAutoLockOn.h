#pragma once
#include "CoreMinimal.h"
#include "EAttackAutoLockOn.generated.h"

UENUM(BlueprintType)
enum class EAttackAutoLockOn : uint8 {
    On,
    Off,
    Num,
    Default = 0x0,
    EAttackAutoLockOn_MAX = 0x3,
};

