#pragma once
#include "CoreMinimal.h"
#include "EBrainFieldMonitorState.generated.h"

UENUM(BlueprintType)
enum class EBrainFieldMonitorState : uint8 {
    Normal,
    AdvantagePlayer,
    DisadvantagePlayer,
    BrainTalk,
    Event,
    Max,
};

