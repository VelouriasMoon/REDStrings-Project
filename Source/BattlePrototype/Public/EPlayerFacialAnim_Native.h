#pragma once
#include "CoreMinimal.h"
#include "EPlayerFacialAnim_Native.generated.h"

UENUM(BlueprintType)
enum class EPlayerFacialAnim_Native : uint8 {
    Default,
    Smile_S,
    Smile_L,
    Smile_3,
    Angry,
    Sad,
    Surprise_S,
    Surprise_L,
    Fear,
    Aversion,
    Damage_S,
    Damage_L,
    Serious,
    Blushing,
    Dead,
    EX02,
    EX01,
    PhotoModeDefault,
    Num,
    EPlayerFacialAnim_MAX UMETA(Hidden),
};

