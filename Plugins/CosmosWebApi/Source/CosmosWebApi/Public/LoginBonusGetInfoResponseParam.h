#pragma once
#include "CoreMinimal.h"
#include "LoginBonusInfo.h"
#include "LoginBonusGetInfoResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FLoginBonusGetInfoResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLoginBonusInfo> loginBonusInfoList;
};

