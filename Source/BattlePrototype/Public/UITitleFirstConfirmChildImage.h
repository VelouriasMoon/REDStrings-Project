#pragma once
#include "CoreMinimal.h"
#include "UITitleFirstConfirmChildBase.h"
#include "UITitleFirstConfirmChildImage.generated.h"

class UImage;
class UREDScrollBoxSimple;
class UREDTextBlock;
class UUITitleFirstConfirmSelect2;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUITitleFirstConfirmChildImage : public UUITitleFirstConfirmChildBase {
    GENERATED_BODY()
public:
    UUITitleFirstConfirmChildImage();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animDefault, UImage* imageEulaFull_1, UImage* imageEulaFull_2, UImage* imageEulaHalf_1, UImage* imageEulaHalf_2, UImage* imagePrivacyPolicy, UREDTextBlock* textTitle, UREDTextBlock* textHelp, UREDScrollBoxSimple* ScrollBox, UUITitleFirstConfirmSelect2* uiSelect2);
    
};

