#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIConfigKeyboardMouseListIndex.generated.h"

class UOverlay;
class UREDOverlay;
class USpacer;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIConfigKeyboardMouseListIndex : public UUIBase {
    GENERATED_BODY()
public:
    UUIConfigKeyboardMouseListIndex();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThisFixed(UWidgetAnimation* animDefault2, UWidgetAnimation* animSelect2, UWidgetAnimation* animSelect2_in, UWidgetAnimation* animSelect2_out, UTextBlock* textTitle2, UOverlay* overlayFrameSet1, UOverlay* overlayFrameSet2, USpacer* spacerSet2);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animSelect_L, UWidgetAnimation* animSelect_L_in, UWidgetAnimation* animSelect_L_out, UWidgetAnimation* animDecision_L, UWidgetAnimation* animSelect_L2, UWidgetAnimation* animCancel_L2, UWidgetAnimation* animSelect_R, UWidgetAnimation* animSelect_R_in, UWidgetAnimation* animSelect_R_out, UWidgetAnimation* animDecision_R, UWidgetAnimation* animSelect_R2, UWidgetAnimation* animCancel_R2, UWidgetAnimation* animChange_L_R, UWidgetAnimation* animChange_R_L, UTextBlock* textTitle);
    
    UFUNCTION(BlueprintCallable)
    void InitializeMouseHit(UREDOverlay* pg_set_2, UREDOverlay* pg_set_3);
    
};

