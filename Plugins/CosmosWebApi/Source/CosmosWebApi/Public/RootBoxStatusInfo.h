#pragma once
#include "CoreMinimal.h"
#include "RarityItemInfo.h"
#include "RootBoxStatusInfo.generated.h"

USTRUCT(BlueprintType)
struct FRootBoxStatusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString rarityId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rarityRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 campaignRarityRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRarityItemInfo> rarityItemList;
};

