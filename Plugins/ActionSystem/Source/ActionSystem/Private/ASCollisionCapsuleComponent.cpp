#include "ASCollisionCapsuleComponent.h"

class AActor;
class UPrimitiveComponent;

void UASCollisionCapsuleComponent::OnAttackEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UASCollisionCapsuleComponent::OnAttackBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UASCollisionCapsuleComponent::UASCollisionCapsuleComponent() {
}

