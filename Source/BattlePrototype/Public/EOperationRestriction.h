#pragma once
#include "CoreMinimal.h"
#include "EOperationRestriction.generated.h"

UENUM(BlueprintType)
enum class EOperationRestriction : uint8 {
    NotOpenMainMenu,
    NotOpenDetailMap,
    NotOpenWorldMap,
    NotUseBattleItem,
    NotUseSAS,
    NotUseBraincrash,
    NotUseBrainField,
    NotUseDrive,
    NotOpenPartyMenu,
    MaxNum = 0x80,
};

