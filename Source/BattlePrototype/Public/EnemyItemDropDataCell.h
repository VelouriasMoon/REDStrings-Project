#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ArrangeItemPopItemDataCell.h"
#include "EnemyItemDropDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FEnemyItemDropDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArrangeItemPopItemDataCell> DataDropItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArrangeItemPopItemDataCell> CoreDropItems;
    
};

