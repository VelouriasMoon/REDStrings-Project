#pragma once
#include "CoreMinimal.h"
#include "EWeaponAttach.generated.h"

UENUM(BlueprintType)
enum EWeaponAttach {
    WA_Right,
    WA_Left,
    WA_Custom0,
    WA_Custom1,
    WA_Custom2,
    WA_Custom3,
    WA_Custom4,
    WA_Custom5,
    WA_Num,
    WA_MAX UMETA(Hidden),
};

