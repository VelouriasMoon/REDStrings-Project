#pragma once
#include "CoreMinimal.h"
#include "EOptionVolumeParam.generated.h"

UENUM(BlueprintType)
enum class EOptionVolumeParam : uint8 {
    Min,
    Max = 0x64,
    Default = 0x32,
};

