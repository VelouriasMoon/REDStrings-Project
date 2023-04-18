#pragma once
#include "CoreMinimal.h"
#include "ETitleAnime.generated.h"

UENUM(BlueprintType)
enum class ETitleAnime : uint8 {
    Default_Idle,
    StartAnime_Idle,
    FastAnime,
    EndingAnime,
    StandUpAnime,
    Num,
};

