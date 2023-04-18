#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UICharaPresentListIndex.generated.h"

class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUICharaPresentListIndex : public UUIBase {
    GENERATED_BODY()
public:
    UUICharaPresentListIndex();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetItemInfo(const FName& ItemId);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UTextBlock* textItemName);
    
};

