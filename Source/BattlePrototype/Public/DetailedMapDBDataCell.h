#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DetailedMapContentFloorDataArrayCell.h"
#include "DetailedMapDBDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FDetailedMapDBDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDetailedMapContentFloorDataArrayCell> AreaDatas;
    
};

