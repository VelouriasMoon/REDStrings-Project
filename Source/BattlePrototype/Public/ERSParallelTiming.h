#pragma once
#include "CoreMinimal.h"
#include "ERSParallelTiming.generated.h"

UENUM(BlueprintType)
enum class ERSParallelTiming : uint8 {
    AfterPrePhysics1,
    AfterDuringPhysics1,
};

