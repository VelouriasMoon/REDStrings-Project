#pragma once
#include "CoreMinimal.h"
#include "HugeTssMultiReadResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FHugeTssMultiReadResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString tssUrl;
};

