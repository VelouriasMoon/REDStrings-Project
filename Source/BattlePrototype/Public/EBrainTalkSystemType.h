#pragma once
#include "CoreMinimal.h"
#include "EBrainTalkSystemType.generated.h"

UENUM(BlueprintType)
enum class EBrainTalkSystemType : uint8 {
    Battle,
    EnemyCapture,
    Tutorial,
    MapGimmick,
};

