#pragma once
#include "CoreMinimal.h"
#include "ESoundCategory.generated.h"

UENUM(BlueprintType)
enum class ESoundCategory : uint8 {
    None,
    Bgm,
    Me,
    Se,
    Voice,
    se_env,
    through,
    Max,
};

