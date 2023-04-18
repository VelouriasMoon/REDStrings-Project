#pragma once
#include "CoreMinimal.h"
#include "ESequencerDilationOwner.generated.h"

UENUM(BlueprintType)
enum class ESequencerDilationOwner : uint8 {
    Dilation_MainPlayer,
    Dilation_AttachActor,
    Dilation_World,
    Dilation_None,
    Dilation_MAX UMETA(Hidden),
};

