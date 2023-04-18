#pragma once
#include "CoreMinimal.h"
#include "SavedataUploadResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FSavedataUploadResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
};

