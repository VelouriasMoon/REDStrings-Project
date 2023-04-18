#pragma once
#include "CoreMinimal.h"
#include "EClearGetterRewardType.generated.h"

UENUM(BlueprintType)
enum class EClearGetterRewardType : uint8 {
    eNone,
    eItem,
    eMoney,
    eExperience,
    eWeaponSkin,
    eEpisode,
};

