#pragma once
#include "CoreMinimal.h"
#include "CommonResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FCommonResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
};

