#pragma once
#include "CoreMinimal.h"
#include "TusReadResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FTusReadResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString tusData;
};

