#pragma once
#include "CoreMinimal.h"
#include "RankingMasterInfo.h"
#include "RankingGetMasterResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetMasterResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRankingMasterInfo> masterList;
};

