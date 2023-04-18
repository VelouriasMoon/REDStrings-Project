#include "ArrangeItemParticle.h"
#include "RSParticleSystemComponentBase.h"

class UParticleSystem;

UParticleSystem* AArrangeItemParticle::GetEmitterTemplate_Implementation() {
    return NULL;
}

AArrangeItemParticle::AArrangeItemParticle() {
    this->ParticleComponent = CreateDefaultSubobject<URSParticleSystemComponentBase>(TEXT("ParticleComponent"));
    this->ParticleComponentSub1 = CreateDefaultSubobject<URSParticleSystemComponentBase>(TEXT("ParticleComponentSub1"));
    this->AcquiredParticleComponent = CreateDefaultSubobject<URSParticleSystemComponentBase>(TEXT("AcquiredParticleComponent"));
    this->AcquiredParticleComponentSub1 = CreateDefaultSubobject<URSParticleSystemComponentBase>(TEXT("AcquiredParticleComponentSub1"));
    this->AcquiredSeCue = NULL;
}

