#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemScrSetting.h"
#include "DebuggingItemScrModeChange.generated.h"

class ADebuggingItemStringArray;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemScrModeChange : public ADebuggingItemScrSetting {
    GENERATED_BODY()
public:
    ADebuggingItemScrModeChange();
    UFUNCTION(BlueprintCallable)
    void OnChangeValue(const ADebuggingItemStringArray* InItem);
    
};

