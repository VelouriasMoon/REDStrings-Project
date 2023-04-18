#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIFade.generated.h"

class UImage;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIFade : public UUIBase {
    GENERATED_BODY()
public:
    UUIFade();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UImage* imageBG);
    
};

