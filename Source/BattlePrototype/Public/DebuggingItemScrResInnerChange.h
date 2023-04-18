#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemInt.h"
#include "DebuggingItemScrResInnerChange.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemScrResInnerChange : public ADebuggingItemInt {
    GENERATED_BODY()
public:
    ADebuggingItemScrResInnerChange();
    UFUNCTION(BlueprintCallable)
    void OnChangeValue(const ADebuggingItemInt* InItem);
    
};

