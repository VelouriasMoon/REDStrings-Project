#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EOutgameDebuggingPage.h"
#include "OutgameDebuggingWindowInterface.generated.h"

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UOutgameDebuggingWindowInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IOutgameDebuggingWindowInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangePage(EOutgameDebuggingPage NewPage);
    
};

