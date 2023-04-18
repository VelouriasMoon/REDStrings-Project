#pragma once
#include "CoreMinimal.h"
#include "UIConfigSelectBase.h"
#include "UIConfigSelect2.generated.h"

class UTextBlock;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIConfigSelect2 : public UUIConfigSelectBase {
    GENERATED_BODY()
public:
    UUIConfigSelect2();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UTextBlock* textTitle);
    
    UFUNCTION(BlueprintCallable)
    void initializeIndex(int32 Index, UUserWidget* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UWidgetAnimation* animEnable, UWidgetAnimation* animEnableIn, UWidgetAnimation* animEnableOut, UTextBlock* textIndex);
    
};

