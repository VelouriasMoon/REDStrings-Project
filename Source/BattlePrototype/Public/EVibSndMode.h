#pragma once
#include "CoreMinimal.h"
#include "EVibSndMode.generated.h"

UENUM(BlueprintType)
enum class EVibSndMode : uint8 {
    Normal,
    DirectShot,
    DirectShotForPsyObj,
    Strength,
    MapGimmick,
    BrainCrash,
    BrainField,
    Sequencer,
    UI,
    Location,
    Compatible,
};

