#pragma once
#include "CoreMinimal.h"
#include "FesInfo.h"
#include "FesGetListResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FFesGetListResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFesInfo> fesList;
};

