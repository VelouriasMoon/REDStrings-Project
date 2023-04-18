#pragma once
#include "CoreMinimal.h"
#include "CosmosGetTrackingNumResponse.generated.h"

USTRUCT(BlueprintType)
struct FCosmosGetTrackingNumResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString trackingNum;
    
};

