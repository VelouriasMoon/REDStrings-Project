#pragma once
#include "CoreMinimal.h"
#include "EDiscoverType.generated.h"

UENUM(BlueprintType)
enum class EDiscoverType : uint8 {
    Invalid,
    Discover,
    UnDiscoverAwareness,
    UnDiscoverOver,
    UnDiscover,
};

