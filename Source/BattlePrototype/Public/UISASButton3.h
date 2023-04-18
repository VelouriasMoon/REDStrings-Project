#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UISASButton3.generated.h"

class UImage;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUISASButton3 : public UUIBase {
    GENERATED_BODY()
public:
    UUISASButton3();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState);
    
    UFUNCTION(BlueprintCallable)
    void SetReadyFlag(bool IsReady);
    
    UFUNCTION(BlueprintCallable)
    void SetPageFlag(bool IsPage);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animChangeCv1, UWidgetAnimation* animDefaultCv, UWidgetAnimation* animChangeCv2, UWidgetAnimation* animDecisionCv, UWidgetAnimation* animChangePage1, UWidgetAnimation* animDefaultPage, UWidgetAnimation* animChangePage2, UWidgetAnimation* animDecisionPage, UImage* imageSasIconFont, UImage* imageSasButton);
    
    UFUNCTION(BlueprintCallable)
    void Decide();
    
};

