#pragma once
#include "CoreMinimal.h"
#include "ELocationTrailSource.generated.h"

UENUM(BlueprintType)
enum ELocationTrailSource {
    TRAILSOURCE_Random,
    TRAILSOURCE_New,
    TRAILSOURCE_MAX UMETA(Hidden),
};

