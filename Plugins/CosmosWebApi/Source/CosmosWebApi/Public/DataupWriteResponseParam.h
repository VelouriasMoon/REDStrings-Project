#pragma once
#include "CoreMinimal.h"
#include "DataupWriteResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FDataupWriteResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequestID;
};

