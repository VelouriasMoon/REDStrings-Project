#pragma once
#include "CoreMinimal.h"
#include "EShopMode.generated.h"

UENUM(BlueprintType)
enum class EShopMode : uint8 {
    Buy,
    Sell,
    Trade,
    GetContents,
};

