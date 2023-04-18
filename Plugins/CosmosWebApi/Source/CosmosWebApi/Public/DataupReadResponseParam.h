#pragma once
#include "CoreMinimal.h"
#include "DataupSearchTagInfo.h"
#include "DataupReadResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FDataupReadResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString appendInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataupSearchTagInfo searchTagInfo;
};

