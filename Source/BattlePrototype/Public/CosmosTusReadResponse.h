#pragma once
#include "CoreMinimal.h"
#include "CosmosTusReadResponse.generated.h"

USTRUCT(BlueprintType)
struct FCosmosTusReadResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString tusData;
    
};

