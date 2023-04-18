#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ArrangeItemPopItemDataCell.h"
#include "ArrangeItemDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FArrangeItemDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArrangeItemPopItemDataCell> PopItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDispGetLog;
};

