#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RandomArrangeItemInfoCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FRandomArrangeItemInfoCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RandomArrangeItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArrangeNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isOverrideArrangeItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ArrangeItemId;
    
};

