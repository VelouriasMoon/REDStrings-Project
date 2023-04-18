#pragma once
#include "CoreMinimal.h"
#include "EAnimeInterlockingsType.generated.h"

UENUM(BlueprintType)
enum class EAnimeInterlockingsType : uint8 {
    None,
    Item,
    Mission,
    KizunaEp,
    Money,
};

