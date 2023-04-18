#pragma once
#include "CoreMinimal.h"
#include "UIConfigSelectBase.h"
#include "UIConfigSelectMulti.generated.h"

class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIConfigSelectMulti : public UUIConfigSelectBase {
    GENERATED_BODY()
public:
    UUIConfigSelectMulti();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animDefaultGlay, UWidgetAnimation* animSelectGlay, UWidgetAnimation* animInGlay, UWidgetAnimation* animOutGlay, UTextBlock* textTitle, UTextBlock* textParameter);
    
};

