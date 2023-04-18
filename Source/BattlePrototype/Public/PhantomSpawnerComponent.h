#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "PhantomSpawnerComponent.generated.h"

class AActor;
class APhantomBase;
class UAnimMontage;
class UPhantomSpawnerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPhantomSpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPhantomSpawnerComponent();
    UFUNCTION(BlueprintCallable)
    APhantomBase* SpawnPhantom(TSubclassOf<APhantomBase> phantomClass, FVector RelativeLocation, FRotator RelativeRotation, UAnimMontage* Montage, float fadeInSec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPhantomSpawnerComponent* GetPhantomSpawner(AActor* Actor);
    
};

