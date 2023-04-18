#pragma once
#include "CoreMinimal.h"
#include "DataupSearchTagInfo.h"
#include "DataupSearchResultInfo.generated.h"

USTRUCT(BlueprintType)
struct FDataupSearchResultInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString appendInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataupSearchTagInfo searchTagInfo;
};

