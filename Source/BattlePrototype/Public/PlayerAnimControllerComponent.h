#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "Animation/AnimInstance.h"
#include "Animation/AnimInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnMontageStartedMCDelegate__DelegateSignature -FallbackName=OnMontageStartedMCDelegateDelegate
#include "AnimControllerComponent.h"
#include "ChangeAnimKindDelegateDelegate.h"
#include "ChangeWalkRunStateKindDelegateDelegate.h"
#include "EPlayerAnimDir.h"
#include "PlayerAnimKind.h"
#include "PlayerWalkRunStateKind.h"
#include "RequestParticleEffectDelegateDelegate.h"
#include "PlayerAnimControllerComponent.generated.h"

class AActor;
class UAnimMontage;
class UPlayerAnimControllerComponent;
class URSPlayerAnimInstance;
class URequestParticleEffectArgs;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPlayerAnimControllerComponent : public UAnimControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URSPlayerAnimInstance> _animBP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeAnimKindDelegate DispatchChangeAnimKind;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeWalkRunStateKindDelegate DispatchChangeWalkRunStateKind;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestParticleEffectDelegate DispatchRequestParticleEffect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMontageStartedMCDelegate DispatchMontageStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMontageBlendingOutStartedMCDelegate DispatchMontageBlendingOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMontageEndedMCDelegate DispatchMontageEnded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _SprintWalkSpeedRate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WALK_SPEED;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RUN_SPEED;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AJITO_RUN_SPEED;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RUN_TO_WALK_DELAY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RUN_TO_WALK_INTERP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WALK_TO_RUN_INTERP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WALK_TO_RUN_INTERP_TOWN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DISABLE_TOWN_RUN_TIMER;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> _bNotifyEnableMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> _bNotifyEnableAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> _bNotifyEnableAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> _bNotifyEnablePsychic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> _bNotifyEnablePsychicEx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> _bNotifyEnableAirJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> _bNotifyEnableBrainCrash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> _bNotifyEnableWeaponCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> _bNotifyEnableWalkStop;
    
public:
    UPlayerAnimControllerComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateWalkSpeed(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetUpperAction(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetupAnimBP();
    
    UFUNCTION(BlueprintCallable)
    void SetUniquePsychicAim(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetTalkMode(bool bTalk);
    
    UFUNCTION(BlueprintCallable)
    void SetRigidbodyAlpha(float Alpha, float LerpTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLeftStickPower(float Power, float prevDiff);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleEm1500(bool bBattle);
    
    UFUNCTION(BlueprintCallable)
    void SetAjitoFlag(bool bAjito);
    
    UFUNCTION(BlueprintCallable)
    void SetAimRotator(FRotator Rotator);
    
    UFUNCTION(BlueprintCallable)
    void RequestStep(FVector StepDirection, EPlayerAnimDir Dir, int32 Param, bool bFlying);
    
    UFUNCTION(BlueprintCallable)
    void RequestBattleIdle(bool IsStart);
    
    UFUNCTION(BlueprintCallable)
    void RequestAttack(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName);
    
    UFUNCTION(BlueprintCallable)
    void RequestAnim(PlayerAnimKind kind, int32 Param, bool bFlying);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveNotifyInputPsychic(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveNotifyInputDodge(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveNotifyInputAttack(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveNotifyEnableWeaponCharge(bool bEnable, FName ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveNotifyEnableWalkStop(bool bEnable, FName ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveNotifyEnablePsychicEx(bool bEnable, FName ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveNotifyEnablePsychic(bool bEnable, FName ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveNotifyEnableMove(bool bEnable, FName ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveNotifyEnableBrainCrash(bool bEnable, FName ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveNotifyEnableAttack(bool bEnable, bool bNotComboEnd, FName ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveNotifyEnableAirJump(bool bEnable, FName ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveNotifyEnableAction(bool bEnable, FName ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestParticleEffect(URequestParticleEffectArgs* Args);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMontageStarted(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeWalkRunStateKind(PlayerWalkRunStateKind NewKind);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeAnimKind(PlayerAnimKind NewAnimKind, PlayerAnimKind OldAnimKind);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpperAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningAnimStateForAIMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPsychicCaptureNoMotionAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotifyInputPsychic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotifyInputDodge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotifyInputAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotifyEnableWeaponCharge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotifyEnableWalkStop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotifyEnablePsychicEx() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotifyEnablePsychic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotifyEnableMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotifyEnableBrainCrash() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotifyEnableAttackOptionNotComboEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotifyEnableAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotifyEnableAirJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotifyEnableAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistAnimRequest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCheckIdle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackInputAccept(int32 AttackId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsASNodePlayEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsASAnimPlayEnd(PlayerAnimKind kind) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimStepEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimStep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimStartBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimSprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimSideStep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimPsychic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimLand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimKind(PlayerAnimKind kind) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimIdleWalkRun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimFall() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimEndBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimBrake() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimAnyAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    PlayerWalkRunStateKind GetWalkRunStateKind() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWalkRunMoveScale() const;
    
    UFUNCTION(BlueprintCallable)
    float GetRigidbodyAlpha();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPlayerAnimControllerComponent* GetPlayerAnimControllerComponentFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseWalkSpeed() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearAllCancelFlag();
    
    UFUNCTION(BlueprintCallable)
    void BeginPlayPublic();
    
};

