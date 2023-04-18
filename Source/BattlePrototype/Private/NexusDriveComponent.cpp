#include "NexusDriveComponent.h"

void UNexusDriveComponent::UnregisterDelayDriveEnd(EPlayerID playerId) {
}

void UNexusDriveComponent::UnregisterActiveSasKind(E_SASKindNative SasKind) {
}

void UNexusDriveComponent::UnregisterActiveDriveNpc(EPlayerID playerId) {
}

void UNexusDriveComponent::SetChargeAttackLevel(int32 InChargeAttackLevel) {
}

void UNexusDriveComponent::SetAttackComboData(int32 InChargeSkillLevel, bool bInChargeAttackSasChange) {
}

void UNexusDriveComponent::ResetAcceleratorExtendTime() {
}

void UNexusDriveComponent::RegisterDelayDriveEnd(EPlayerID playerId) {
}

void UNexusDriveComponent::RegisterActiveSasKind(E_SASKindNative SasKind) {
}

void UNexusDriveComponent::RegisterActiveDriveNpc(EPlayerID playerId) {
}

bool UNexusDriveComponent::IsRegisterActiveSasKindAny() {
    return false;
}

bool UNexusDriveComponent::IsRegisterActiveSasKind(E_SASKindNative SasKind) {
    return false;
}

bool UNexusDriveComponent::IsRegisterActiveDriveNpc(EPlayerID playerId) {
    return false;
}

bool UNexusDriveComponent::IsEnableNexusDriveSasAny() {
    return false;
}

bool UNexusDriveComponent::IsEnableNexusDriveSas(E_SASKindNative SasKind) {
    return false;
}

void UNexusDriveComponent::GetSasActivationSec(bool& bEanble, float& OutActivationSec, E_SASKindNative SasKind, bool bBattleMember) {
}

bool UNexusDriveComponent::GetNexusDriveTelepoParam(float& OutDamageRate, float& OutCrashRate, float& OutWinceRate, float& OutKnockbackRate, float& OutDownRate, const FHCSkillCommonInfo& InSkill, bool bInJewelPool) {
    return false;
}

float UNexusDriveComponent::GetCombinationVisionCostRate(E_SASKindNative SasKind) {
    return 0.0f;
}

float UNexusDriveComponent::GetAttackHitHealRate(const FHCHitResult& HitResult) {
    return 0.0f;
}

float UNexusDriveComponent::GetAcceleratorExtendTime(float ElapsedTime) {
    return 0.0f;
}

UNexusDriveComponent::UNexusDriveComponent() {
    this->SeeThroughParam_JustDodgeAcceptTime = 0.00f;
    this->SeeThroughParam_HealRate = 0.00f;
    this->SeeThroughParam_NpcHealRate = 0.00f;
    this->SeeThroughParam_AddSasGaugeRate = 0.00f;
    this->SeeThroughParam_AddDriveGaugeRate = 0.00f;
    this->SeeThroughParam_JustDodgeCheckScale = 0.00f;
    this->StealthParam_AssasinAttack_CrashRate = 0.00f;
    this->StealthParam_AssasinAttack_Cost = 0.00f;
    this->StealthParam_AssasinAttack_Knockback = 0.00f;
    this->StealthParam_AssasinAttack_Down = 0.00f;
    this->MetalParam_WeaponAttackRate = 0.00f;
    this->MetalParam_DamageRemindSasTimeRate = 0.00f;
    this->TelepoParam_DamageRate_ch0100 = 0.00f;
    this->TelepoParam_DamageRate_Fire_ch0100 = 0.00f;
    this->TelepoParam_DamageRate_Electric_ch0100 = 0.00f;
    this->TelepoParam_DamageRate_Charge_ch0100 = 0.00f;
    this->TelepoParam_DamageRate_Charge_ch0100_LV2 = 0.00f;
    this->TelepoParam_DamageRate_Charge_ch0100_LV3 = 0.00f;
    this->TelepoParam_DamageRate_Charge_Fire_ch0100 = 0.00f;
    this->TelepoParam_DamageRate_Charge_Fire_ch0100_LV2 = 0.00f;
    this->TelepoParam_DamageRate_Charge_Fire_ch0100_LV3 = 0.00f;
    this->TelepoParam_DamageRate_Charge_Electric_ch0100 = 0.00f;
    this->TelepoParam_DamageRate_Charge_Electric_ch0100_LV2 = 0.00f;
    this->TelepoParam_DamageRate_Charge_Electric_ch0100_LV3 = 0.00f;
    this->TelepoParam_DamageRate_Charge2_Electric_ch0100 = 0.00f;
    this->TelepoParam_DamageRate_Charge2_Electric_ch0100_LV2 = 0.00f;
    this->TelepoParam_DamageRate_Charge2_Electric_ch0100_LV3 = 0.00f;
    this->TelepoParam_DamageRate_Assassin_ch0100 = 0.00f;
    this->TelepoParam_DamageRate_ch0200 = 0.00f;
    this->TelepoParam_DamageRate_Fire_ch0200 = 0.00f;
    this->TelepoParam_DamageRate_Electric_ch0200 = 0.00f;
    this->TelepoParam_DamageRate_Charge_ch0200 = 0.00f;
    this->TelepoParam_DamageRate_Charge_Fire_ch0200 = 0.00f;
    this->TelepoParam_DamageRate_Charge2_Fire_ch0200 = 0.00f;
    this->TelepoParam_DamageRate_Charge_Electric_ch0200 = 0.00f;
    this->TelepoParam_DamageRate_Assassin_ch0200 = 0.00f;
    this->TelepoParam_CrashRate_ch0100 = 0.00f;
    this->TelepoParam_CrashRate_Fire_ch0100 = 0.00f;
    this->TelepoParam_CrashRate_Electric_ch0100 = 0.00f;
    this->TelepoParam_CrashRate_Charge_ch0100 = 0.00f;
    this->TelepoParam_CrashRate_Charge_ch0100_LV2 = 0.00f;
    this->TelepoParam_CrashRate_Charge_ch0100_LV3 = 0.00f;
    this->TelepoParam_CrashRate_Charge_Fire_ch0100 = 0.00f;
    this->TelepoParam_CrashRate_Charge_Fire_ch0100_LV2 = 0.00f;
    this->TelepoParam_CrashRate_Charge_Fire_ch0100_LV3 = 0.00f;
    this->TelepoParam_CrashRate_Charge_Electric_ch0100 = 0.00f;
    this->TelepoParam_CrashRate_Charge_Electric_ch0100_LV2 = 0.00f;
    this->TelepoParam_CrashRate_Charge_Electric_ch0100_LV3 = 0.00f;
    this->TelepoParam_CrashRate_Charge2_Electric_ch0100 = 0.00f;
    this->TelepoParam_CrashRate_Charge2_Electric_ch0100_LV2 = 0.00f;
    this->TelepoParam_CrashRate_Charge2_Electric_ch0100_LV3 = 0.00f;
    this->TelepoParam_CrashRate_Assassin_ch0100 = 0.00f;
    this->TelepoParam_CrashRate_ch0200 = 0.00f;
    this->TelepoParam_CrashRate_Fire_ch0200 = 0.00f;
    this->TelepoParam_CrashRate_Electric_ch0200 = 0.00f;
    this->TelepoParam_CrashRate_Charge_ch0200 = 0.00f;
    this->TelepoParam_CrashRate_Charge_Fire_ch0200 = 0.00f;
    this->TelepoParam_CrashRate_Charge2_Fire_ch0200 = 0.00f;
    this->TelepoParam_CrashRate_Charge_Electric_ch0200 = 0.00f;
    this->TelepoParam_CrashRate_Assassin_ch0200 = 0.00f;
    this->TelepoParam_WinceRate_ch0100 = 0.00f;
    this->TelepoParam_WinceRate_Fire_ch0100 = 0.00f;
    this->TelepoParam_WinceRate_Electric_ch0100 = 0.00f;
    this->TelepoParam_WinceRate_Charge_ch0100 = 0.00f;
    this->TelepoParam_WinceRate_Charge_ch0100_LV2 = 0.00f;
    this->TelepoParam_WinceRate_Charge_ch0100_LV3 = 0.00f;
    this->TelepoParam_WinceRate_Charge_Fire_ch0100 = 0.00f;
    this->TelepoParam_WinceRate_Charge_Fire_ch0100_LV2 = 0.00f;
    this->TelepoParam_WinceRate_Charge_Fire_ch0100_LV3 = 0.00f;
    this->TelepoParam_WinceRate_Charge_Electric_ch0100 = 0.00f;
    this->TelepoParam_WinceRate_Charge_Electric_ch0100_LV2 = 0.00f;
    this->TelepoParam_WinceRate_Charge_Electric_ch0100_LV3 = 0.00f;
    this->TelepoParam_WinceRate_Charge2_Electric_ch0100 = 0.00f;
    this->TelepoParam_WinceRate_Charge2_Electric_ch0100_LV2 = 0.00f;
    this->TelepoParam_WinceRate_Charge2_Electric_ch0100_LV3 = 0.00f;
    this->TelepoParam_WinceRate_Assassin_ch0100 = 0.00f;
    this->TelepoParam_WinceRate_ch0200 = 0.00f;
    this->TelepoParam_WinceRate_Fire_ch0200 = 0.00f;
    this->TelepoParam_WinceRate_Electric_ch0200 = 0.00f;
    this->TelepoParam_WinceRate_Charge_ch0200 = 0.00f;
    this->TelepoParam_WinceRate_Charge_Fire_ch0200 = 0.00f;
    this->TelepoParam_WinceRate_Charge2_Fire_ch0200 = 0.00f;
    this->TelepoParam_WinceRate_Charge_Electric_ch0200 = 0.00f;
    this->TelepoParam_WinceRate_Assassin_ch0200 = 0.00f;
    this->TelepoParam_KnockbackRate_ch0100 = 0.00f;
    this->TelepoParam_KnockbackRate_Fire_ch0100 = 0.00f;
    this->TelepoParam_KnockbackRate_Electric_ch0100 = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_ch0100 = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_ch0100_LV2 = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_ch0100_LV3 = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_Fire_ch0100 = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_Fire_ch0100_LV2 = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_Fire_ch0100_LV3 = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_Electric_ch0100 = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_Electric_ch0100_LV2 = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_Electric_ch0100_LV3 = 0.00f;
    this->TelepoParam_KnockbackRate_Charge2_Electric_ch0100 = 0.00f;
    this->TelepoParam_KnockbackRate_Charge2_Electric_ch0100_LV2 = 0.00f;
    this->TelepoParam_KnockbackRate_Charge2_Electric_ch0100_LV3 = 0.00f;
    this->TelepoParam_KnockbackRate_Assassin_ch0100 = 0.00f;
    this->TelepoParam_KnockbackRate_ch0200 = 0.00f;
    this->TelepoParam_KnockbackRate_Fire_ch0200 = 0.00f;
    this->TelepoParam_KnockbackRate_Electric_ch0200 = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_ch0200 = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_Fire_ch0200 = 0.00f;
    this->TelepoParam_KnockbackRate_Charge2_Fire_ch0200 = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_Electric_ch0200 = 0.00f;
    this->TelepoParam_KnockbackRate_Assassin_ch0200 = 0.00f;
    this->TelepoParam_DownRate_ch0100 = 0.00f;
    this->TelepoParam_DownRate_Fire_ch0100 = 0.00f;
    this->TelepoParam_DownRate_Electric_ch0100 = 0.00f;
    this->TelepoParam_DownRate_Charge_ch0100 = 0.00f;
    this->TelepoParam_DownRate_Charge_ch0100_LV2 = 0.00f;
    this->TelepoParam_DownRate_Charge_ch0100_LV3 = 0.00f;
    this->TelepoParam_DownRate_Charge_Fire_ch0100 = 0.00f;
    this->TelepoParam_DownRate_Charge_Fire_ch0100_LV2 = 0.00f;
    this->TelepoParam_DownRate_Charge_Fire_ch0100_LV3 = 0.00f;
    this->TelepoParam_DownRate_Charge_Electric_ch0100 = 0.00f;
    this->TelepoParam_DownRate_Charge_Electric_ch0100_LV2 = 0.00f;
    this->TelepoParam_DownRate_Charge_Electric_ch0100_LV3 = 0.00f;
    this->TelepoParam_DownRate_Charge2_Electric_ch0100 = 0.00f;
    this->TelepoParam_DownRate_Charge2_Electric_ch0100_LV2 = 0.00f;
    this->TelepoParam_DownRate_Charge2_Electric_ch0100_LV3 = 0.00f;
    this->TelepoParam_DownRate_Assassin_ch0100 = 0.00f;
    this->TelepoParam_DownRate_ch0200 = 0.00f;
    this->TelepoParam_DownRate_Fire_ch0200 = 0.00f;
    this->TelepoParam_DownRate_Electric_ch0200 = 0.00f;
    this->TelepoParam_DownRate_Charge_ch0200 = 0.00f;
    this->TelepoParam_DownRate_Charge_Fire_ch0200 = 0.00f;
    this->TelepoParam_DownRate_Charge2_Fire_ch0200 = 0.00f;
    this->TelepoParam_DownRate_Charge_Electric_ch0200 = 0.00f;
    this->TelepoParam_DownRate_Assassin_ch0200 = 0.00f;
    this->TelepoParam_CrashRate_ch0100_JewelPool = 0.00f;
    this->TelepoParam_CrashRate_Fire_ch0100_JewelPool = 0.00f;
    this->TelepoParam_CrashRate_Electric_ch0100_JewelPool = 0.00f;
    this->TelepoParam_CrashRate_Charge_ch0100_JewelPool = 0.00f;
    this->TelepoParam_CrashRate_Charge_ch0100_LV2_JewelPool = 0.00f;
    this->TelepoParam_CrashRate_Charge_ch0100_LV3_JewelPool = 0.00f;
    this->TelepoParam_CrashRate_Charge_Fire_ch0100_JewelPool = 0.00f;
    this->TelepoParam_CrashRate_Charge_Fire_ch0100_LV2_JewelPool = 0.00f;
    this->TelepoParam_CrashRate_Charge_Fire_ch0100_LV3_JewelPool = 0.00f;
    this->TelepoParam_CrashRate_Charge_Electric_ch0100_JewelPool = 0.00f;
    this->TelepoParam_CrashRate_Charge_Electric_ch0100_LV2_JewelPool = 0.00f;
    this->TelepoParam_CrashRate_Charge_Electric_ch0100_LV3_JewelPool = 0.00f;
    this->TelepoParam_CrashRate_Charge2_Electric_ch0100_JewelPool = 0.00f;
    this->TelepoParam_CrashRate_Charge2_Electric_ch0100_LV2_JewelPool = 0.00f;
    this->TelepoParam_CrashRate_Charge2_Electric_ch0100_LV3_JewelPool = 0.00f;
    this->TelepoParam_CrashRate_Assassin_ch0100_JewelPool = 0.00f;
    this->TelepoParam_CrashRate_ch0200_JewelPool = 0.00f;
    this->TelepoParam_CrashRate_Fire_ch0200_JewelPool = 0.00f;
    this->TelepoParam_CrashRate_Electric_ch0200_JewelPool = 0.00f;
    this->TelepoParam_CrashRate_Charge_ch0200_JewelPool = 0.00f;
    this->TelepoParam_CrashRate_Charge_Fire_ch0200_JewelPool = 0.00f;
    this->TelepoParam_CrashRate_Charge2_Fire_ch0200_JewelPool = 0.00f;
    this->TelepoParam_CrashRate_Charge_Electric_ch0200_JewelPool = 0.00f;
    this->TelepoParam_CrashRate_Assassin_ch0200_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_ch0100_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_Fire_ch0100_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_Electric_ch0100_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_Charge_ch0100_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_Charge_ch0100_LV2_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_Charge_ch0100_LV3_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_Charge_Fire_ch0100_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_Charge_Fire_ch0100_LV2_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_Charge_Fire_ch0100_LV3_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_Charge_Electric_ch0100_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_Charge_Electric_ch0100_LV2_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_Charge_Electric_ch0100_LV3_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_Charge2_Electric_ch0100_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_Charge2_Electric_ch0100_LV2_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_Charge2_Electric_ch0100_LV3_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_Assassin_ch0100_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_ch0200_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_Fire_ch0200_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_Electric_ch0200_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_Charge_ch0200_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_Charge_Fire_ch0200_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_Charge2_Fire_ch0200_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_Charge_Electric_ch0200_JewelPool = 0.00f;
    this->TelepoParam_WinceRate_Assassin_ch0200_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_ch0100_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_Fire_ch0100_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_Electric_ch0100_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_ch0100_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_ch0100_LV2_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_ch0100_LV3_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_Fire_ch0100_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_Fire_ch0100_LV2_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_Fire_ch0100_LV3_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_Electric_ch0100_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_Electric_ch0100_LV2_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_Electric_ch0100_LV3_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_Charge2_Electric_ch0100_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_Charge2_Electric_ch0100_LV2_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_Charge2_Electric_ch0100_LV3_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_Assassin_ch0100_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_ch0200_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_Fire_ch0200_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_Electric_ch0200_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_ch0200_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_Fire_ch0200_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_Charge2_Fire_ch0200_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_Charge_Electric_ch0200_JewelPool = 0.00f;
    this->TelepoParam_KnockbackRate_Assassin_ch0200_JewelPool = 0.00f;
    this->TelepoParam_DownRate_ch0100_JewelPool = 0.00f;
    this->TelepoParam_DownRate_Fire_ch0100_JewelPool = 0.00f;
    this->TelepoParam_DownRate_Electric_ch0100_JewelPool = 0.00f;
    this->TelepoParam_DownRate_Charge_ch0100_JewelPool = 0.00f;
    this->TelepoParam_DownRate_Charge_ch0100_LV2_JewelPool = 0.00f;
    this->TelepoParam_DownRate_Charge_ch0100_LV3_JewelPool = 0.00f;
    this->TelepoParam_DownRate_Charge_Fire_ch0100_JewelPool = 0.00f;
    this->TelepoParam_DownRate_Charge_Fire_ch0100_LV2_JewelPool = 0.00f;
    this->TelepoParam_DownRate_Charge_Fire_ch0100_LV3_JewelPool = 0.00f;
    this->TelepoParam_DownRate_Charge_Electric_ch0100_JewelPool = 0.00f;
    this->TelepoParam_DownRate_Charge_Electric_ch0100_LV2_JewelPool = 0.00f;
    this->TelepoParam_DownRate_Charge_Electric_ch0100_LV3_JewelPool = 0.00f;
    this->TelepoParam_DownRate_Charge2_Electric_ch0100_JewelPool = 0.00f;
    this->TelepoParam_DownRate_Charge2_Electric_ch0100_LV2_JewelPool = 0.00f;
    this->TelepoParam_DownRate_Charge2_Electric_ch0100_LV3_JewelPool = 0.00f;
    this->TelepoParam_DownRate_Assassin_ch0100_JewelPool = 0.00f;
    this->TelepoParam_DownRate_ch0200_JewelPool = 0.00f;
    this->TelepoParam_DownRate_Fire_ch0200_JewelPool = 0.00f;
    this->TelepoParam_DownRate_Electric_ch0200_JewelPool = 0.00f;
    this->TelepoParam_DownRate_Charge_ch0200_JewelPool = 0.00f;
    this->TelepoParam_DownRate_Charge_Fire_ch0200_JewelPool = 0.00f;
    this->TelepoParam_DownRate_Charge2_Fire_ch0200_JewelPool = 0.00f;
    this->TelepoParam_DownRate_Charge_Electric_ch0200_JewelPool = 0.00f;
    this->TelepoParam_DownRate_Assassin_ch0200_JewelPool = 0.00f;
    this->AcceleratorParam_WeaponDamageRate = 0.00f;
    this->AcceleratorParam_ExtendSasTime = 0.00f;
    this->AcceleratorParam_ExtendSasTimeLimit = 0.00f;
    this->PsychicParam_PsychicFieldCostRate = 0.00f;
    this->PsychicParam_PsychicField_Down = 0.00f;
    this->ActivationSec_Psychic = 0.00f;
    this->ActivationSecWith_Psychic = 0.00f;
    this->ActivationSec_Fire = 0.00f;
    this->ActivationSecWith_Fire = 0.00f;
    this->ActivationSec_Metal = 0.00f;
    this->ActivationSecWith_Metal = 0.00f;
    this->ActivationSec_SeeThrough = 0.00f;
    this->ActivationSecWith_SeeThrough = 0.00f;
    this->ActivationSec_Telepo = 0.00f;
    this->ActivationSecWith_Telepo = 0.00f;
    this->ActivationSec_Stealth = 0.00f;
    this->ActivationSecWith_Stealth = 0.00f;
    this->ActivationSec_Electric = 0.00f;
    this->ActivationSecWith_Electric = 0.00f;
    this->ActivationSec_Copy = 0.00f;
    this->ActivationSecWith_Copy = 0.00f;
    this->ActivationSec_Accelarator = 0.00f;
    this->ActivationSecWith_Accelarator = 0.00f;
    this->HealHPRate_Weapon_ch0100 = 0.00f;
    this->HealHPRate_Psychic_ch0100 = 0.00f;
    this->HealHPRate_Weapon_ch0200 = 0.00f;
    this->HealHPRate_Psychic_ch0200 = 0.00f;
    this->CombinationVisionCost = 0.00f;
    this->CombinationVisionCost_ch0100 = 0.00f;
    this->CombinationVisionCost_ch0200 = 0.00f;
    this->CombinationVisionCost_ch0300 = 0.00f;
    this->CombinationVisionCost_ch0400 = 0.00f;
    this->CombinationVisionCost_ch0500 = 0.00f;
    this->CombinationVisionCost_ch0600 = 0.00f;
    this->CombinationVisionCost_ch0700 = 0.00f;
    this->CombinationVisionCost_ch0800 = 0.00f;
    this->CombinationVisionCost_ch0900 = 0.00f;
    this->CombinationVisionCost_ch1000 = 0.00f;
}

