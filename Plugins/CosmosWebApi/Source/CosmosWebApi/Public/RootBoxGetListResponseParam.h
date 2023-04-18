#pragma once
#include "CoreMinimal.h"
#include "RootBoxInfo.h"
#include "RootBoxGetListResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FRootBoxGetListResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRootBoxInfo> rootboxList;
};

