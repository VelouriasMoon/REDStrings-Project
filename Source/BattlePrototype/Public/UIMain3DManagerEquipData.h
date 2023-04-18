#pragma once
#include "CoreMinimal.h"
#include "ItemDataCell.h"
#include "UIMain3DManagerEquipData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FUIMain3DManagerEquipData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDataCell EquipWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDataCell EquipCostume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemDataCell> EquipAttachment;
    
};

