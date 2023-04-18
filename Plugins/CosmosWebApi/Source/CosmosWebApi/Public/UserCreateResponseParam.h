#pragma once
#include "CoreMinimal.h"
#include "UserInfo.h"
#include "UserCreateResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FUserCreateResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserInfo UserInfo;
};

