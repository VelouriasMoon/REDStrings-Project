#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UICodeListIndex.generated.h"

class UImage;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUICodeListIndex : public UUIBase {
    GENERATED_BODY()
public:
    UUICodeListIndex();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animDefaultClear, UWidgetAnimation* animSelectClear, UWidgetAnimation* animSelectInClear, UImage* imageNewIcon, UTextBlock* textName);
    
};

