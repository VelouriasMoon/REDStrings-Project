#include "DecoyComponent.h"

class AActor;
class UDecoyComponent;

bool UDecoyComponent::isDecoyTarget(const AActor* TargetActor) const {
    return false;
}

UDecoyComponent* UDecoyComponent::GetDecoyComponentFromActor(AActor* Actor) {
    return NULL;
}

TArray<AActor*> UDecoyComponent::Decoy_SortByDistance(const TArray<AActor*>& Actors, const AActor* originActor) {
    return TArray<AActor*>();
}

UDecoyComponent::UDecoyComponent() {
    this->_targetClass = NULL;
}

