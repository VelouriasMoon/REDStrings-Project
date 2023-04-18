#pragma once
#include "CoreMinimal.h"
#include "SavedataMultipartuploadResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FSavedataMultipartuploadResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
};

