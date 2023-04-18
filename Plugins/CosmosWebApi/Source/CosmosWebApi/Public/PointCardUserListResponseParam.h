#pragma once
#include "CoreMinimal.h"
#include "PointInfo.h"
#include "PointCardUserListResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FPointCardUserListResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPointInfo> pointInfoList;
};

