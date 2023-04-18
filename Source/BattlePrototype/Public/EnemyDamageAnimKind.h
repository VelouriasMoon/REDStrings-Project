#pragma once
#include "CoreMinimal.h"
#include "EnemyDamageAnimKind.generated.h"

UENUM(BlueprintType)
enum class EnemyDamageAnimKind : uint8 {
    Wince1,
    Wince2,
    Wince3,
    Wince4,
    KnockBack1,
    KnockBack2,
    KnockBack3,
    KnockBack4,
    SpecialDamage1,
    SpecialDamage2,
    ObjWince1,
    ObjWince2,
    ObjWince3,
    DamageChance1,
    DamageChance2,
    DamageChance3,
    DamageChance4,
};

