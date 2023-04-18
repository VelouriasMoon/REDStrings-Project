#pragma once
#include "CoreMinimal.h"
#include "EUIMain3DEquipCameraID.generated.h"

UENUM(BlueprintType)
enum class EUIMain3DEquipCameraID : uint8 {
    MEC_Default,
    MEC_Costume,
    MEC_Weapon,
    MEC_Att_Face,
    MEC_Att_Breast,
    MEC_Att_Back,
    MEC_Att_Hips,
    MEC_Att_Hand,
    MEC_Att_Foot,
    MEC_Max,
};

