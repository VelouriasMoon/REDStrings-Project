#pragma once
#include "CoreMinimal.h"
#include "EEventTriggerCheckType.generated.h"

UENUM(BlueprintType)
enum class EEventTriggerCheckType : uint8 {
    Time,
    EnemyAllDie,
    EnemyNumCheck,
    EndBrainTalk,
    IsTriggerPlayerAnimMontage,
    ObstructActionNumOrTime,
    WinOrLose,
    TagEnemyHpRateCheck,
    DimensionTangleCheck,
    BrainFieldClose,
    EnpcBrainFieldTimeLimitEnd,
    BrainFieldRemainingTime,
    None,
    Max,
};

