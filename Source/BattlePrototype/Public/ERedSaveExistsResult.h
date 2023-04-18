#pragma once
#include "CoreMinimal.h"
#include "ERedSaveExistsResult.generated.h"

UENUM(BlueprintType)
enum class ERedSaveExistsResult : uint8 {
    OK,
    DoesNotExist,
    Corrupt,
    UnspecifiedError,
    NONE,
    NoSpace,
    Max,
};

