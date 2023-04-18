#pragma once
#include "CoreMinimal.h"
#include "EMapGimmickPlayerAnimType.generated.h"

UENUM(BlueprintType)
enum class EMapGimmickPlayerAnimType : uint8 {
    MG_PLANIM_START,
    MG_PLANIM_LOOP,
    MG_PLANIM_END,
    MG_PLANIM_FINISH,
    Num,
};

