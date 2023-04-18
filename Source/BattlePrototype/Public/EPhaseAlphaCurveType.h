#pragma once
#include "CoreMinimal.h"
#include "EPhaseAlphaCurveType.generated.h"

UENUM(BlueprintType)
enum class EPhaseAlphaCurveType : uint8 {
    None,
    After30FFade,
    After0FFade,
};

