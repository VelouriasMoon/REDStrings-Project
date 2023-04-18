#pragma once
#include "CoreMinimal.h"
#include "ESASEquipStatus.generated.h"

UENUM(BlueprintType)
enum class ESASEquipStatus : uint8 {
    LinkAble,
    NotLink,
    RemoveParty,
};

