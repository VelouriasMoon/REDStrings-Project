#pragma once
#include "CoreMinimal.h"
#include "EChromaticAberrationType.generated.h"

UENUM(BlueprintType)
enum class EChromaticAberrationType : uint8 {
    CA_RGB,
    CA_RB,
    CA_MAX UMETA(Hidden),
};

