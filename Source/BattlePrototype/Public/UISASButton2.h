#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UISASButton2.generated.h"

class UImage;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUISASButton2 : public UUIBase {
    GENERATED_BODY()
public:
    UUISASButton2();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState);
    
    UFUNCTION(BlueprintCallable)
    void SetReadyFlag(bool IsReady);
    
    UFUNCTION(BlueprintCallable)
    void SetPageFlag(bool IsPage);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animChangeSas1, UWidgetAnimation* animDefaultSas, UWidgetAnimation* animChangeSas2, UWidgetAnimation* animDecisionSas, UWidgetAnimation* animChangePage1, UWidgetAnimation* animDefaultPage, UWidgetAnimation* animChangePage2, UWidgetAnimation* animDecisionPage, UImage* imageSasIconFont, UImage* imageSasButton);
    
    UFUNCTION(BlueprintCallable)
    void Decide();
    
};

