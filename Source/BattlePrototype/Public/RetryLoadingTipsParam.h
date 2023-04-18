#pragma once
#include "CoreMinimal.h"
#include "RetryLoadingTipsParam.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FRetryLoadingTipsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressBeginNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressEndNo;
    
};

