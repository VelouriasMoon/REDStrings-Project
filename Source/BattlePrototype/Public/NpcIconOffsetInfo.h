#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NpcIconOffsetInfo.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FNpcIconOffsetInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionIconOffsetZ;
    
};

