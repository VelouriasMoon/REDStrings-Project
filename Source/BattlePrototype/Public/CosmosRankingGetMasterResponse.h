#pragma once
#include "CoreMinimal.h"
#include "CosmosRankingGetMasterList.h"
#include "CosmosRankingGetMasterResponse.generated.h"

USTRUCT(BlueprintType)
struct FCosmosRankingGetMasterResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCosmosRankingGetMasterList> masterList;
    
};

