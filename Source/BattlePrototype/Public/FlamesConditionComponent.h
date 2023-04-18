#pragma once
#include "CoreMinimal.h"
#include "ConditionComponent.h"
#include "FlamesConditionComponent.generated.h"

class UParticleSystem;
class UParticleSystemComponent;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UFlamesConditionComponent : public UConditionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _intervalDamagePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* _pFlameEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* _pAttackedComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* _pEffectComp;
    
public:
    UFlamesConditionComponent();
};

