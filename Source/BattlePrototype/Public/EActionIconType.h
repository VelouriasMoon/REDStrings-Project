#pragma once
#include "CoreMinimal.h"
#include "EActionIconType.generated.h"

UENUM(BlueprintType)
enum class EActionIconType : uint8 {
    Check,
    Talk,
    Quest,
    SubQuest,
    Shop,
    Save,
    SubQuestNavi,
    Resurrection,
    Bonds,
    News,
    Mission,
    Num,
};

