#pragma once
#include "CoreMinimal.h"
#include "HCElementKind.generated.h"

UENUM(BlueprintType)
enum class HCElementKind : uint8 {
    Fire,
    Water,
    Wind,
    Earth,
    Light,
    Dark,
};

