#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemGroup.h"
#include "DebuggingItemFlagManagerGroup.generated.h"

class ADebuggingItemBool;
class ADebuggingItemBool2;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemFlagManagerGroup : public ADebuggingItemGroup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ADebuggingItemBool2>> FlagBool;
    
public:
    ADebuggingItemFlagManagerGroup();
    UFUNCTION(BlueprintCallable)
    void OnPageOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeFlagBool(const ADebuggingItemBool* Item);
    
};

