#pragma once
#include "CoreMinimal.h"
#include "CosmosUserData.h"
#include "UserAuthResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FUserAuthResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosUserData UserInfo;
};

