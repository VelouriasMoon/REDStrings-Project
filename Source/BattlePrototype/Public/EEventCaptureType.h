#pragma once
#include "CoreMinimal.h"
#include "EEventCaptureType.generated.h"

UENUM(BlueprintType)
enum class EEventCaptureType : uint8 {
    None,
    CharaFace,
    Sequencer,
};

