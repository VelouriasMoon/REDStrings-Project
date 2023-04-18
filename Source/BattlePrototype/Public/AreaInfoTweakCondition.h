#pragma once
#include "CoreMinimal.h"
#include "EAreaInfoTweakCheckType.h"
#include "EAreaInfoTweakConditionType.h"
#include "AreaInfoTweakCondition.generated.h"

USTRUCT(BlueprintType)
struct FAreaInfoTweakCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAreaInfoTweakCheckType CheckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAreaInfoTweakConditionType ConditionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
};

