#pragma once
#include "CoreMinimal.h"
#include "EMainScenarioType.generated.h"

UENUM(BlueprintType)
enum class EMainScenarioType : uint8 {
    Male,
    Female,
    Confluence,
    None,
    Max,
};

