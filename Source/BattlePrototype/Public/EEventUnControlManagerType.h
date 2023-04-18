#pragma once
#include "CoreMinimal.h"
#include "EEventUnControlManagerType.generated.h"

UENUM(BlueprintType)
enum class EEventUnControlManagerType : uint8 {
    PlayerManager,
    EnemyManager,
    PsychicObjManager,
};

