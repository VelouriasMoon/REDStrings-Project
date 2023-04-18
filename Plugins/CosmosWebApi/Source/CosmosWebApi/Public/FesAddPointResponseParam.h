#pragma once
#include "CoreMinimal.h"
#include "FesAddPointResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FFesAddPointResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 totalPoint;
};

