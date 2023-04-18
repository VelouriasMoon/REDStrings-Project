#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UITitleMenuParts.generated.h"

class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUITitleMenuParts : public UUIBase {
    GENERATED_BODY()
public:
    UUITitleMenuParts();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeUnSelectAnime(UWidgetAnimation* _cursor_menu_out, UWidgetAnimation* _cursor_menu_in, UWidgetAnimation* _cursor_menu_default_none, UWidgetAnimation* _cursor_menu_default_, UWidgetAnimation* _cursor_menu_select, UWidgetAnimation* _cursor_menu_decision);
    
    UFUNCTION(BlueprintCallable)
    void InitializeText(UTextBlock* partsdatatext);
    
    UFUNCTION(BlueprintCallable)
    void InitializeNormalAnime(UWidgetAnimation* _cursor_menu_out, UWidgetAnimation* _cursor_menu_in, UWidgetAnimation* _cursor_menu_default_none, UWidgetAnimation* _cursor_menu_default_, UWidgetAnimation* _cursor_menu_select, UWidgetAnimation* _cursor_menu_decision);
    
};

