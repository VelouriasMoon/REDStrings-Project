#pragma once
#include "CoreMinimal.h"
#include "CosmosSavedataDeleteParam.generated.h"

USTRUCT(BlueprintType)
struct FCosmosSavedataDeleteParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 slotNo;
    
};

