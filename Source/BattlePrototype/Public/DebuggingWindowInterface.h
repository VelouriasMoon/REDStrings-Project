#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EDebuggingPage.h"
#include "DebuggingWindowInterface.generated.h"

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UDebuggingWindowInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IDebuggingWindowInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangePage(EDebuggingPage NewPage);
    
};

