#include "BSPBlockVolume.h"

class AActor;

void ABSPBlockVolume::UpdateSoundAttenuation(float DeltaSeconds) {
}

void ABSPBlockVolume::SetDistanceFromPlayer(float Distance) {
}

void ABSPBlockVolume::ResetAttenuation() {
}

void ABSPBlockVolume::PrepareUpdateSoundAttenuation() {
}

void ABSPBlockVolume::OnActorHitFunc(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void ABSPBlockVolume::OnActorEndOverlapFunc(AActor* OverlappedActor, AActor* OtherActor) {
}

void ABSPBlockVolume::OnActorBeginOverlapFunc(AActor* OverlappedActor, AActor* OtherActor) {
}

bool ABSPBlockVolume::IsInVolume(FVector Point, float SphereRadius) const {
    return false;
}

ABSPBlockVolume::ABSPBlockVolume() {
    this->CurSoundAttenuationRate = 1.00f;
    this->TargetSoundAttenuationRate = 1.00f;
    this->SoundSettingInterporateSpeed = 1.00f;
    this->TotalDistanceFromPlayer = 0.00f;
    this->UpdateID = 9876;
}

