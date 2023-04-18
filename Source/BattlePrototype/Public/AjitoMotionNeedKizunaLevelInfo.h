#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AjitoMotionNeedKizunaLevelInfo.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FAjitoMotionNeedKizunaLevelInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MotionIdToNeedKizunaLevel;
    
};

