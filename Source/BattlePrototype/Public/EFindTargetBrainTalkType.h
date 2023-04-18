#pragma once
#include "CoreMinimal.h"
#include "EFindTargetBrainTalkType.generated.h"

UENUM(BlueprintType)
enum class EFindTargetBrainTalkType : uint8 {
    None,
    Common,
    Strong,
    WeakFire,
    WeakElectric,
    WeakMetal,
    WeakTelepo,
    WeakAccelerate,
    WeakCopy,
    WeakSeeThrough,
    WeakStealth,
    QuestEnemy,
};

