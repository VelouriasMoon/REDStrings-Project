#pragma once
#include "CoreMinimal.h"
#include "EItemPresentSender.generated.h"

UENUM(BlueprintType)
enum class EItemPresentSender : uint8 {
    Both,
    Male,
    Female,
    Event,
    Num,
};

