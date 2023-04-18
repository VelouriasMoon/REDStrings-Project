#pragma once
#include "CoreMinimal.h"
#include "ECurveParamType.h"
#include "EventPlAnimationCurveParam.generated.h"

USTRUCT(BlueprintType)
struct FEventPlAnimationCurveParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECurveParamType CurveParamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JointID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName;
    
};

