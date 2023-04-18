#pragma once
#include "CoreMinimal.h"
#include "EnemyDamageDownAnimKind.generated.h"

UENUM(BlueprintType)
enum class EnemyDamageDownAnimKind : uint8 {
    Start,
    Wait,
    Up,
    LaunchUp,
    LaunchDown,
    Blow1,
    Blow2,
    Landing,
    SpecialDown1,
    SpecialDown2,
    SpecialDownFly1,
    SpecialDownFly2,
    ElectricDown,
    FlyChaseDown,
    FlyFinishDown,
    PressDown,
    PressDown02,
    PressDownLoop,
};

