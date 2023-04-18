#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CharacterMaterialLightSetting.h"
#include "CharacterMaterialLight.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FCharacterMaterialLight : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterMaterialLightSetting Setting;
    
};

