#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WorldmapBatchOpenDataBitlistDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FWorldmapBatchOpenDataBitlistDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 areaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PortalID;
    
};

