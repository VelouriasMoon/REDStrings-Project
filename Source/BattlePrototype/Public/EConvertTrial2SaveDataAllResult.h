#pragma once
#include "CoreMinimal.h"
#include "EConvertTrial2SaveDataAllResult.generated.h"

UENUM(BlueprintType)
enum class EConvertTrial2SaveDataAllResult : uint8 {
    Invalid,
    AllSuccessful,
    PartiallySuccessful,
    AllFailed,
    Max,
};

