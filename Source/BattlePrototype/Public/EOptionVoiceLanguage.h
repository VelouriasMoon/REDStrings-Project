#pragma once
#include "CoreMinimal.h"
#include "EOptionVoiceLanguage.generated.h"

UENUM(BlueprintType)
enum class EOptionVoiceLanguage : uint8 {
    Invalid,
    Japanese = 0x0,
    English,
    Num,
};

