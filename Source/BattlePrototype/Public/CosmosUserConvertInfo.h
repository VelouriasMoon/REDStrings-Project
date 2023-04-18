#pragma once
#include "CoreMinimal.h"
#include "CosmosUserConvertInfo.generated.h"

USTRUCT(BlueprintType)
struct FCosmosUserConvertInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformUserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CosmosUserID;
    
};

