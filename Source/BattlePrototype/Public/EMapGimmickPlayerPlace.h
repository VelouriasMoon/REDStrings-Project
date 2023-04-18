#pragma once
#include "CoreMinimal.h"
#include "EMapGimmickPlayerPlace.generated.h"

UENUM(BlueprintType)
enum class EMapGimmickPlayerPlace : uint8 {
    MG_PLAYER_PLACE_DEFAULT,
    MG_PLAYER_PLACE_UP = 0x0,
    MG_PLAYER_PLACE_DOWN,
    Num,
};

