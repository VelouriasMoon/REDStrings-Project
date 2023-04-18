#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AnimeInterlockingRewardToKins.generated.h"

USTRUCT(BlueprintType)
struct FAnimeInterlockingRewardToKins : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KinsNum;
    
};

