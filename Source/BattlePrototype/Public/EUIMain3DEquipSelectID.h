#pragma once
#include "CoreMinimal.h"
#include "EUIMain3DEquipSelectID.generated.h"

UENUM(BlueprintType)
enum class EUIMain3DEquipSelectID : uint8 {
    MES_Default,
    MES_Costume,
    MES_Weapon,
    MES_Attachment,
    MES_Max,
};

