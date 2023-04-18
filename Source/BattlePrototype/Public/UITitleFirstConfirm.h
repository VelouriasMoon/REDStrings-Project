#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UITitleFirstConfirm.generated.h"

class ARSTitleManager;
class UUIGuide;
class UUITitleFirstConfirmChildImage;
class UUITitleFirstConfirmChildText;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUITitleFirstConfirm : public UUIBase {
    GENERATED_BODY()
public:
    UUITitleFirstConfirm();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void startAnalytics();
    
    UFUNCTION(BlueprintCallable)
    void SetTitleManager(ARSTitleManager* TitleManager);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCeBank(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animDefault, UUITitleFirstConfirmChildImage* childImage1, UUITitleFirstConfirmChildImage* childImage2, UUITitleFirstConfirmChildText* childText, UUIGuide* UIGuide);
    
};

