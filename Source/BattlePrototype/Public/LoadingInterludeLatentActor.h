#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LoadingInterludeLatentActor.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ALoadingInterludeLatentActor : public AActor {
    GENERATED_BODY()
public:
    ALoadingInterludeLatentActor();
    UFUNCTION(BlueprintCallable)
    void FinishWait();
    
};

