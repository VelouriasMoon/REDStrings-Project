#pragma once
#include "CoreMinimal.h"
#include "UserInfo.h"
#include "UserLoginResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FUserLoginResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserInfo UserInfo;
};

