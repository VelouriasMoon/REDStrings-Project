#pragma once
#include "CoreMinimal.h"
#include "ESubQuestRewardType.generated.h"

UENUM(BlueprintType)
enum class ESubQuestRewardType : uint8 {
    Invalid,
    RewardItem,
    RewardMoney,
};

