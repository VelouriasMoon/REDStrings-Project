#pragma once
#include "CoreMinimal.h"
#include "PlayerUpperAnimTransitionKind.generated.h"

UENUM(BlueprintType)
enum class PlayerUpperAnimTransitionKind : uint8 {
    None,
    StartToPsychic,
    EndToNone,
};

