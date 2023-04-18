#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemTradeLineupCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FItemTradeLineupCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RecipeIndex;
    
};

