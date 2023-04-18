#pragma once
#include "CoreMinimal.h"
#include "EPlayerInputSASReadyType.generated.h"

UENUM(BlueprintType)
enum class EPlayerInputSASReadyType : uint8 {
    None,
    SAS,
    CombinationVision,
};

