#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIScarletLogo.generated.h"

class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIScarletLogo : public UUIBase {
    GENERATED_BODY()
public:
    UUIScarletLogo();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAnime(UWidgetAnimation* Out, UWidgetAnimation* In, UWidgetAnimation* default_, UWidgetAnimation* out_title, UWidgetAnimation* in_title, UWidgetAnimation* default_title);
    
};

