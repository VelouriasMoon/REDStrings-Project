#pragma once
#include "CoreMinimal.h"
#include "EAttackDirOrtho.generated.h"

UENUM(BlueprintType)
enum class EAttackDirOrtho : uint8 {
    On,
    Off,
    Num,
    Default = 0x0,
    EAttackDirOrtho_MAX = 0x3,
};

