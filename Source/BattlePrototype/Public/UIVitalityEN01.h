#pragma once
#include "CoreMinimal.h"
#include "UIHealthControl.h"
#include "UIVitalityEN01.generated.h"

class UImage;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIVitalityEN01 : public UUIHealthControl {
    GENERATED_BODY()
public:
    UUIVitalityEN01();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefaultNone, UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UImage* imageIcon1, UImage* imageIcon2, UImage* imageIcon3, UImage* imageIcon4, UImage* imageIcon5, UTextBlock* textBossName, UImage* imageBarNormal, UImage* imageBarOverride, UImage* imageBarAdd);
    
};

