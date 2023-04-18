#pragma once
#include "CoreMinimal.h"
#include "ESubMenuType.generated.h"

UENUM(BlueprintType)
enum class ESubMenuType : uint8 {
    None,
    PartyMenu,
    MapDetail,
    ShopBuy,
    ShopSell,
    ShopTrade,
    MapWorld,
    SaveMenu,
    LoadMenu,
    WeaponMenu,
    EnemyBooks,
    Present,
    PresentCheck,
    BrainMessage,
    SystemOrChoice,
    VisionSimulatorSelect,
    PhotoMode,
};

