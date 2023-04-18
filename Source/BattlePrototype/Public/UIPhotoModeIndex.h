#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIPhotoModeIndex.generated.h"

class UPaperFlipbook;
class UREDHorizonFlipbookWidget;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIPhotoModeIndex : public UUIBase {
    GENERATED_BODY()
public:
    UUIPhotoModeIndex();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animDefaultLock, UWidgetAnimation* animSelectLock, UWidgetAnimation* animSelectInLock, UTextBlock* textTitle, UTextBlock* textParam);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeArrowLR(bool IsRight, UREDHorizonFlipbookWidget* Widget, UPaperFlipbook* defaultPF, UPaperFlipbook* selectPF, UPaperFlipbook* selectInPF, UPaperFlipbook* selectOutPF, UPaperFlipbook* decisionPF);
    
};

