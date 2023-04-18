#pragma once
#include "CoreMinimal.h"
#include "ESequencerSoundDemoType.generated.h"

UENUM(BlueprintType)
enum class ESequencerSoundDemoType : uint8 {
    Other,
    BrainFieldOpen,
    BrainFieldIn,
    BrainFieldOut,
    SASCutIn,
};

