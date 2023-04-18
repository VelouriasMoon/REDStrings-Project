#pragma once
#include "CoreMinimal.h"
#include "ETextLanguage.generated.h"

UENUM(BlueprintType)
enum class ETextLanguage : uint8 {
    Japanese,
    English,
    French,
    Italian,
    Deutsch,
    Espanol,
    NeutralEspanol,
    PortugalBR,
    Russian,
    ChineseT,
    ChineseS,
    Korean,
    Num,
    Invalid,
};

