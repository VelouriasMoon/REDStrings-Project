#pragma once
#include "CoreMinimal.h"
#include "EGetContentsAction.generated.h"

UENUM(BlueprintType)
enum class EGetContentsAction : uint8 {
    None,
    L1,
    R1,
    End = 0x4,
};

