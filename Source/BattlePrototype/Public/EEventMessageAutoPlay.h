#pragma once
#include "CoreMinimal.h"
#include "EEventMessageAutoPlay.generated.h"

UENUM(BlueprintType)
enum class EEventMessageAutoPlay : uint8 {
    On,
    Off,
    Num,
    Default = 0x0,
    EEventMessageAutoPlay_MAX = 0x3,
};

