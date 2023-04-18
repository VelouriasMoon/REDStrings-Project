#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemScrSetting.h"
#include "DebuggingItemScrResOutputChange.generated.h"

class ADebuggingItemStringArray;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemScrResOutputChange : public ADebuggingItemScrSetting {
    GENERATED_BODY()
public:
    ADebuggingItemScrResOutputChange();
    UFUNCTION(BlueprintCallable)
    void OnChangeValue(const ADebuggingItemStringArray* InItem);
    
};

