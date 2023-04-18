#pragma once
#include "CoreMinimal.h"
#include "EContentsOpening.generated.h"

UENUM(BlueprintType)
enum class EContentsOpening : uint8 {
    Invalid,
    BattleItem,
    SAS,
    Braincrash,
    BrainField,
    BrainFieldClose,
    Drive,
    SASMenu,
    BrainMapMenu,
    BrainMessageSubTab,
    WishListSubTab,
    MainMenu,
    WorldMap,
    DetailMap,
    Psychic,
    WeaponAttack,
    PsychicCombo,
    PsychicToWeaponAttack,
    ItemTrade,
    SubquestSubTab,
    BondsEpisodeSubTab,
    TeamBondLevel,
    Present,
    MaxNum = 0x80,
};

