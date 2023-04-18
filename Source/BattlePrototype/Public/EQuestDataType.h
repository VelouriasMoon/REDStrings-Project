#pragma once
#include "CoreMinimal.h"
#include "EQuestDataType.generated.h"

UENUM(BlueprintType)
enum class EQuestDataType : uint8 {
    Invalid,
    MainQuest,
    SubQuest,
    BondsEpisode,
};

