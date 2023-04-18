#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TickManageComponent.generated.h"

class AActor;
class UTickManageComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UTickManageComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> _ManageActorList;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UTickManageComponent>> _TickManageComponentList;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UActorComponent>> _ComponentList;
    
public:
    UTickManageComponent();
    UFUNCTION(BlueprintCallable)
    void SetManageTickEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void RegisterManageComponent(TArray<UActorComponent*> ComponentList);
    
    UFUNCTION(BlueprintCallable)
    void RegisterManageActor(AActor* Actor);
    
};

