#pragma once
#include "CoreMinimal.h"
#include "ArrangeItemBase.h"
#include "ArrangeItemParticle.generated.h"

class UParticleSystem;
class URSParticleSystemComponentBase;
class USoundAtomCue;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AArrangeItemParticle : public AArrangeItemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSParticleSystemComponentBase* ParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSParticleSystemComponentBase* ParticleComponentSub1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSParticleSystemComponentBase* AcquiredParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSParticleSystemComponentBase* AcquiredParticleComponentSub1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* AcquiredSeCue;
    
public:
    AArrangeItemParticle();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UParticleSystem* GetEmitterTemplate();
    
};

