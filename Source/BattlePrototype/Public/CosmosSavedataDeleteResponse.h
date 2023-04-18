#pragma once
#include "CoreMinimal.h"
#include "CosmosSavedataDeleteResponse.generated.h"

USTRUCT(BlueprintType)
struct FCosmosSavedataDeleteResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
};

