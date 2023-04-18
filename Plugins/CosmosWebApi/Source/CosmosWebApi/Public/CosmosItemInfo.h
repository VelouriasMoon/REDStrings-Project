#pragma once
#include "CoreMinimal.h"
#include "CosmosItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FCosmosItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 itemNum;
};

