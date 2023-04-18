#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RegisterEffectInterface.generated.h"

class URSParticleSystemComponentBase;

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API URegisterEffectInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IRegisterEffectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegisterInterruptTelepoEffectInterface(URSParticleSystemComponentBase* Particle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegisterEffectInterface(URSParticleSystemComponentBase* Particle);
    
};

