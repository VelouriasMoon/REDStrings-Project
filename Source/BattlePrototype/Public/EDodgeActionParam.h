#pragma once
#include "CoreMinimal.h"
#include "EDodgeActionParam.generated.h"

UENUM(BlueprintType)
enum class EDodgeActionParam : uint8 {
    Default,
    JustDodge,
    Telepo,
};

