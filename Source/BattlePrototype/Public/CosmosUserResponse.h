#pragma once
#include "CoreMinimal.h"
#include "CosmosUserResponse.generated.h"

USTRUCT(BlueprintType)
struct FCosmosUserResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userId;
    
};

