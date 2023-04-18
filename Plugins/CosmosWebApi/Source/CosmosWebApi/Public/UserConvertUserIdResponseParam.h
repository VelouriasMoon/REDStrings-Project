#pragma once
#include "CoreMinimal.h"
#include "UserConvertInfo.h"
#include "UserConvertUserIdResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FUserConvertUserIdResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserConvertInfo> UserConvertInfo;
};

