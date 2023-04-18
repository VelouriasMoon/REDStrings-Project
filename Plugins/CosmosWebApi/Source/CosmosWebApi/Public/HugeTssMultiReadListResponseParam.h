#pragma once
#include "CoreMinimal.h"
#include "HugeTssInfo.h"
#include "HugeTssMultiReadListResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FHugeTssMultiReadListResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHugeTssInfo> tssDataList;
};

