#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LoadTipsBlockDataCell_Deprecated.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FLoadTipsBlockDataCell_Deprecated : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 progressData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> useTipsID;
    
};

