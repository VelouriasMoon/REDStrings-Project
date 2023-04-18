#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPlayerID.h"
#include "E_SASKindNative.h"
#include "HCHitResult.h"
#include "HCSkillCommonInfo.h"
#include "NexusDriveActivateDelegate.h"
#include "NexusDriveSasBeginDelegate.h"
#include "NexusDriveSasEndDelegate.h"
#include "NexusDriveComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UNexusDriveComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<E_SASKindNative> ActiveSasList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<E_SASKindNative> ActiveNpcDriveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<E_SASKindNative> DelayDriveEndCheckList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<E_SASKindNative> DelayDriveEndList;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNexusDriveActivate DispatchNexusDriveActivate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNexusDriveSasBegin DispatchNexusDriveBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNexusDriveSasEnd DispatchNexusDriveEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeeThroughParam_JustDodgeAcceptTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeeThroughParam_HealRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeeThroughParam_NpcHealRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeeThroughParam_AddSasGaugeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeeThroughParam_AddDriveGaugeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeeThroughParam_JustDodgeCheckScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealthParam_AssasinAttack_CrashRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealthParam_AssasinAttack_Cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealthParam_AssasinAttack_Knockback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealthParam_AssasinAttack_Down;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MetalParam_WeaponAttackRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MetalParam_DamageRemindSasTimeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_Fire_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_Electric_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_Charge_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_Charge_ch0100_LV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_Charge_ch0100_LV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_Charge_Fire_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_Charge_Fire_ch0100_LV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_Charge_Fire_ch0100_LV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_Charge_Electric_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_Charge_Electric_ch0100_LV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_Charge_Electric_ch0100_LV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_Charge2_Electric_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_Charge2_Electric_ch0100_LV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_Charge2_Electric_ch0100_LV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_Assassin_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_Fire_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_Electric_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_Charge_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_Charge_Fire_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_Charge2_Fire_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_Charge_Electric_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DamageRate_Assassin_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Fire_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Electric_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_ch0100_LV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_ch0100_LV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_Fire_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_Fire_ch0100_LV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_Fire_ch0100_LV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_Electric_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_Electric_ch0100_LV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_Electric_ch0100_LV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge2_Electric_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge2_Electric_ch0100_LV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge2_Electric_ch0100_LV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Assassin_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Fire_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Electric_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_Fire_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge2_Fire_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_Electric_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Assassin_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Fire_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Electric_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_ch0100_LV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_ch0100_LV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_Fire_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_Fire_ch0100_LV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_Fire_ch0100_LV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_Electric_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_Electric_ch0100_LV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_Electric_ch0100_LV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge2_Electric_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge2_Electric_ch0100_LV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge2_Electric_ch0100_LV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Assassin_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Fire_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Electric_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_Fire_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge2_Fire_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_Electric_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Assassin_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Fire_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Electric_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_ch0100_LV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_ch0100_LV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_Fire_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_Fire_ch0100_LV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_Fire_ch0100_LV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_Electric_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_Electric_ch0100_LV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_Electric_ch0100_LV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge2_Electric_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge2_Electric_ch0100_LV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge2_Electric_ch0100_LV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Assassin_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Fire_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Electric_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_Fire_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge2_Fire_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_Electric_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Assassin_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Fire_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Electric_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_ch0100_LV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_ch0100_LV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_Fire_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_Fire_ch0100_LV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_Fire_ch0100_LV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_Electric_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_Electric_ch0100_LV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_Electric_ch0100_LV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge2_Electric_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge2_Electric_ch0100_LV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge2_Electric_ch0100_LV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Assassin_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Fire_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Electric_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_Fire_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge2_Fire_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_Electric_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Assassin_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Fire_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Electric_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_ch0100_LV2_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_ch0100_LV3_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_Fire_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_Fire_ch0100_LV2_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_Fire_ch0100_LV3_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_Electric_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_Electric_ch0100_LV2_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_Electric_ch0100_LV3_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge2_Electric_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge2_Electric_ch0100_LV2_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge2_Electric_ch0100_LV3_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Assassin_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Fire_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Electric_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_Fire_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge2_Fire_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Charge_Electric_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_CrashRate_Assassin_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Fire_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Electric_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_ch0100_LV2_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_ch0100_LV3_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_Fire_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_Fire_ch0100_LV2_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_Fire_ch0100_LV3_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_Electric_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_Electric_ch0100_LV2_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_Electric_ch0100_LV3_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge2_Electric_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge2_Electric_ch0100_LV2_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge2_Electric_ch0100_LV3_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Assassin_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Fire_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Electric_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_Fire_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge2_Fire_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Charge_Electric_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_WinceRate_Assassin_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Fire_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Electric_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_ch0100_LV2_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_ch0100_LV3_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_Fire_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_Fire_ch0100_LV2_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_Fire_ch0100_LV3_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_Electric_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_Electric_ch0100_LV2_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_Electric_ch0100_LV3_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge2_Electric_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge2_Electric_ch0100_LV2_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge2_Electric_ch0100_LV3_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Assassin_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Fire_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Electric_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_Fire_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge2_Fire_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Charge_Electric_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_KnockbackRate_Assassin_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Fire_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Electric_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_ch0100_LV2_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_ch0100_LV3_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_Fire_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_Fire_ch0100_LV2_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_Fire_ch0100_LV3_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_Electric_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_Electric_ch0100_LV2_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_Electric_ch0100_LV3_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge2_Electric_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge2_Electric_ch0100_LV2_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge2_Electric_ch0100_LV3_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Assassin_ch0100_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Fire_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Electric_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_Fire_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge2_Fire_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Charge_Electric_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelepoParam_DownRate_Assassin_ch0200_JewelPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceleratorParam_WeaponDamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceleratorParam_ExtendSasTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceleratorParam_ExtendSasTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PsychicParam_PsychicFieldCostRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PsychicParam_PsychicField_Down;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationSec_Psychic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationSecWith_Psychic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationSec_Fire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationSecWith_Fire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationSec_Metal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationSecWith_Metal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationSec_SeeThrough;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationSecWith_SeeThrough;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationSec_Telepo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationSecWith_Telepo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationSec_Stealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationSecWith_Stealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationSec_Electric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationSecWith_Electric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationSec_Copy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationSecWith_Copy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationSec_Accelarator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationSecWith_Accelarator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealHPRate_Weapon_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealHPRate_Psychic_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealHPRate_Weapon_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealHPRate_Psychic_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombinationVisionCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombinationVisionCost_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombinationVisionCost_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombinationVisionCost_ch0300;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombinationVisionCost_ch0400;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombinationVisionCost_ch0500;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombinationVisionCost_ch0600;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombinationVisionCost_ch0700;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombinationVisionCost_ch0800;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombinationVisionCost_ch0900;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombinationVisionCost_ch1000;
    
    UNexusDriveComponent();
    UFUNCTION(BlueprintCallable)
    void UnregisterDelayDriveEnd(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterActiveSasKind(E_SASKindNative SasKind);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterActiveDriveNpc(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    void SetChargeAttackLevel(int32 InChargeAttackLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackComboData(int32 InChargeSkillLevel, bool bInChargeAttackSasChange);
    
    UFUNCTION(BlueprintCallable)
    void ResetAcceleratorExtendTime();
    
    UFUNCTION(BlueprintCallable)
    void RegisterDelayDriveEnd(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    void RegisterActiveSasKind(E_SASKindNative SasKind);
    
    UFUNCTION(BlueprintCallable)
    void RegisterActiveDriveNpc(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    bool IsRegisterActiveSasKindAny();
    
    UFUNCTION(BlueprintCallable)
    bool IsRegisterActiveSasKind(E_SASKindNative SasKind);
    
    UFUNCTION(BlueprintCallable)
    bool IsRegisterActiveDriveNpc(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableNexusDriveSasAny();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableNexusDriveSas(E_SASKindNative SasKind);
    
    UFUNCTION(BlueprintCallable)
    void GetSasActivationSec(bool& bEanble, float& OutActivationSec, E_SASKindNative SasKind, bool bBattleMember);
    
    UFUNCTION(BlueprintCallable)
    bool GetNexusDriveTelepoParam(float& OutDamageRate, float& OutCrashRate, float& OutWinceRate, float& OutKnockbackRate, float& OutDownRate, const FHCSkillCommonInfo& InSkill, bool bInJewelPool);
    
    UFUNCTION(BlueprintCallable)
    float GetCombinationVisionCostRate(E_SASKindNative SasKind);
    
    UFUNCTION(BlueprintCallable)
    float GetAttackHitHealRate(const FHCHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    float GetAcceleratorExtendTime(float ElapsedTime);
    
};

