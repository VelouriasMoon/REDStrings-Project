#pragma once
#include "CoreMinimal.h"
#include "CosmosSavedataDownloadResponse.generated.h"

USTRUCT(BlueprintType)
struct FCosmosSavedataDownloadResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString saveData;
    
};

