#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIQuestDetailsMain.generated.h"

class UCanvasPanel;
class UImage;
class UOverlay;
class UREDScrollBoxSimple;
class UTextBlock;
class UUIQuestIcon;
class UUIQuestNamePlate;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIQuestDetailsMain : public UUIBase {
    GENERATED_BODY()
public:
    UUIQuestDetailsMain();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProgressIcon(int32 progressIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UTextBlock* textTitle, UREDScrollBoxSimple* ScrollBox, UImage* Image1, UImage* Image2, UImage* image3, UImage* image4, UImage* image5, UUIQuestIcon* UIQuestIcon, UUIQuestNamePlate* UIQuestNamePlate, UCanvasPanel* questPanel, UOverlay* overlayImage1Set, UOverlay* overlayImage2Set, UOverlay* overlayImage3Set, UOverlay* overlayImage4Set, UOverlay* overlayImage5Set, UOverlay* overlayText1Set, UOverlay* overlayText2Set, UOverlay* overlayText3Set, UOverlay* overlayText4Set, UOverlay* overlayText5Set, UOverlay* overlayText6Set);
    
};

