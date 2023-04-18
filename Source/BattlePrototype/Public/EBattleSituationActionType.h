#pragma once
#include "CoreMinimal.h"
#include "EBattleSituationActionType.generated.h"

UENUM(BlueprintType)
enum class EBattleSituationActionType : uint8 {
    HitWeak,
    JustDodge,
    PsychicCombo,
    Damage,
    DamageDown,
};

