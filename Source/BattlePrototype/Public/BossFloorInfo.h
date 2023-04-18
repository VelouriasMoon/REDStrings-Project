#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BossFloorInfo.generated.h"

class AMapGimmickObject;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FBossFloorInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMapGimmickObject* FloorActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFall;
};

