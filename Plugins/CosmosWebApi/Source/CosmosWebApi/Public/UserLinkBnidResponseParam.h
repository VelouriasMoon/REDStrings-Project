#pragma once
#include "CoreMinimal.h"
#include "UserRedirectUrl.h"
#include "UserLinkBnidResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FUserLinkBnidResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserRedirectUrl> redirectUrl;
};

