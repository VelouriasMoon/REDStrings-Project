#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Engine/EngineTypes.h"
#include "ASCollisionInterface.generated.h"

class AActor;
class UPrimitiveComponent;

UINTERFACE(Blueprintable)
class ACTIONSYSTEM_API UASCollisionInterface : public UInterface {
    GENERATED_BODY()
};

class ACTIONSYSTEM_API IASCollisionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnAttackOverlapCallback(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, const FHitResult& SweepResult);
    
};

