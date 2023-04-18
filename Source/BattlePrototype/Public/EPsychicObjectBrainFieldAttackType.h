#pragma once
#include "CoreMinimal.h"
#include "EPsychicObjectBrainFieldAttackType.generated.h"

UENUM(BlueprintType)
enum class EPsychicObjectBrainFieldAttackType : uint8 {
    SwingCombo1,
    SwingCombo2,
    SwingCombo3,
    SwingComboEx,
    SwingAir,
    ThrowLt,
    ThrowRt,
    ThrowCombo1,
    ThrowCombo2,
    ThrowCombo3,
    ThrowAirLt,
    ThrowAirRt,
    Drop,
    DropCombo,
    DropFinish,
    DropCombo1,
    DropCombo2,
    DropCombo3,
    SwingRight,
    SwingLeft,
    Throw,
    Max,
};

