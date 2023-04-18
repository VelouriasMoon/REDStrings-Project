#pragma once
#include "CoreMinimal.h"
#include "HCSkillType.generated.h"

UENUM(BlueprintType)
enum class HCSkillType : uint8 {
    Default,
    Slash,
    ThrowingKnife,
    ThrowingKnifeOutRange,
    Torch,
    Hammer,
    Gun,
    Glove,
    Crossbow,
    Chainsaw,
    Stick,
    Knife,
    PsychicObjectStart,
    Throw = 0xC,
    Drop,
    Brandish,
    Unique,
    UniqueWater,
    PsychicObjectEnd = 0x10,
    EnemyHorn,
    EnemyCoatingPunch,
    EnpcSpTrigger,
    Num,
};

