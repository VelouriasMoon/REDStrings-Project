#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EventManagerInterface.generated.h"

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UEventManagerInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IEventManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EventManagerStart(bool EnableTick, bool Visibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EventManagerEnd(bool RestoreEnableTick, bool RestoreVisibility);
    
};

