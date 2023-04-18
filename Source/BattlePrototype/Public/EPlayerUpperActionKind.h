#pragma once
#include "CoreMinimal.h"
#include "EPlayerUpperActionKind.generated.h"

UENUM(BlueprintType)
enum class EPlayerUpperActionKind : uint8 {
    None,
    ChangeBattle,
    DamageSAS,
    Attack,
    PsychicObjCapture,
    PsychicObjAttack,
};

