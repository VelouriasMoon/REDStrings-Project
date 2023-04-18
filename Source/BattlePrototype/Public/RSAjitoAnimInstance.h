#pragma once
#include "CoreMinimal.h"
#include "ASAnimInstance.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "AjitoMemberAnimInfo.h"
#include "AjitoMemberInfo.h"
#include "EAjitoMemberIdleStateType.h"
#include "EAjitoMemberState.h"
#include "EAjitoMemberTalkStateType.h"
#include "RSAjitoAnimInstanceInterface.h"
#include "RSAjitoAnimInstance.generated.h"

class AAjitoMember;
class UASAnimationSet;
class UAnimSequence;
class UAnimSequenceBase;

UCLASS(Blueprintable, NonTransient)
class BATTLEPROTOTYPE_API URSAjitoAnimInstance : public UASAnimInstance, public IRSAjitoAnimInstanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsWaitStateTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReadyToTransitionIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReadyToTransitionTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLookAtInTalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseOverrideAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookAtPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsToTalkWaiting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsToIdleWaiting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAjitoMemberState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAjitoMemberState RequestedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAjitoMemberIdleStateType IdleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAjitoMemberTalkStateType TalkState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAjitoMemberAnimInfo AnimInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAjitoMemberInfo MemberInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* OverrideAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UASAnimationSet* AnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EyeHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EyeVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EyeBlendRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsChangeStateImmediate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsResetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStartState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsIdleOnlyAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextAnimNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPresentEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator HeadRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBoxNoDisp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseKawaiiPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FacialBlendWeight;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> _bEnableEyeControl;
    
public:
    URSAjitoAnimInstance();
    UFUNCTION(BlueprintCallable)
    void WaitTransitionToTalk(float WaitTime);
    
    UFUNCTION(BlueprintCallable)
    void WaitTransitionToIdle(float WaitTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartTalking();
    
    UFUNCTION(BlueprintCallable)
    void SetIsLookAt(bool NewIsLookAt);
    
    UFUNCTION(BlueprintCallable)
    void SetEyeControlParameter(float Horizontal, float Vertical);
    
    UFUNCTION(BlueprintCallable)
    void SetEyeControlEnable(bool bEnable, FName ClaimantName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitTransitionToTalk() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitTransitionToIdle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool InitializeInstance(FAjitoMemberInfo Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAjitoMember* GetOwningAjitoMember() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentASNodeAssetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequenceBase* GetCurrentASNodeAnimSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool EndTalking();
    
    UFUNCTION(BlueprintCallable)
    void ClearWaitTransitionToTalk();
    
    UFUNCTION(BlueprintCallable)
    void ClearWaitTransitionToIdle();
    
    
    // Fix for true pure virtual functions not being implemented
};

