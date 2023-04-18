#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ShopLineupCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FShopLineupCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemId;
    
};

