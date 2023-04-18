#pragma once
#include "CoreMinimal.h"
#include "EBrainTalkBtGroup.generated.h"

UENUM(BlueprintType)
enum class EBrainTalkBtGroup : uint8 {
    Group_None,
    Group_A,
    Group_B,
    Group_C,
    Group_MAX UMETA(Hidden),
};

