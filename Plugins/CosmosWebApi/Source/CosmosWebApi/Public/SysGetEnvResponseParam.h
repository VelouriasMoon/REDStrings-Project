#pragma once
#include "CoreMinimal.h"
#include "SysGetEnvResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FSysGetEnvResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
};

