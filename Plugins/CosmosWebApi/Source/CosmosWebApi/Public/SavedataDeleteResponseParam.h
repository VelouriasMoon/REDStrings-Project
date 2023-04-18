#pragma once
#include "CoreMinimal.h"
#include "SavedataDeleteResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FSavedataDeleteResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
};

