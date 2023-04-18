#pragma once
#include "CoreMinimal.h"
#include "EMaterialAccessorSetupID.generated.h"

UENUM(BlueprintType)
enum class EMaterialAccessorSetupID : uint8 {
    NoWrite,
    TakeDefault,
    Overwrite,
};

