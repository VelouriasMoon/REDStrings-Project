#include "ASCollisionGroupComponent.h"

class AActor;
class UPrimitiveComponent;

void UASCollisionGroupComponent::StopAttack() {
}

void UASCollisionGroupComponent::StartAttack(int32 hitCount, float HitInterval) {
}

void UASCollisionGroupComponent::SetActiveCollision(bool Active) {
}

void UASCollisionGroupComponent::OnAttackEndOverlap(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp) {
}

void UASCollisionGroupComponent::OnAttackBeginOverlap(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, const FHitResult& SweepResult) {
}

UASCollisionGroupComponent::UASCollisionGroupComponent() {
}

