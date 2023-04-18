#pragma once
#include "CoreMinimal.h"
#include "ECharacterAttribute.generated.h"

UENUM(BlueprintType)
enum class ECharacterAttribute : uint8 {
    Default,
    Strong,
    WeakFire,
    WeakElectric,
    WeakMetal,
    WeakTelepo,
    WeakAccelerate,
    WeakCopy,
    WeakSeeThrough,
    WeakStealth,
    WeakPsychic,
};

