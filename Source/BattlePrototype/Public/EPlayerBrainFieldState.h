#pragma once
#include "CoreMinimal.h"
#include "EPlayerBrainFieldState.generated.h"

UENUM(BlueprintType)
enum class EPlayerBrainFieldState : uint8 {
    PlayAble,
    WarningWait,
    Warning,
    TimeUpWait,
    TimeUp,
    Help,
    GameOverWait,
    GameOver,
    End,
};

