#pragma once
#include "CoreMinimal.h"
#include "EAjitoTogetherUpKind.generated.h"

UENUM(BlueprintType)
enum class EAjitoTogetherUpKind : uint8 {
    None,
    HP,
    Attack,
    Psychic,
    Defence,
};

