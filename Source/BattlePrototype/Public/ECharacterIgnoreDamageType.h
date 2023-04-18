#pragma once
#include "CoreMinimal.h"
#include "ECharacterIgnoreDamageType.generated.h"

UENUM(BlueprintType)
enum class ECharacterIgnoreDamageType : uint8 {
    Nothing,
    Damage,
    Reaction,
    BadState,
};

