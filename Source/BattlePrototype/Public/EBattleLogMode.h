#pragma once
#include "CoreMinimal.h"
#include "EBattleLogMode.generated.h"

UENUM(BlueprintType)
enum class EBattleLogMode : uint8 {
    NoRecord,
    Battle,
    BattleField,
};

