#pragma once
#include "CoreMinimal.h"
#include "CosmosUserData.h"
#include "UserLoginV2ResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FUserLoginV2ResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosUserData UserInfo;
};

