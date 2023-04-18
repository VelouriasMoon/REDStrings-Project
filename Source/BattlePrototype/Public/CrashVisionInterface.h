#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CrashVisionInterface.generated.h"

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UCrashVisionInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API ICrashVisionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetInvincibleCrashVisionDamage(bool bInvincible, const FName ClaimantName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetDisableCrashVision(bool bDisable, const FName ClaimantName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsInvincibleCrashVisionDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDisableCrashVision();
    
};

