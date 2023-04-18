#pragma once
#include "CoreMinimal.h"
#include "EPlayerAIMoveWallCPP.generated.h"

UENUM(BlueprintType)
enum class EPlayerAIMoveWallCPP : uint8 {
    None,
    Wall,
    Step,
    DetourLeft,
    DetourRight,
    DetourLeftShort,
    DetourRightShort,
};

