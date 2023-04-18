#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RSEditorTickedActor.generated.h"

UCLASS(Blueprintable)
class ARSEditorTickedActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableEditorTick;
    
    ARSEditorTickedActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventPostEditMove(bool bFinished);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventPostEditChangeProperty();
    
};

