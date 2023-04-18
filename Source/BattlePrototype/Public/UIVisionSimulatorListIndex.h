#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIVisionSimulatorListIndex.generated.h"

class UImage;
class UOverlay;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIVisionSimulatorListIndex : public UUIBase {
    GENERATED_BODY()
public:
    UUIVisionSimulatorListIndex();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animDefaultLock, UWidgetAnimation* animSelectLock, UWidgetAnimation* animSelectInLock, UImage* imageNewIcon, UOverlay* overlayRankIcon, UImage* imageRankIcon, UImage* imageRankIconAdd, UTextBlock* textName, UTextBlock* textMissionNumber);
    
};

