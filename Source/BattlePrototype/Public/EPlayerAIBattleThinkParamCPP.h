#pragma once
#include "CoreMinimal.h"
#include "EPlayerAIBattleThinkParamCPP.generated.h"

UENUM(BlueprintType)
enum class EPlayerAIBattleThinkParamCPP : uint8 {
    None,
    Near,
    Middle,
    Far,
    Move,
    RotateToTarget,
};

