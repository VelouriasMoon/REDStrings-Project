#pragma once
#include "CoreMinimal.h"
#include "ShowDestinationBoolCheckType.generated.h"

UENUM(BlueprintType)
enum class ShowDestinationBoolCheckType : uint8 {
    None,
    Or,
    And,
    FirstCheck,
};

