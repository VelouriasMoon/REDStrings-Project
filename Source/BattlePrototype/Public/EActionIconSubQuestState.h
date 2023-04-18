#pragma once
#include "CoreMinimal.h"
#include "EActionIconSubQuestState.generated.h"

UENUM(BlueprintType)
enum class EActionIconSubQuestState : uint8 {
    NonAccept,
    Achieved,
    None,
};

