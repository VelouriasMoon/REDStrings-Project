#pragma once
#include "CoreMinimal.h"
#include "HCGameDifficulty.generated.h"

UENUM(BlueprintType)
enum class HCGameDifficulty : uint8 {
    Easy,
    Normal,
    Hard,
    VeryHard,
    VeryEasy,
    Num,
    Default = 0x1,
    HCGameDifficulty_MAX = 0x6,
};

