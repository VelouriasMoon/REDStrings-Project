#pragma once
#include "CoreMinimal.h"
#include "CosmosHugeTSSData.h"
#include "CosmosHugeTssReadListResponse.generated.h"

USTRUCT(BlueprintType)
struct FCosmosHugeTssReadListResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCosmosHugeTSSData> tssDataList;
    
};

