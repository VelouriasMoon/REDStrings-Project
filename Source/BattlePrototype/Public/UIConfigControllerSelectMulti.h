#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIConfigControllerSelectMulti.generated.h"

class UPaperFlipbook;
class UREDHorizonFlipbookWidget;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIConfigControllerSelectMulti : public UUIBase {
    GENERATED_BODY()
public:
    UUIConfigControllerSelectMulti();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UTextBlock* textTitle);
    
    UFUNCTION(BlueprintCallable)
    void InitializeArrowLR(bool IsRight, UREDHorizonFlipbookWidget* Widget, UPaperFlipbook* defaultPF, UPaperFlipbook* selectPF, UPaperFlipbook* selectInPF, UPaperFlipbook* selectOutPF, UPaperFlipbook* decisionPF);
    
};

