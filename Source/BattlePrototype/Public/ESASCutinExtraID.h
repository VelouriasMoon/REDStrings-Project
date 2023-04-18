#pragma once
#include "CoreMinimal.h"
#include "ESASCutinExtraID.generated.h"

UENUM(BlueprintType)
enum class ESASCutinExtraID : uint8 {
    Invalid,
    SASE_ch0300_0800,
    SASE_ch0500_0700,
    SASE_ch0400_0600,
    SASE_ch0900_1000,
};

