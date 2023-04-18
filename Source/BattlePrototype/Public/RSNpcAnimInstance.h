#pragma once
#include "CoreMinimal.h"
#include "ActionSystem/Public/ASAnimInstance.h"
#include "ENpcAnimationKind.h"
#include "RSNpcAnimInstance.generated.h"

class UASAnimationSet;
class UAnimSequenceBase;

UCLASS(Blueprintable, NonTransient)
class BATTLEPROTOTYPE_API URSNpcAnimInstance : public UASAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNewTownPeople;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WaitMotionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UASAnimationSet* AnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* FacialAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcAnimationKind NpcAnimKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookAtPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseKawaiiPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EyeXAxisValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EyeYAxisValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator HeadRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    URSNpcAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetNpcIdleAnimation(UAnimSequenceBase* IdleAnimation);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLookAt(bool NewIsLookAt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAnimationForce(ENpcAnimationKind AnimKind);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAnimation(ENpcAnimationKind AnimKind);
    
    UFUNCTION(BlueprintCallable)
    UAnimSequenceBase* GetAnimSequenceFromAnimationSet(const FName& Key);
    
};

