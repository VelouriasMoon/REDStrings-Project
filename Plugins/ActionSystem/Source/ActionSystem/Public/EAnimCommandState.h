#pragma once
#include "CoreMinimal.h"
#include "EAnimCommandState.generated.h"

UENUM(BlueprintType)
enum EAnimCommandState {
    ACS_Failed,
    ACS_Precede,
    ASC_Just,
};

