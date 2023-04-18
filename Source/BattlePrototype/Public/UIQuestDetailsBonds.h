#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIQuestDetailsBonds.generated.h"

class UCanvasPanel;
class UImage;
class UOverlay;
class UREDScrollBoxSimple;
class UTextBlock;
class UUIQuestIcon;
class UUIQuestNamePlate;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIQuestDetailsBonds : public UUIBase {
    GENERATED_BODY()
public:
    UUIQuestDetailsBonds();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UImage* Image, UImage* imageNoise, UTextBlock* textTitle, UREDScrollBoxSimple* ScrollBox, UUIQuestIcon* UIQuestIcon, UUIQuestNamePlate* UIQuestNamePlate, UCanvasPanel* questPanel, UOverlay* overlayImage);
    
};

