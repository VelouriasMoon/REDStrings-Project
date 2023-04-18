#pragma once
#include "CoreMinimal.h"
#include "ShowDestinationCheckType.generated.h"

UENUM(BlueprintType)
enum class ShowDestinationCheckType : uint8 {
    ScenarioFlag,
    ProgressID,
    BondsEPProgressID,
    NoCheck,
};

