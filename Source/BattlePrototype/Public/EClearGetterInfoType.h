#pragma once
#include "CoreMinimal.h"
#include "EClearGetterInfoType.generated.h"

UENUM(BlueprintType)
enum class EClearGetterInfoType : uint8 {
    eClearGetterNotification,
    ContentMaxNum = 0xFF,
};

