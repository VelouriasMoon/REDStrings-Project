#include "BrainCrashPointGroupVolume.h"

class AActor;

void ABrainCrashPointGroupVolume::OnActorEndOverlapFunc(AActor* OverlappedActor, AActor* OtherActor) {
}

void ABrainCrashPointGroupVolume::OnActorBeginOverlapFunc(AActor* OverlappedActor, AActor* OtherActor) {
}

ABrainCrashPointGroupVolume::ABrainCrashPointGroupVolume() {
    this->GroupID = 0;
    this->Priority = 0;
    this->bEnabled = true;
    this->bUnbound = false;
}

