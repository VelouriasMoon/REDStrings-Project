#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIQuestIcon.generated.h"

class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIQuestIcon : public UUIBase {
    GENERATED_BODY()
public:
    UUIQuestIcon();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProgress(int32 Progress);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animDefault2, UWidgetAnimation* animDefault3, UWidgetAnimation* animDefault4, UWidgetAnimation* animDefault5, UWidgetAnimation* animDefault6, UTextBlock* textName);
    
};

