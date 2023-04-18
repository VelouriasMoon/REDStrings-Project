#include "AttachEffectBackgroundVolume.h"

class AActor;

void AAttachEffectBackgroundVolume::OnActorEndOverlapFunc(AActor* OverlappedActor, AActor* OtherActor) {
}

void AAttachEffectBackgroundVolume::OnActorBeginOverlapFunc(AActor* OverlappedActor, AActor* OtherActor) {
}

AAttachEffectBackgroundVolume::AAttachEffectBackgroundVolume() {
    this->Subtract = false;
    this->Unbound = false;
}

