#pragma once
#include "CoreMinimal.h"
#include "EUiSceneMapIconType.generated.h"

UENUM(BlueprintType)
enum class EUiSceneMapIconType : uint8 {
    Invalid,
    AreaChange,
    TreasureBox,
    MaterialPoint,
    SavePoint,
    Shop,
    MapGimmick,
    TownNPC,
    WorldmapChange,
    Num,
};

