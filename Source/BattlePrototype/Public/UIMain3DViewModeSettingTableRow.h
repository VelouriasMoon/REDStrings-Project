#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UIMain3DViewModeSetting.h"
#include "UIMain3DViewModeSettingTableRow.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FUIMain3DViewModeSettingTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIMain3DViewModeSetting Setting;
    
};

