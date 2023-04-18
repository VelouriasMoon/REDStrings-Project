#include "ArrangeObject.h"
#include "FootStepComponent.h"

class AActor;
class UPrimitiveComponent;

void AArrangeObject::OnHitCallback(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

AArrangeObject::AArrangeObject() {
    this->isDoBeginPlay = false;
    this->ID = 0;
    this->LevelID = -1;
    this->GroupID = -1;
    this->ArrangeMesh = NULL;
    this->FootStepComponent = CreateDefaultSubobject<UFootStepComponent>(TEXT("FootStepComponent"));
    this->HitSeInterval = 0.75f;
    this->PlaySeVelocity = 120.00f;
    this->PlayRunSeVelocity = 600.00f;
}

