#pragma once
#include "CoreMinimal.h"
#include "EOptionDisplayLanguageUS.generated.h"

UENUM(BlueprintType)
enum class EOptionDisplayLanguageUS : uint8 {
    Invalid,
    English,
    PortugalBR = 0x7,
    NeutralEspanol = 0x6,
    Num,
};

