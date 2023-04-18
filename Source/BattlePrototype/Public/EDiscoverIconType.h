#pragma once
#include "CoreMinimal.h"
#include "EDiscoverIconType.generated.h"

UENUM(BlueprintType)
enum class EDiscoverIconType : uint8 {
    Invalid,
    Surprised,
    Question,
    DiscoverAwareness,
    DiscoverOver,
};

