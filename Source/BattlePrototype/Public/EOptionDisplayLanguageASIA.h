#pragma once
#include "CoreMinimal.h"
#include "EOptionDisplayLanguageASIA.generated.h"

UENUM(BlueprintType)
enum class EOptionDisplayLanguageASIA : uint8 {
    Invalid,
    English,
    ChineseT = 0x9,
    ChineseS,
    Num,
};

