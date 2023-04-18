#pragma once
#include "CoreMinimal.h"
#include "CosmosSysAgreeKpiParam.generated.h"

USTRUCT(BlueprintType)
struct FCosmosSysAgreeKpiParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AgreeFlag;
    
};

