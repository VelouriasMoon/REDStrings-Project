#pragma once
#include "CoreMinimal.h"
#include "EUINoticeMessageCallType.generated.h"

UENUM(BlueprintType)
enum class EUINoticeMessageCallType : uint8 {
    BrainMessage,
    SubQuest_NotOrder,
    SubQuest_CanReport,
    SubQuest_ToImprogressFromCanReport,
    TradeItem,
    ClearGetter_Achievement,
};

