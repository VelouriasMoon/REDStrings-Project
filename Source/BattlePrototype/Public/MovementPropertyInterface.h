#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MovementPropertyInterface.generated.h"

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UMovementPropertyInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IMovementPropertyInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetFlyingInterface(const FName& ClaimantName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ClearFlyingInterface(const FName& ClaimantName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ClearFlyingForceInterface();
    
};

