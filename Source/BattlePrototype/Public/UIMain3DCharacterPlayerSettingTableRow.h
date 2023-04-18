#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UIMain3DCharacterPlayerSetting.h"
#include "UIMain3DCharacterPlayerSettingTableRow.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FUIMain3DCharacterPlayerSettingTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIMain3DCharacterPlayerSetting Setting;
    
};

