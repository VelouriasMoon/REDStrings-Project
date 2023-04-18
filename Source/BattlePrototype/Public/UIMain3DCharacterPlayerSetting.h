#pragma once
#include "CoreMinimal.h"
//-FallbackName=Transform
#include "UIMain3DCharacterPlayerSetting.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FUIMain3DCharacterPlayerSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EquipCameraTable;
    
};

