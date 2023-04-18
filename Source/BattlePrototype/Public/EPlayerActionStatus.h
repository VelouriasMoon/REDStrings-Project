#pragma once
#include "CoreMinimal.h"
#include "EPlayerActionStatus.generated.h"

UENUM(BlueprintType)
enum class EPlayerActionStatus : uint8 {
    END_ACTION,
    FULL_ACTION,
    AIR_ACTIONABLE,
    DODGE,
    JUST_DODGE,
    NOT_FALL,
    ATTACK,
    SPRINT,
    IGNORE_LAND_CHECK,
    DOWN,
    DAMAGE,
    BLOW_DAMAGE,
    ENABLE_MOVEMENTINPUT,
    PSYCHIC_COMBO,
    PERMIT_DODGE,
    BRAIN_CRASH_DAMAGE,
    WAKEUP,
    BRAIN_CRASH,
    CANCEL_PSYCHIC_COMBO,
    CAPTURE_MAPGIMMICK,
    CONTROL_PSYCHIC_OBJECT,
    EXEC_MAPGIMMICK,
    ENABLE_BACKSTEP_ATTACK,
    JUMP,
    SKIP_WALK_START,
    LAUNCH_DAMAGE,
    EVENT_END_DOWN,
    LANDINGABLE,
    DISABLE_SAS_CONTROL,
    DISABLE_ATTACK_STEALTH_OFF,
    EXEC_UNIQUE_PSYCHIC,
};

