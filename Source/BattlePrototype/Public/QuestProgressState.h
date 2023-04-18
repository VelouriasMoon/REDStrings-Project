#pragma once
#include "CoreMinimal.h"
#include "QuestProgressState.generated.h"

UENUM(BlueprintType)
enum class QuestProgressState : uint8 {
    qpNotOpen,
    qpNotOrders,
    qpInProgress,
    qpCanReport,
    qpCleared,
};

