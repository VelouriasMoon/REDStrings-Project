#pragma once
#include "CoreMinimal.h"
#include "ASAnimInstance.h"
#include "RSCharacterAnimInstance.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, NonTransient)
class BATTLEPROTOTYPE_API URSCharacterAnimInstance : public UASAnimInstance {
    GENERATED_BODY()
public:
    URSCharacterAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentASNodeAssetTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentASNodeAssetPlayRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentASNodeAssetLength() const;
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetAnimMontageFromSlot(FName SlotName);
    
    UFUNCTION(BlueprintCallable)
    void ForceStopAllMontage(float BlendOut);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DebugIsCurrentASNodeRootMotion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName DebugGetCurrentASNodeAssetName() const;
    
};

