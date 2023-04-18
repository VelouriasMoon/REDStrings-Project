#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemBase.h"
#include "DebuggingItemGroup.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemGroup : public ADebuggingItemBase {
    GENERATED_BODY()
public:
    ADebuggingItemGroup();
    UFUNCTION(BlueprintCallable)
    void UnregisterChildFromItem(ADebuggingItemBase* InItem);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterChildFromHashName(const FText& InHashName);
    
    UFUNCTION(BlueprintCallable)
    void RegisterChild(ADebuggingItemBase* InItem);
    
};

