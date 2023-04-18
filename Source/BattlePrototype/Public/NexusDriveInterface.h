#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EPlayerID.h"
#include "E_SASKindNative.h"
#include "HCHitResult.h"
#include "HCSkillCommonInfo.h"
#include "NexusDriveInterface.generated.h"

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UNexusDriveInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API INexusDriveInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnregisterNpcDriveForNexusDrive(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnregisterDelayDriveEnd(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegisterNpcDriveForNexusDrive(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegisterDelayDriveEnd(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NexusDriveAttackHitRecovery(const FHCHitResult& HitResult, bool bCopyPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsRegisterNpcDriveForNexusDrive(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsRegisterActiveSasKindAny();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsActiveNexusDriveSas(E_SASKindNative kind);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsActiveNexusDriveAny();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetNexusDriveTelepoDamageRateForJewelPool(float& OutCrashRate, float& OutWinceRate, float& OutKnockbackRate, float& OutDownRate, const FHCSkillCommonInfo& InSkill);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetNexusDriveTelepoAttackRate(float& OutDamageRate, float& OutCrashRate, float& OutWinceRate, float& OutKnockbackRate, float& OutDownRate, const FHCSkillCommonInfo& InSkill);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetNexusDriveStealth_AttackParam(float& OutCrashRate, float& OutKnockback, float& OutDown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetNexusDrivePsychic_PsychicFieldDown(float& OutDown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetNexusDriveMetal_DamageRate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetNexusDriveCombinationVisionCost(float& OutCost, E_SASKindNative SasKind);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetNexusDriveAccelerator_DamageRate();
    
};

