#pragma once
#include "CoreMinimal.h"
#include "EUIMain3DCharacterSceneID.generated.h"

UENUM(BlueprintType)
enum class EUIMain3DCharacterSceneID : uint8 {
    Default,
    ChangeBase,
    ChangeTarget,
    Equip,
    MAX,
};

