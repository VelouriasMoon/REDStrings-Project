#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FallingFloorBlockOne.h"
#include "FallingFloorBlockInfo.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FFallingFloorBlockInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFallingFloorBlockOne> BlockInfos;
    
};

