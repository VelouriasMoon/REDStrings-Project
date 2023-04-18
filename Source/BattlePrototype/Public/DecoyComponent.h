#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "DecoyComponent.generated.h"

class AActor;
class ARSCharacterBase;
class UDecoyComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UDecoyComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARSCharacterBase> _targetClass;
    
public:
    UDecoyComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isDecoyTarget(const AActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDecoyComponent* GetDecoyComponentFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> Decoy_SortByDistance(const TArray<AActor*>& Actors, const AActor* originActor);
    
};

