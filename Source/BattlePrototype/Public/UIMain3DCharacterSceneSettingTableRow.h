#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UIMain3DCharacterSceneSetting.h"
#include "UIMain3DCharacterSceneSettingTableRow.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FUIMain3DCharacterSceneSettingTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIMain3DCharacterSceneSetting Setting;
    
};

