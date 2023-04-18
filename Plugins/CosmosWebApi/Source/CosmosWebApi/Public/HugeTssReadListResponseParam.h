#pragma once
#include "CoreMinimal.h"
#include "HugeTssInfo.h"
#include "HugeTssReadListResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FHugeTssReadListResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHugeTssInfo> tssUrlList;
};

