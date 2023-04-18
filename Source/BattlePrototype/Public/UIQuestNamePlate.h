#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIQuestNamePlate.generated.h"

class UOverlay;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIQuestNamePlate : public UUIBase {
    GENERATED_BODY()
public:
    UUIQuestNamePlate();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UOverlay* faceYuito, UOverlay* faceKasane, UTextBlock* textName);
    
};

