#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
//-FallbackName=Vector
#include "TargetableObjectInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UTargetableObjectInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API ITargetableObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPsychicObjectShieldActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsControlPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBerserkCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetTargetCursorLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetPsychicObjectShield();
    
};

