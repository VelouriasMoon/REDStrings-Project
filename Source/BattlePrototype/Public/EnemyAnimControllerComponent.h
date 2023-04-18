#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimControllerComponent.h"
#include "EnemyActionAnimKind.h"
#include "EnemyAliveAnimKind.h"
#include "EnemyAttackAnimKind.h"
#include "EnemyBrainCrashAnimKind.h"
#include "EnemyCrashChanceAnimKind.h"
#include "EnemyDamageAnimKind.h"
#include "EnemyDamageDownAnimKind.h"
#include "EnemyDeadAnimKind.h"
#include "EnemyInitLayoutAnimKind.h"
#include "EnemyKind.h"
#include "EnemyMoveAnimKind.h"
#include "EnemySwitchAnimKind.h"
#include "EnemyAnimControllerComponent.generated.h"

class AActor;
class UAnimMontage;
class UEnemyAnimControllerComponent;
class URSEnemyAnimInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UEnemyAnimControllerComponent : public UAnimControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMontageBlendingOutStartedMCDelegate DispatchMontageBlendingOut;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URSEnemyAnimInstance> _animBP;
    
    UEnemyAnimControllerComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateAnimDirectionAndSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool StateIsExcite() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool StateIsBack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool StateAliveIsInitLayout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool StateAliveIsIdleMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool StateAliveIsDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool StateAliveIsAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool StateAliveIsAction() const;
    
    UFUNCTION(BlueprintCallable)
    void SetSwitchAnimKind(EnemySwitchAnimKind anim);
    
    UFUNCTION(BlueprintCallable)
    void SetSuperArmor(bool isSuperArmor);
    
    UFUNCTION(BlueprintCallable)
    void SetMove(EnemyMoveAnimKind move);
    
    UFUNCTION(BlueprintCallable)
    void SetLanded(bool Landed);
    
    UFUNCTION(BlueprintCallable)
    void SetInitLayout(EnemyInitLayoutAnimKind layout);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreSuperArmor(bool isIgnoreSuperArmor);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreStandUpSuperArmor(bool isIgnoreStandUpSuperArmor);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyKind(EnemyKind kind);
    
    UFUNCTION(BlueprintCallable)
    void SetDead(EnemyDeadAnimKind dead);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageDown(EnemyDamageDownAnimKind Damage);
    
    UFUNCTION(BlueprintCallable)
    void SetDamage(EnemyDamageAnimKind Damage);
    
    UFUNCTION(BlueprintCallable)
    void SetCrashChance(EnemyCrashChanceAnimKind chance);
    
    UFUNCTION(BlueprintCallable)
    void SetBrainCrash(EnemyBrainCrashAnimKind Crash);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimRootMotionScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetAliveAnimKind(EnemyAliveAnimKind alive);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEndAnimDie();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPressDownAnimKind() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPossibleDamageAnimKindWince() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPossibleDamageAnimKindSpecialDamageDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPossibleDamageAnimKindLaunch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPossibleDamageAnimKindKnockBack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPossibleDamageAnimKindDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPossibleDamageAnimKindDamageChance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPossibleDamageAnimKindBlow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPossibleDamageAnimKind() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMove(EnemyMoveAnimKind move) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLanded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIgnoreCrashChance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDie() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeadComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageAnimStateB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageAnimLight2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageAnimKindWince() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageAnimKindSpecialDamageDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageAnimKindSpecialDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageAnimKindLaunch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageAnimKindKnockBack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageAnimKindDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageAnimKindDamageChance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageAnimKindBlow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrashChanceAnimKind() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBrainCrashAnimKind() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackFlg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackAnimKind(const TArray<EnemyAttackAnimKind> kindArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttack(EnemyAttackAnimKind Attack) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsASNodePlayEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionAnimKind(const TArray<EnemyActionAnimKind> kindArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAction(EnemyActionAnimKind Action) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnemySwitchAnimKind GetSwitchAnimKind() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnemyMoveAnimKind GetMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnemyKind GetEnemyKind() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnemyDeadAnimKind GetEnemyDeadAnimKind() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnemyDamageDownAnimKind GetEnemyDamageDownAnimKind() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnemyDamageAnimKind GetEnemyDamageAnimKind() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnemyCrashChanceAnimKind GetEnemyCrashChanceAnimKind() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnemyBrainCrashAnimKind GetEnemyBrainCrashAnimKind() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnemyAttackAnimKind GetEnemyAttackAnimKind() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UEnemyAnimControllerComponent* GetEnemyAnimControllerComponentFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnemyAliveAnimKind GetEnemyAliveAnimKind() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnemyActionAnimKind GetEnemyActionAnimKind() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDirection() const;
    
    UFUNCTION(BlueprintCallable)
    void EndMoveBackward();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float DotOfHitDirAndUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float DotOfHitDirAndRight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckGoToIdleMove(bool IsEndAnim);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckFaintToWakeup(bool IsEndAnim) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEndExcite(bool IsEndAnim);
    
    UFUNCTION(BlueprintCallable)
    void BeginMoveBackward();
    
    UFUNCTION(BlueprintCallable)
    void BeginMove(EnemyMoveAnimKind move);
    
    UFUNCTION(BlueprintCallable)
    void BeginGetUp();
    
    UFUNCTION(BlueprintCallable)
    void BeginExcite();
    
    UFUNCTION(BlueprintCallable)
    void BeginDie();
    
    UFUNCTION(BlueprintCallable)
    void BeginAttack(EnemyAttackAnimKind Attack);
    
    UFUNCTION(BlueprintCallable)
    void BeginAction(EnemyActionAnimKind Action);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AliveToDie() const;
    
};

