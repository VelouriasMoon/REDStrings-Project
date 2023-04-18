#include "RequestParticleEffectArgs.h"

class UParticleSystem;
class UParticleSystemComponent;
class USceneComponent;

UParticleSystemComponent* URequestParticleEffectArgs::StartParticleEffect() {
    return NULL;
}

void URequestParticleEffectArgs::Setup(FName CustomName, USceneComponent* MeshComponent, UParticleSystem* PSTemplate, FName SocketName, FVector LocationOffset, FRotator RotationOffset) {
}

bool URequestParticleEffectArgs::EqualsCustomName(FName Name) const {
    return false;
}

URequestParticleEffectArgs::URequestParticleEffectArgs() {
    this->_MeshComponent = NULL;
    this->_PSTemplate = NULL;
}

