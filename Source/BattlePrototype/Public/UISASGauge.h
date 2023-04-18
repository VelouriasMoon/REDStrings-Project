#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "E_SASButton.h"
#include "UIBase.h"
#include "UISASGauge.generated.h"

class UOverlay;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUISASGauge : public UUIBase {
    GENERATED_BODY()
public:
    UUISASGauge();
    UFUNCTION(BlueprintCallable)
    void setIconScale(FVector2D Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButton(E_SASButton Button);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animGauge_0_100, UOverlay* Overlay);
    
};

