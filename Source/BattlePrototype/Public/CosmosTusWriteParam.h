#pragma once
#include "CoreMinimal.h"
#include "CosmosTusWriteParam.generated.h"

USTRUCT(BlueprintType)
struct FCosmosTusWriteParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 slotNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString tusData;
    
};

