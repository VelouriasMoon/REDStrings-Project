#pragma once
#include "CoreMinimal.h"
#include "CosmosSysAgreeKpiResponse.generated.h"

USTRUCT(BlueprintType)
struct FCosmosSysAgreeKpiResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
};

