#pragma once
#include "CoreMinimal.h"
#include "HCDamageReactionDirType.generated.h"

UENUM(BlueprintType)
enum class HCDamageReactionDirType : uint8 {
    Default,
    AttackDir,
    AttackOwner,
    FixDir,
};

