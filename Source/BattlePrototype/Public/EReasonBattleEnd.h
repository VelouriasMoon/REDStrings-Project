#pragma once
#include "CoreMinimal.h"
#include "EReasonBattleEnd.generated.h"

UENUM(BlueprintType)
enum class EReasonBattleEnd : uint8 {
    Other,
    Dead,
    DeadByPlayer,
    Lost,
    StealthLost,
};

