#pragma once
#include "CoreMinimal.h"
#include "ENotifySoundReplace_EnStr.generated.h"

UENUM(BlueprintType)
enum class ENotifySoundReplace_EnStr : uint8 {
    None,
    Middle,
    High,
    ENotifySoundReplace_MAX UMETA(Hidden),
};

