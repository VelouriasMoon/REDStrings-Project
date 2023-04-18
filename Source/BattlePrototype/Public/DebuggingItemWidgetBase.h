#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DebuggingItemWidgetBase.generated.h"

class ADebuggingItemBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UDebuggingItemWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADebuggingItemBase* Item;
    
    UDebuggingItemWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup();
    
};

