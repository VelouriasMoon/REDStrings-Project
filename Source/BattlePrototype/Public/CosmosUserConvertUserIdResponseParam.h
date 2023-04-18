#pragma once
#include "CoreMinimal.h"
#include "CosmosUserConvertInfo.h"
#include "CosmosUserConvertUserIdResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FCosmosUserConvertUserIdResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCosmosUserConvertInfo> UserConvertInfo;
    
};

