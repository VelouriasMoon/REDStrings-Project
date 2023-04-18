#pragma once
#include "CoreMinimal.h"
#include "EOptionDisplayLanguageAll.generated.h"

UENUM(BlueprintType)
enum class EOptionDisplayLanguageAll : uint8 {
    Invalid,
    Japanese = 0x0,
    English,
    French,
    Italian,
    Deutsch,
    Espanol,
    PortugalBR = 0x7,
    NeutralEspanol = 0x6,
    Russian = 0x8,
    ChineseT,
    ChineseS,
    Korean,
    Num,
};

