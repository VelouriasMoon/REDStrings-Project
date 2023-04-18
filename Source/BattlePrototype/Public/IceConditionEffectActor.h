#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IceConditionEffectActor.generated.h"

class UParticleSystem;
class UParticleSystemComponent;
class USceneComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AIceConditionEffectActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* _pBeginEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* _pEndEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* _pEffectComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* _pRootSceneComp;
    
public:
    AIceConditionEffectActor();
    UFUNCTION(BlueprintCallable)
    void FinishEffect();
    
};

