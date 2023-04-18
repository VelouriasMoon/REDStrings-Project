#pragma once
#include "CoreMinimal.h"
#include "EBrainFieldENPCType.generated.h"

UENUM(BlueprintType)
enum class EBrainFieldENPCType : uint8 {
    BFE_Normal,
    BFE_Twins,
    BFE_Em8300,
    BFE_Max,
};

