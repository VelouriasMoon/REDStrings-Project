#pragma once
#include "CoreMinimal.h"
#include "UserGetTrackingNumResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FUserGetTrackingNumResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString tracking_num;
};

