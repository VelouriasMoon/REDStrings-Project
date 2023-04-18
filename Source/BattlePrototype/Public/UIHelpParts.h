#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIHelpParts.generated.h"

class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIHelpParts : public UUIBase {
    GENERATED_BODY()
public:
    UUIHelpParts();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAnime(UWidgetAnimation* cursor_select, UWidgetAnimation* cursor_default_none, UWidgetAnimation* cursor_default);
    
};

