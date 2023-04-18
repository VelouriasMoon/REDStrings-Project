#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RSEditorCallbackActor.generated.h"

UCLASS(Blueprintable)
class ARSEditorCallbackActor : public AActor {
    GENERATED_BODY()
public:
    ARSEditorCallbackActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventPostEditMove(bool bFinished);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventPostEditChangeProperty();
    
};

