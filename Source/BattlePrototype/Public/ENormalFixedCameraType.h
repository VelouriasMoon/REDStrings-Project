#pragma once
#include "CoreMinimal.h"
#include "ENormalFixedCameraType.generated.h"

UENUM(BlueprintType)
enum class ENormalFixedCameraType : uint8 {
    NFC_NowCamera,
    NFC_Direct,
    NumOfEnum,
};

