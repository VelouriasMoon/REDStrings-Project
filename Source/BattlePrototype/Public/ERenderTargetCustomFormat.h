#pragma once
#include "CoreMinimal.h"
#include "ERenderTargetCustomFormat.generated.h"

UENUM(BlueprintType)
enum class ERenderTargetCustomFormat : uint8 {
    RGBA8,
    RGBA16f,
};

