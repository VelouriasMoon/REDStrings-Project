#pragma once
#include "CoreMinimal.h"
#include "ETouchControlLayout.generated.h"

UENUM(BlueprintType)
enum class ETouchControlLayout : uint8 {
    Hide,
    Default,
    BattleXA,
    BattleXAn,
    BattleYB,
    BattleYBn,
    BattleXY,
    BattleXYn,
    BattleAB,
    BattleABn,
    BattleXB,
    BattleXBn,
    BattleYA,
    BattleYAn,
    Field,
    Menu,
    Event,
    EventNonSkip,
    Talk,
    CutScene,
    Pause,
    SysMes,
    Tips,
    Map,
    WMap,
    VSResult,
    VSSelect,
    PhotoMode,
    PhotoModeEvent,
};

