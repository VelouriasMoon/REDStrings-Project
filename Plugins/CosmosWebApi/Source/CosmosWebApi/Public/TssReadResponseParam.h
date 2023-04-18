#pragma once
#include "CoreMinimal.h"
#include "TssReadResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FTssReadResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString tssData;
};

