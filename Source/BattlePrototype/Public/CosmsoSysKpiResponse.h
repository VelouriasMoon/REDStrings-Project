#pragma once
#include "CoreMinimal.h"
#include "CosmsoSysKpiResponse.generated.h"

USTRUCT(BlueprintType)
struct FCosmsoSysKpiResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
};

