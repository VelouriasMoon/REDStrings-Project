#pragma once
#include "CoreMinimal.h"
#include "PsychicBattleAnimationPhaseType.generated.h"

UENUM(BlueprintType)
enum class PsychicBattleAnimationPhaseType : uint8 {
    Invalid,
    Start,
    Win,
    Lose,
    WinToLose,
    LoseToWin,
    NumOfEnum,
};

