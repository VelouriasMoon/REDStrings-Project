#pragma once
#include "CoreMinimal.h"
#include "EnemyBrainCrashAnimKind.generated.h"

UENUM(BlueprintType)
enum class EnemyBrainCrashAnimKind : uint8 {
    Start,
    Wait,
    Up,
};

