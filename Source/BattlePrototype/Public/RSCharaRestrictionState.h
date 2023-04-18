#pragma once
#include "CoreMinimal.h"
#include "RSCharaRestrictionState.generated.h"

UENUM(BlueprintType)
enum class RSCharaRestrictionState : uint8 {
    Normal,
    Restricted,
    Blessed,
    NumOfEnum,
};

