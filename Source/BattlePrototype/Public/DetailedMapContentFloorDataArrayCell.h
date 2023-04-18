#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DetailedMapContentFloorDataCell.h"
#include "DetailedMapContentFloorDataArrayCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FDetailedMapContentFloorDataArrayCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDetailedMapContentFloorDataCell> FloorDatas;
    
};

