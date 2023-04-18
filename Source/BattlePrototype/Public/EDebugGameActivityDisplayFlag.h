#pragma once
#include "CoreMinimal.h"
#include "EDebugGameActivityDisplayFlag.generated.h"

UENUM(BlueprintType)
enum class EDebugGameActivityDisplayFlag : uint8 {
    ProgressObjectName,
    ProgressDataForCrossSave,
    ConvertFromOtherPlatform,
};

