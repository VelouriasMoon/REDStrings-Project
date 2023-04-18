#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIHelpPartsList.generated.h"

class UImage;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIHelpPartsList : public UUIBase {
    GENERATED_BODY()
public:
    UUIHelpPartsList();
    UFUNCTION(BlueprintCallable)
    void UpdateStateHelpPartsList(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeListPartsList(UTextBlock* TextList, UImage* imageNew);
    
    UFUNCTION(BlueprintCallable)
    void InitializeListAnime(UWidgetAnimation* Out, UWidgetAnimation* In, UWidgetAnimation* select, UWidgetAnimation* default_);
    
};

