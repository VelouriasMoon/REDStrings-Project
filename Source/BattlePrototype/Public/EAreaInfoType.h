#pragma once
#include "CoreMinimal.h"
#include "EAreaInfoType.generated.h"

UENUM(BlueprintType)
enum class EAreaInfoType : uint8 {
    BG,
    Enemy,
    Event,
    NPC,
    NObj,
    ArrangePoint,
    SceneType,
    NUM,
};

