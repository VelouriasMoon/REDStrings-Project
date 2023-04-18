#pragma once
#include "CoreMinimal.h"
#include "EMaterialShadowOffsetID.generated.h"

UENUM(BlueprintType)
enum class EMaterialShadowOffsetID : uint8 {
    Default,
    ShadowOffsetMap_R,
    ShadowOffsetMap_G,
    ShadowOffsetMap_B,
};

