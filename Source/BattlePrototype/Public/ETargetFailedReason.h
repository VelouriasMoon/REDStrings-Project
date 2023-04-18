#pragma once
#include "CoreMinimal.h"
#include "ETargetFailedReason.generated.h"

UENUM(BlueprintType)
enum class ETargetFailedReason : uint8 {
    None,
    Dead,
    NotExist,
    Lost,
    Other,
};

