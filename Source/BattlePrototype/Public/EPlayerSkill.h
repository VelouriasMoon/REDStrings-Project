#pragma once
#include "CoreMinimal.h"
#include "EPlayerSkill.generated.h"

UENUM(BlueprintType)
enum class EPlayerSkill : uint8 {
    WeaponAttackUp1,
    WeaponAttackUp2,
    PsychicAttackUp1,
    PsychicAttackUp2,
    WeaponCrashUp1,
    WeaponCrashUp2,
    PsychicCrashUp1,
    PsychicCrashUp2,
    CrashBonusMoney,
    CrashBonusExp,
    DownEnemyDamageUp,
    PsychicGaugeGainUpAerialCombo,
    AirJump,
    AirDodge1,
    AirDodge2,
    AddAirCombo1,
    AirLongPressAttack,
    AirDodgeAttack,
    ChargeAttack1,
    ChargeAttack2,
    ChargeAttack3,
    JustDodgeAttack,
    AddWeaponCombo1,
    AddWeaponCombo2,
    AddPsychicCombo1,
    AddPsychicCombo2,
    AddAirPsychicCombo1,
    AddAirPsychicCombo2,
    CircleAttack,
    BackStepAttack,
    PsychicSlam,
    BlowRecovery,
    JustDodgeUP,
    PsychicGaugeUp1,
    PsychicGaugeUp2,
    ItemCoolTime,
    ItemUseInvincible,
    AutoPickUpItem,
    AutoRecoveryHP,
    PinchStatusUp,
    BrainCrashExtendTime,
    ResurrectSpeedUp,
    AddAccessory1,
    AddAccessory2,
    SASStack1,
    SASStack2,
    OverKillBonus,
    SASRecover,
    DriveGaugeUp,
    DriveStatusUp,
    DriveRecoveryHP,
    DriveRecastSAS,
    DriveCrashUp,
    DriveExtendTime1,
    DriveExtendTime2,
    BattleBonusUp,
    DriveRecoveryBadStatus,
    DriveHologramRush,
    BrainFieldExtendTime1,
    BrainFieldExtendTime2,
    BrainFieldThrowLV1,
    BrainFieldThrowLV2,
    BrainFieldSwingLV1,
    BrainFieldChargeLV1,
    BrainFieldChargeLV2,
    BrainFieldOverKill,
    NoStockBrainField,
    BrainFieldDamageCut1,
    BrainFieldDamageCut2,
    Max,
};

