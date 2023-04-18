#pragma once
#include "CoreMinimal.h"
#include "EOptionSoundOutput.generated.h"

UENUM(BlueprintType)
enum class EOptionSoundOutput : uint8 {
    Stereo,
    Monaural,
    Surround,
    Num,
    Default = 0x0,
    EOptionSoundOutput_MAX = 0x4,
};

