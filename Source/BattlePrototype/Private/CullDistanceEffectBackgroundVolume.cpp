#include "CullDistanceEffectBackgroundVolume.h"

class AActor;

void ACullDistanceEffectBackgroundVolume::OnActorEndOverlapFunc(AActor* OverlappedActor, AActor* OtherActor) {
}

void ACullDistanceEffectBackgroundVolume::OnActorBeginOverlapFunc(AActor* OverlappedActor, AActor* OtherActor) {
}

ACullDistanceEffectBackgroundVolume::ACullDistanceEffectBackgroundVolume() {
    this->CullDistance = 5000.00f;
    this->Priority = 0;
    this->Unbound = false;
}

