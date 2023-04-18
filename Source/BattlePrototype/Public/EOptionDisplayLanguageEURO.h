#pragma once
#include "CoreMinimal.h"
#include "EOptionDisplayLanguageEURO.generated.h"

UENUM(BlueprintType)
enum class EOptionDisplayLanguageEURO : uint8 {
    Invalid,
    English,
    French,
    Italian,
    Deutsch,
    Espanol,
    Russian = 0x8,
    Num,
};

