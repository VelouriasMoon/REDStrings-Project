#pragma once
#include "CoreMinimal.h"
#include "EBattleEndResult.generated.h"

UENUM(BlueprintType)
enum class EBattleEndResult : uint8 {
    None,
    Win,
    Escape,
    Stealth,
    WinBattleFieldStrong,
    WinBattleFieldSpeedRun,
    WinBattleFieldHorde,
};

