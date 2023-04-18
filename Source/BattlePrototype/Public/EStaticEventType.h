#pragma once
#include "CoreMinimal.h"
#include "EStaticEventType.generated.h"

UENUM(BlueprintType)
enum class EStaticEventType : uint8 {
    Unknown,
    Easy,
    General,
    Special,
    Max,
};

