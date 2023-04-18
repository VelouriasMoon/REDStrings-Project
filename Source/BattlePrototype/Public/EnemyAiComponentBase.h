#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EEnemyThinkActionType.h"
#include "GameTimer.h"
#include "EnemyAiComponentBase.generated.h"

class ARSCharacterBase;
class UEnemyScriptComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UEnemyAiComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARSCharacterBase> mOwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 mCurrentAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyThinkActionType mThinkActionType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnableAllowance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAllowanceWaitSeconds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameTimer mAllowanceWaitTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mCanAttackOnce;
    
public:
    UEnemyAiComponentBase();
    UFUNCTION(BlueprintCallable)
    void SetWaitNextActionTimer(float Seconds);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetThinkActionType(EEnemyThinkActionType Type);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetReserveActionNative(uint8 Action, float Param00, float Param01);
    
    UFUNCTION(BlueprintCallable)
    void SetIdleMoveActionNative(UPARAM(Ref) TArray<uint8>& idleMoveAction);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCurrentAction(uint8 Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetActionNative(uint8 actionEnum, FName Action, ARSCharacterBase* mTargetCharacter, bool bIgnoreMove);
    
    UFUNCTION(BlueprintCallable)
    void SetActionFromReservedNative();
    
    UFUNCTION(BlueprintCallable)
    void ResetReserveActionNative();
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyExecAttack();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitNextActionTimer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTimerOKNative(uint8 actionEnym);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTimeCheckNative(float checkValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReservedActionNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRandomCheckNative(float checkValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPreConditionOKNative(EEnemyThinkActionType ActionType, bool bNeedRay, bool IgnoreOutofScreen, bool IgnoreRestrictAttackOther, bool NotBrainField, bool bIgnoreMove, ARSCharacterBase* mTargetCharacter, bool IsContrlPlayer, float TargetHeight);
    
    UFUNCTION(BlueprintCallable)
    bool IsPossibleMoveNative(bool IgnoreOutofScreen, bool IgnoreRestrictAttackOther, ARSCharacterBase* mTargetCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool IsPossibleAttackNative(bool IsControlPlayer, bool IgnoreOutofScreen, bool IgnoreRestrictAttackOther, ARSCharacterBase* mTargetCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIdleMoveNative(bool IsIdleMove) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHpPercentDownNative(float percent, bool& Error) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageNative() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCommonAreaOKNative(EEnemyThinkActionType ActionType, float TargetHeight);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCanAttack() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsAttackingOtherEnemyNative(ARSCharacterBase* mTargetCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool IsAiActionNative(uint8 actionEnum, float& Range_Work, float& NoRange_Work, float& Angle_Work, float& NoAngle_Work, TArray<uint8>& lConditions, bool bIgnoreMove, ARSCharacterBase* mTargetCharacter, bool IsContrlPlayer, float TargetHeight, bool& IsPreCondition, bool NotProbability);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(UEnemyScriptComponent* EnemyScript, bool IsFlyEnemy, float AIActionHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEnemyThinkActionType GetThinkActionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetCurrentAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetAiTimer_FromNative(uint8 actionEnym);
    
    UFUNCTION(BlueprintCallable)
    float GetActionTimeNative(uint8 curAction);
    
    UFUNCTION(BlueprintCallable)
    bool CheckIsAiActionParam(bool NotProbability, float lProbability, float lHp, uint8 actionEnum);
    
    UFUNCTION(BlueprintCallable)
    bool CheckIdleMoveActionNative(uint8 checkAction, TArray<uint8> idleMoveAction);
    
};

