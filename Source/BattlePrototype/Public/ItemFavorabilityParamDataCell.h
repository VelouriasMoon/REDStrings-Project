#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemFavorabilityParamDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FItemFavorabilityParamDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpUp[2];
    
};

