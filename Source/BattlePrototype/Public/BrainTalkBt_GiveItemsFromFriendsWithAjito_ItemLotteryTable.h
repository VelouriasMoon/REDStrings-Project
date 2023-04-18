#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BrainTalkBt_GiveItemsFromFriendsWithAjito_ItemLotteryTable.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FBrainTalkBt_GiveItemsFromFriendsWithAjito_ItemLotteryTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnableProgressID_Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnableProgressID_K;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 itemNum;
};

