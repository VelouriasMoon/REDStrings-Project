#pragma once
#include "CoreMinimal.h"
#include "QuestType.generated.h"

UENUM(BlueprintType)
enum class QuestType : uint8 {
    qtMain,
    qtSub,
    qtBonds,
};

