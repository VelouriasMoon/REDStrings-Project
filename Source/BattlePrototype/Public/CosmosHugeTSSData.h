#pragma once
#include "CoreMinimal.h"
#include "CosmosHugeTSSData.generated.h"

USTRUCT(BlueprintType)
struct FCosmosHugeTSSData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 slotNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
};

