#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELoadingTipsCategory.h"
#include "EPlayerID.h"
#include "RetryLoadingTipsParam.h"
#include "RetryLoadingTipsDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FRetryLoadingTipsDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TipsMsgID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELoadingTipsCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID playerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRetryLoadingTipsParam Param;
    
};

