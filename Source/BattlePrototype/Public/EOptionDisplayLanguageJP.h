#pragma once
#include "CoreMinimal.h"
#include "EOptionDisplayLanguageJP.generated.h"

UENUM(BlueprintType)
enum class EOptionDisplayLanguageJP : uint8 {
    Invalid,
    Japanese = 0x0,
    English,
    Num,
};

