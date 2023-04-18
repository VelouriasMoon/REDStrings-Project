#pragma once
#include "CoreMinimal.h"
#include "ERenderingShadowType.generated.h"

UENUM(BlueprintType)
enum class ERenderingShadowType : uint8 {
    Default,
    CharacterHide,
    AllHide,
};

