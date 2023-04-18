#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SASHologramAttackProbabilityData.generated.h"

USTRUCT(BlueprintType)
struct FSASHologramAttackProbabilityData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpProbability;
    
};

