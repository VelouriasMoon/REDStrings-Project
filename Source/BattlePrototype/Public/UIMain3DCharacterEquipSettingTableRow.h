#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UIMain3DCharacterEquipSetting.h"
#include "UIMain3DCharacterEquipSettingTableRow.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FUIMain3DCharacterEquipSettingTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIMain3DCharacterEquipSetting Setting;
    
};

