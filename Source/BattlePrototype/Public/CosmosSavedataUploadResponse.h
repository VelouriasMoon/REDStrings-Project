#pragma once
#include "CoreMinimal.h"
#include "CosmosSavedataUploadResponse.generated.h"

USTRUCT(BlueprintType)
struct FCosmosSavedataUploadResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
};

