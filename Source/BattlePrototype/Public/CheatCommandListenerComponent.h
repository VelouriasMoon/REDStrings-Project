#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CheatCommandListenerDelegateDelegate.h"
#include "CheatCommandListenerComponent.generated.h"

class AActor;
class UCheatCommandListenerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UCheatCommandListenerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheatCommandListenerDelegate OnCheatCommand;
    
public:
    UCheatCommandListenerComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCheatCommandListenerComponent* GetCheatCommandListenerComponentFromActor(AActor* Actor);
    
};

