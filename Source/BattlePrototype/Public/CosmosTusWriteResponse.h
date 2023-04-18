#pragma once
#include "CoreMinimal.h"
#include "CosmosTusWriteResponse.generated.h"

USTRUCT(BlueprintType)
struct FCosmosTusWriteResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
};

