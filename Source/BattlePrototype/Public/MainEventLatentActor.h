#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MainEventLatentActor.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AMainEventLatentActor : public AActor {
    GENERATED_BODY()
public:
    AMainEventLatentActor();
    UFUNCTION(BlueprintCallable)
    void FinishWait();
    
};

