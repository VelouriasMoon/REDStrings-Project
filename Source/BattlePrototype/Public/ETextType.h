#pragma once
#include "CoreMinimal.h"
#include "ETextType.generated.h"

UENUM(BlueprintType)
enum class ETextType : uint8 {
    Invalid,
    Name,
    Description,
    MenuCommon,
    Quest,
    TutoHelp,
    Event,
    BrainMessage,
    Books,
    MAX,
};

