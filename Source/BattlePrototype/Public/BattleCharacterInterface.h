#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
//-FallbackName=Vector
#include "EAssassinAttackHit.h"
#include "ECharacterHitPriority.h"
#include "HCHitResult.h"
#include "HitDamageInfo.h"
#include "BattleCharacterInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UBattleCharacterInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IBattleCharacterInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool VibrationControllerInDamageInterface(const FHCHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SufferDamageBeforeInterface(const FHCHitResult& HitResult, int32 Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SufferDamageAfterInterface(const FHCHitResult& HitResult, int32 Damage, int32 takedDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StopBehaviorTree(bool bTickDisable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShakeCameraInDamageInterface(const FHCHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetUseGuts(bool bUse);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetRareSpawnEnemyHpRateCPP(float HpRate, AActor* RareSpawnEnemy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNoDeadEvent(bool noDeadEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNoCrashChanceEvent(bool noCrashChanceEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNoCrashChanceByUseGuts(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInvalidDamageInterface(bool bInvalidDamage, FName ClaimantName, int32 Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetInfinityCrashChance(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetHiddenCharacterAttachment(bool NewHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetCounterInterface();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetBehaviorTreeTickEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetActorAllTickEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RestartBehaviorTree(bool bTickEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsUseGuts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsUniqueNoDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsSuperArmorInterface();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsRareSpawnEnemy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsNotAbleBrainCrashTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsNoDeadTutorial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsNoDeadEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsNoCrashChanceEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsNoCrashChanceByUseGuts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInfinityCrashChance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsHitWeakChangeDefaultEffectInterface();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEventCondition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnableSlashEffectInterface(const FHCHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnableReactionCoefficientInterface(float& OutReactionSRate, float& OutReactionLRate, float& OutDownRate, float& OutCrashRate, bool& OutAcceptAll) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDisableAtomCuePlayInterface();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDeadPsychicObjOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDeadPsychicObjComboOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDeadPhysicsAttackOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDeadLaunchAttackOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDeadChaseAttackOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDeadBrainCrashOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCrashMaxWithGuts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCounterWaitInterface();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBadStatusOilCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBadStatusFloodedCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBadStatusFlameCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBadStatusElectricCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBadStatusConfusionCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAttractSelfInterface() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAttackerTargetSelf(const FHCHitResult& HitResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAbsoluteVisibilityTrace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetWeakTargetPointInterface(const FVector& AttackerPos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetLookAtTargetLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetDamageReactionDirInterface(const FHCHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCharaKind() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ECharacterHitPriority GetCharacterHitPriorityInterface();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetCameraStabilizeParameter(float& distLockHz, float& distRestoreHz, float& distLockVt, float& distRestoreVt);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetAutoAimTargetLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EAssassinAttackHit GetAssasinAttackHitType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EventStartForceEndBadStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndNoDeadNoCrashChanceEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisEnableNoDeadTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckRareSpawnHpRateCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckEmphasisCrashGauge(const FHCHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CalcUniqueDamage(const FHCHitResult& HitResult, float BaseDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddScarFromHitDamageInfoInterface(AActor* Actor, const FHitDamageInfo& HitDamageInfo);
    
};

