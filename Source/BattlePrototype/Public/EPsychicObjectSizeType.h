#pragma once
#include "CoreMinimal.h"
#include "EPsychicObjectSizeType.generated.h"

UENUM(BlueprintType)
enum class EPsychicObjectSizeType : uint8 {
    SizeS,
    SizeM,
    SizeL,
    SizeXL,
    SizeXXL,
    Max,
};

