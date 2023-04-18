#pragma once
#include "CoreMinimal.h"
#include "EIK_Type_Plugin.generated.h"

UENUM(BlueprintType)
enum class EIK_Type_Plugin : uint8 {
    ENUM_Two_Bone_Ik,
    ENUM_Single_Bone_Ik,
    ENUM_MAX UMETA(Hidden),
};

