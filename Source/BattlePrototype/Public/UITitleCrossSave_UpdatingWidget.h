#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "UIBase.h"
#include "UITitleCrossSave_UpdatingWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUITitleCrossSave_UpdatingWidget : public UUIBase {
    GENERATED_BODY()
public:
    UUITitleCrossSave_UpdatingWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLoadingMaterial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLoadingColor(FLinearColor Color);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animDefault, UWidgetAnimation* animNoneDefault);
    
};

