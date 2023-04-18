#pragma once
#include "CoreMinimal.h"
#include "EEnemyGuardType_em0320.generated.h"

UENUM(BlueprintType)
enum class EEnemyGuardType_em0320 : uint8 {
    GuardFront_Top,
    GuardToBack,
    GuardBack_Top,
    EEnemyGuardType_MAX UMETA(Hidden),
};

