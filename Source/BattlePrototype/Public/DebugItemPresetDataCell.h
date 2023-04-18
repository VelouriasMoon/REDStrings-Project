#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DebugItemPresetParam.h"
#include "DebugItemPresetDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FDebugItemPresetDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Money;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugItemPresetParam> Items;
    
};

