#pragma once
#include "CoreMinimal.h"
#include "EClearGetterPlayerType.generated.h"

UENUM(BlueprintType)
enum class EClearGetterPlayerType : uint8 {
    eInvalid,
    eYuito,
    eKasane,
    eWhichOne,
    eBoth,
};

