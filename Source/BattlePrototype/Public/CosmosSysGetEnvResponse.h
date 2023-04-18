#pragma once
#include "CoreMinimal.h"
#include "CosmosSysGetEnvResponse.generated.h"

USTRUCT(BlueprintType)
struct FCosmosSysGetEnvResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
};

