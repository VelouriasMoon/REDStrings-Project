#pragma once
#include "CoreMinimal.h"
#include "HugeTssReadResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FHugeTssReadResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString tssUrl;
};

