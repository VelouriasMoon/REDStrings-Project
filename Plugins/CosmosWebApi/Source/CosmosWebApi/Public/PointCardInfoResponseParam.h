#pragma once
#include "CoreMinimal.h"
#include "PointInfo.h"
#include "PointCardInfoResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FPointCardInfoResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPointInfo PointInfo;
};

