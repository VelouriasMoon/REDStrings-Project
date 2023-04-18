#pragma once
#include "CoreMinimal.h"
#include "SysGetEnvV2ResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FSysGetEnvV2ResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
};

