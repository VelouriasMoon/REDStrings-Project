#pragma once
#include "CoreMinimal.h"
#include "ESubQuestRequestType.generated.h"

UENUM(BlueprintType)
enum class ESubQuestRequestType : uint8 {
    Invalid,
    GatherItem,
    SupressEnemy,
};

