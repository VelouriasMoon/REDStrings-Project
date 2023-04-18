#include "PhantomSpawnerComponent.h"
#include "Templates/SubclassOf.h"

class AActor;
class APhantomBase;
class UAnimMontage;
class UPhantomSpawnerComponent;

APhantomBase* UPhantomSpawnerComponent::SpawnPhantom(TSubclassOf<APhantomBase> phantomClass, FVector RelativeLocation, FRotator RelativeRotation, UAnimMontage* Montage, float fadeInSec) {
    return NULL;
}

UPhantomSpawnerComponent* UPhantomSpawnerComponent::GetPhantomSpawner(AActor* Actor) {
    return NULL;
}

UPhantomSpawnerComponent::UPhantomSpawnerComponent() {
}

