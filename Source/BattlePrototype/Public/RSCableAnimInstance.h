#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "Animation/AnimInstance.h"
#include "AnimNode_RigidBodyRedCustomInterpolateInfo.h"
#include "CableAdditiveBoneParam.h"
#include "ERSCableAnimationState.h"
#include "ERSCableGravityType.h"
#include "RSCableAnimInstance.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class BATTLEPROTOTYPE_API URSCableAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Gravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimNode_RigidBodyRedCustomInterpolateInfo RigidBodyInterplateInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCableAdditiveBoneParam AdditiveBoneParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleRigidBlendSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IdleRigidBlendRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRotator> BoneRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoneNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ERSCableAnimationState AnimationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RigidIdlingSec;
    
    URSCableAnimInstance();
protected:
    UFUNCTION(BlueprintCallable)
    void Update(float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetState(ERSCableAnimationState State);
    
    UFUNCTION(BlueprintCallable)
    void SetBoneParam(const FCableAdditiveBoneParam& Param);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool NewActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EndOverrideGravity(ERSCableGravityType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BeginOverrideGravity(ERSCableGravityType Type);
    
};

