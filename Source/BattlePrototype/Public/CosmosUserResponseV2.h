#pragma once
#include "CoreMinimal.h"
#include "ECosmosRegistType.h"
#include "CosmosUserResponseV2.generated.h"

USTRUCT(BlueprintType)
struct FCosmosUserResponseV2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECosmosRegistType registerStatus;
    
};

