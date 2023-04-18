#pragma once
#include "CoreMinimal.h"
#include "CosmosUserData.generated.h"

USTRUCT(BlueprintType)
struct FCosmosUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 registerStatus;
};

