#pragma once
#include "CoreMinimal.h"
#include "EAttackDirOrthoLockon.generated.h"

UENUM(BlueprintType)
enum class EAttackDirOrthoLockon : uint8 {
    On,
    Off,
    Num,
    Default = 0x0,
    EAttackDirOrthoLockon_MAX = 0x3,
};

