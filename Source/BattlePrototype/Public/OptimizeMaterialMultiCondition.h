#pragma once
#include "CoreMinimal.h"
#include "OptimizeMaterialCondition.h"
#include "OptimizeMaterialMultiCondition.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FOptimizeMaterialMultiCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimizeMaterialCondition> Conditions;
    
};

