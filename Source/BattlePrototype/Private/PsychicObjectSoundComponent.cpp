#include "PsychicObjectSoundComponent.h"
#include "FootStepComponent.h"

class AActor;
class UPrimitiveComponent;

void UPsychicObjectSoundComponent::OnHitCallback(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

UPsychicObjectSoundComponent::UPsychicObjectSoundComponent() {
    this->FootStepComponent = CreateDefaultSubobject<UFootStepComponent>(TEXT("FootStepComponent"));
    this->HitSeInterval = 0.75f;
    this->PlaySeVelocity = 120.00f;
    this->PlayRunSeVelocity = 600.00f;
}

