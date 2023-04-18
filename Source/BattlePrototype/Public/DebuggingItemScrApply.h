#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemEvent.h"
#include "DebuggingItemScrApply.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemScrApply : public ADebuggingItemEvent {
    GENERATED_BODY()
public:
    ADebuggingItemScrApply();
    UFUNCTION(BlueprintCallable)
    void ApplyEvent(const ADebuggingItemEvent* InItem);
    
};

