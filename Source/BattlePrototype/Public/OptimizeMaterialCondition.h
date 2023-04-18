#pragma once
#include "CoreMinimal.h"
#include "EOptimizeMaterialConditionBranch.h"
#include "EOptimizeMaterialConditionType.h"
#include "OptimizeMaterialCondition.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FOptimizeMaterialCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimizeMaterialConditionBranch Branch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimizeMaterialConditionType ConditionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConditionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NowSettingValue;
    
};

