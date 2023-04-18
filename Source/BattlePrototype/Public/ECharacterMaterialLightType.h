#pragma once
#include "CoreMinimal.h"
#include "ECharacterMaterialLightType.generated.h"

UENUM(BlueprintType)
enum class ECharacterMaterialLightType : uint8 {
    CaptureField,
    SASStart,
    PsychicCombo,
    Num,
};

