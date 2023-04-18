#pragma once
#include "CoreMinimal.h"
#include "HorizonUserWidget.h"
#include "HorizonDesignableUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HORIZONUI_API UHorizonDesignableUserWidget : public UHorizonUserWidget {
    GENERATED_BODY()
public:
    UHorizonDesignableUserWidget();
    UFUNCTION(BlueprintCallable)
    void SynchronizeProperties();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSynchronizeProperties();
    
};

