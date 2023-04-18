#pragma once
#include "CoreMinimal.h"
#include "SavedataDownloadResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FSavedataDownloadResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString saveData;
};

