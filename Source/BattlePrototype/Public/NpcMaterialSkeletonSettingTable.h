#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NpcMaterialSkeletonSetting.h"
#include "NpcMaterialSkeletonSettingTable.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FNpcMaterialSkeletonSettingTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNpcMaterialSkeletonSetting Setting;
    
};

