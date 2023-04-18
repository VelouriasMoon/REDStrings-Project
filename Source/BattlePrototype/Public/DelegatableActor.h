#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DelegatableActor.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADelegatableActor : public AActor {
    GENERATED_BODY()
public:
    ADelegatableActor();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostEditMove();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostEditChange();
    
};

