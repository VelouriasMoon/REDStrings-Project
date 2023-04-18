#pragma once
#include "CoreMinimal.h"
#include "EEventType.generated.h"

UENUM(BlueprintType)
enum class EEventType : uint8 {
    Unknown,
    Static,
    Dynamic,
    Max,
};

