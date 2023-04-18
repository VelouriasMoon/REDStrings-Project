#pragma once
#include "CoreMinimal.h"
#include "ELoadingScreenType.generated.h"

UENUM(BlueprintType)
enum class ELoadingScreenType : uint8 {
    None,
    Global,
    GlobalEasy,
    ChapterStart,
    Interlude,
    Num,
};

