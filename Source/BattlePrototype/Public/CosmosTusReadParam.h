#pragma once
#include "CoreMinimal.h"
#include "CosmosTusReadParam.generated.h"

USTRUCT(BlueprintType)
struct FCosmosTusReadParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 slotNo;
    
};

