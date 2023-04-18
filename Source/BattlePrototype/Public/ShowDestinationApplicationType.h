#pragma once
#include "CoreMinimal.h"
#include "ShowDestinationApplicationType.generated.h"

UENUM(BlueprintType)
enum class ShowDestinationApplicationType : uint8 {
    All,
    WorldMapOnly,
    WithoutWorldMap,
};

