#pragma once
#include "CoreMinimal.h"
#include "EEventShopType.generated.h"

UENUM(BlueprintType)
enum class EEventShopType : uint8 {
    EVENTSHOPTYPE_BUY,
    EVENTSHOPTYPE_SELL,
    EVENTSHOPTYPE_TRADE,
    EVENTSHOPTYPE_NUM,
    EVENTSHOPTYPE_MAX UMETA(Hidden),
};

