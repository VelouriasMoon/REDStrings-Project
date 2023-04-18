#pragma once
#include "CoreMinimal.h"
#include "ESoundState.generated.h"

UENUM(BlueprintType)
enum class ESoundState : uint8 {
    Stage,
    Menu,
    Title,
    GameOver,
    Revitalizetion,
    Loading,
    Map,
    StaffRoll,
    SoundStateMax,
};

