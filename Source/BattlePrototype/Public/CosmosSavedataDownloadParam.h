#pragma once
#include "CoreMinimal.h"
#include "CosmosSavedataDownloadParam.generated.h"

USTRUCT(BlueprintType)
struct FCosmosSavedataDownloadParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 slotNo;
    
};

