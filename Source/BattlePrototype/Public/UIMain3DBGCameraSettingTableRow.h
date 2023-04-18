#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UIMain3DBGCameraSetting.h"
#include "UIMain3DBGCameraSettingTableRow.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FUIMain3DBGCameraSettingTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIMain3DBGCameraSetting Setting;
    
};

