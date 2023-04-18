#pragma once
#include "CoreMinimal.h"
#include "RankingInfo.h"
#include "RankingGetByUserResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetByUserResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 listNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRankingInfo> rankingList;
};

