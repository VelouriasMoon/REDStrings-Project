#pragma once
#include "CoreMinimal.h"
#include "EUIMapIconNative.generated.h"

UENUM(BlueprintType)
enum class EUIMapIconNative : uint8 {
    Player,
    Enemy,
    Footprint,
    TreasureClose,
    TreasureOpen,
    AreaChange,
    MainQuest,
    SubQuest,
    SubQuestActive,
    SubQuestComplete,
    SubQuestCompleteActive,
    CameraDirection,
    PlayerDirection,
    NPC,
    Object,
    SAS,
    Shop,
    PickActive,
    PickDisable,
    SavePoint,
    TownNpc,
    AreaChangeBer,
    BoundsEp,
    Enemy0630,
    AreaPortal,
    AreaPortalBefore,
    WorldPortal,
    MaxValue = 0x1A,
    Num,
};

