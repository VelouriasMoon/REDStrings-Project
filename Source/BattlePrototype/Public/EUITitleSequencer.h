#pragma once
#include "CoreMinimal.h"
#include "EUITitleSequencer.generated.h"

UENUM(BlueprintType)
enum class EUITitleSequencer : uint8 {
    Default,
    FastNewGame,
    EndingStart,
    YuitoSelectStart,
    YuitoSelect,
    YuitoSelectCancel,
    YuitoDecide,
    KasaneSelectStart,
    KasaneSelect,
    KasaneSelectCancel,
    KasaneDecide,
    PV,
    Num,
};

