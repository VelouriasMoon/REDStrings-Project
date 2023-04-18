#pragma once
#include "CoreMinimal.h"
#include "EEnemyGrade.generated.h"

UENUM(BlueprintType)
enum class EEnemyGrade : uint8 {
    Default,
    Boss,
    Simple,
    High,
    Low,
};

