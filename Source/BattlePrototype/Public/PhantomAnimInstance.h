#pragma once
#include "CoreMinimal.h"
#include "ASAnimInstance.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimInstance.h"
#include "PhantomAnimInstance.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, NonTransient)
class BATTLEPROTOTYPE_API UPhantomAnimInstance : public UASAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMontageBlendingOutStartedMCDelegate DispatchMontageBlendingOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMontageEndedMCDelegate DispatchMontageEnded;
    
    UPhantomAnimInstance();
private:
    UFUNCTION(BlueprintCallable)
    void RecvOnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void RecvOnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
};

