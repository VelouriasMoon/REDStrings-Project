#pragma once
#include "CoreMinimal.h"
#include "ELoadingTipsCategory.generated.h"

UENUM(BlueprintType)
enum class ELoadingTipsCategory : uint8 {
    Scenario,
    System,
    Info,
    Location,
    RetryBoss,
    RetryBrainField,
    RetryBossAnimeKaren,
    Num,
};

