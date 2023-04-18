#pragma once
#include "CoreMinimal.h"
#include "EPlayerActionKind.generated.h"

UENUM(BlueprintType)
enum class EPlayerActionKind : uint8 {
    Event,
    Idle,
    BoringIdle,
    WalkRun,
    Sprint,
    SprintBrake,
    Jump,
    Fall,
    Land,
    Dodge,
    Attack,
    Damage,
    DamageBlow,
    Down,
    WakeUp,
    UseItem,
    Dead,
    BrainCrash,
    AfterEvent,
    BrainCrashDamage,
    CaptureMapGimmick,
    CancelMapGimmick,
    Drive,
    RecoverBlowDamage,
    EventMotion,
    ControlPsychicObject,
    Ressurect,
    Revive,
    SprintTurnBack,
    EnpcSas,
};

