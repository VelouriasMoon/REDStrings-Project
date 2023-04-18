#pragma once
#include "CoreMinimal.h"
#include "ConditionExclusionKind.generated.h"

UENUM(BlueprintType)
enum class ConditionExclusionKind : uint8 {
    None,
    FinishSelf,
    FinishOther,
};

