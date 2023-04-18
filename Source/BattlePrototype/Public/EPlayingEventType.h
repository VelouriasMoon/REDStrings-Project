#pragma once
#include "CoreMinimal.h"
#include "EPlayingEventType.generated.h"

UENUM(BlueprintType)
enum class EPlayingEventType : uint8 {
    Main,
    Bonds,
    TeamBonds,
    StandBy,
    DLCBonds,
    EventType,
};

