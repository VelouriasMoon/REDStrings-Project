#pragma once
#include "CoreMinimal.h"
#include "EFPSType.generated.h"

UENUM(BlueprintType)
enum class EFPSType : uint8 {
    Thirty,
    Sixty,
    NotFixed,
    Num,
    Default = 0x1,
    EFPSType_MAX = 0x4,
};

