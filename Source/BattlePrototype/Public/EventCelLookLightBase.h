#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EventCelLookLightBase.generated.h"

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API AEventCelLookLightBase : public AActor {
    GENERATED_BODY()
public:
    AEventCelLookLightBase();
    UFUNCTION(BlueprintCallable)
    bool IsEditorTimelineSetup();
    
};

