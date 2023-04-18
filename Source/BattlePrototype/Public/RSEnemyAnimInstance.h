#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "Animation/AnimInstance.h"
#include "EnemyActionAnimKind.h"
#include "EnemyAliveAnimKind.h"
#include "EnemyAttackAnimKind.h"
#include "EnemyBrainCrashAnimKind.h"
#include "EnemyCrashChanceAnimKind.h"
#include "EnemyDamageAnimKind.h"
#include "EnemyDamageDownAnimKind.h"
#include "EnemyDeadAnimKind.h"
#include "EnemyEventAnimKind.h"
#include "EnemyInitLayoutAnimKind.h"
#include "EnemyKind.h"
#include "EnemyMoveAnimKind.h"
#include "EnemySwitchAnimKind.h"
#include "RSCharacterAnimInstance.h"
#include "TinyIKInfo.h"
#include "RSEnemyAnimInstance.generated.h"

class ARSCharacterBase;
class UAnimMontage;

UCLASS(Blueprintable, NonTransient)
class BATTLEPROTOTYPE_API URSEnemyAnimInstance : public URSCharacterAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnemyAliveAnimKind _aliveAnimKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnemyMoveAnimKind _MoveAnimKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnemyAttackAnimKind _attackAnimKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnemyActionAnimKind _actionAnimKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnemySwitchAnimKind _switchAnimKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnemyDamageAnimKind _damageAnimKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnemyDamageDownAnimKind _damageDownAnimKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnemyBrainCrashAnimKind _brainCrashAnimKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnemyDeadAnimKind _deadAnimKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnemyInitLayoutAnimKind _initLayoutAnimKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnemyEventAnimKind _eventAnimKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnemyCrashChanceAnimKind _crashChanceAnimKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnemyKind _EnemyKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _walkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bBackMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bExcite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bLanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bDamageAnimStateB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bDamageAnimLight2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bRequestFaintWakeup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bAttackFlg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector _blendSpaceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _animRigidBodyIdlingSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _animDynamicsIdlingSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _addDamageBlendWeightDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _addDamageBlendWeightCurrent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMontageBlendingOutStartedMCDelegate DispatchMontageBlendingOut;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bEnableLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bFinishLookAtRotateZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bLookFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _lrRotateLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _upRotateLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _downRotateLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _lookAtFollowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector _lookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator _lookAtRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bEnableIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _IKAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _IKDstAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _IKAlphaChangeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTinyIKInfo> _tinyIKArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftFootIKBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightFootIKBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootIKBlendRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FootIKOffset_Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FootIKOffset_Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FootIKJointTargetLocation_Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FootIKJointTargetLocation_Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bEnableBrainCrashEvent;
    
public:
    URSEnemyAnimInstance();
    UFUNCTION(BlueprintCallable)
    void UpdateSpineRotateNative(UPARAM(Ref) FRotator& SpineRot, UPARAM(Ref) bool& UpdateSpineRot, bool EnableSpineRot, ARSCharacterBase* TargetCharacter, ARSCharacterBase* Owner, float RotateUpDownMin, float RotateUpDownMax, float RotateLRMax, float DeltaSeconds, float RotateSpeed);
    
    UFUNCTION(BlueprintCallable)
    void StartLookAt(bool bResetRotate);
    
    UFUNCTION(BlueprintCallable)
    void SetIKDstAlpha(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIKAlpha(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAddDamageBlendWeight(float Value);
    
    UFUNCTION(BlueprintCallable)
    void ResetDefaultAddDamageBlendWeight();
    
private:
    UFUNCTION(BlueprintCallable)
    void RecvOnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableLookAt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableEnemyIK() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableBrainCrashEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIKDstAlpha() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIKAlpha() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAddDamageBlendWeight() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishLookAt(bool bRotateZero);
    
    UFUNCTION(BlueprintCallable)
    void EnableEnemyIK();
    
    UFUNCTION(BlueprintCallable)
    void EnableBrainCrashEvent();
    
    UFUNCTION(BlueprintCallable)
    void DisableEnemyIK();
    
    UFUNCTION(BlueprintCallable)
    void DisableBrainCrashEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckGoToIdleMove(bool bEndAnim);
    
    UFUNCTION(BlueprintCallable)
    void AttackEnd(EnemyAttackAnimKind Attack);
    
};

