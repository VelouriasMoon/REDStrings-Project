#pragma once
#include "CoreMinimal.h"
#include "EStaticPlType.generated.h"

UENUM(BlueprintType)
enum class EStaticPlType : uint8 {
    None,
    MovieTexture,
    BrainTalk,
    Telepathy,
    Naomi,
    Image,
    NoRandomPlSet,
    ChangeBackGroundPl,
    BloodDecalPl,
    WireOffPl,
    WireOnPl,
};

