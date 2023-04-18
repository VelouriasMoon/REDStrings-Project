#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIConfigChoice.generated.h"

class UOverlay;
class UREDTextBlock;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIConfigChoice : public UUIBase {
    GENERATED_BODY()
public:
    UUIConfigChoice();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UTextBlock* textWindowTitle, UTextBlock* TextMain, UOverlay* overlayGuideSet);
    
    UFUNCTION(BlueprintCallable)
    void initializeIndex(int32 Index, UUIBase* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UREDTextBlock* textIndex);
    
};

