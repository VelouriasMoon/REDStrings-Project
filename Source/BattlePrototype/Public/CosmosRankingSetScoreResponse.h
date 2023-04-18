#pragma once
#include "CoreMinimal.h"
#include "CosmosRankingSetScoreResponse.generated.h"

USTRUCT(BlueprintType)
struct FCosmosRankingSetScoreResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
};

