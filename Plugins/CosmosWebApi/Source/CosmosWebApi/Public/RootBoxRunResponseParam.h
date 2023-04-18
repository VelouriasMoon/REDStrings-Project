#pragma once
#include "CoreMinimal.h"
#include "RootBoxResultInfo.h"
#include "RootBoxRunResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FRootBoxRunResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 totalCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRootBoxResultInfo> rootboxResultList;
};

