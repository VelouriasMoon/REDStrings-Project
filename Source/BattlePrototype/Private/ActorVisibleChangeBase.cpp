#include "ActorVisibleChangeBase.h"
#include "Components/SphereComponent.h"

void AActorVisibleChangeBase::VisibleActors() {
}

void AActorVisibleChangeBase::UnvisibleActors() {
}

void AActorVisibleChangeBase::CollectActors() {
}

AActorVisibleChangeBase::AActorVisibleChangeBase() {
    this->IsCollectArrangeItem = true;
    this->IsCollectArrangeObject = true;
    this->IsCollectAnotherActor = true;
    this->CollectorComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollectorComponent"));
}

