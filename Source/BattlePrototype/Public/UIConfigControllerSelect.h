#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIConfigControllerSelect.generated.h"

class USpacer;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIConfigControllerSelect : public UUIBase {
    GENERATED_BODY()
public:
    UUIConfigControllerSelect();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animIn, UWidgetAnimation* animOut, USpacer* Spacer, UTextBlock* textTitle);
    
};

