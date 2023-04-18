#pragma once
#include "CoreMinimal.h"
#include "ELanguageTextPattern.generated.h"

UENUM(BlueprintType)
enum class ELanguageTextPattern : uint8 {
    Nothing,
    EFIGSR,
    JPN,
    CHN,
    CK,
    FR,
    IT,
    DE,
    esES,
    esUS,
    ptBR,
    RU,
    CJK_Deprecated,
};

