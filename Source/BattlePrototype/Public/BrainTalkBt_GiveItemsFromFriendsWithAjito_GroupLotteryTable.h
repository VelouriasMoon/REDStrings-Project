#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BrainTalkBt_GiveItemsFromFriendsWithAjito_GroupLotteryTable.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FBrainTalkBt_GiveItemsFromFriendsWithAjito_GroupLotteryTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rate_KLvL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rate_KLvH;
};

