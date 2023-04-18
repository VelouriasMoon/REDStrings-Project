#pragma once
#include "CoreMinimal.h"
#include "EHorizonDialogueSegmentType.generated.h"

UENUM(BlueprintType)
enum class EHorizonDialogueSegmentType : uint8 {
    Invalidated,
    Text,
    NewLine,
    Image,
    PaperFlipbook,
    Material,
    HyperText,
    Custom,
};

