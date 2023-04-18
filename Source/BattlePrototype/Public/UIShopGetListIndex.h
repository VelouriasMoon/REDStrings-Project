#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIShopGetListIndex.generated.h"

class UImage;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIShopGetListIndex : public UUIBase {
    GENERATED_BODY()
public:
    UUIShopGetListIndex();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProgressIcon(int32 Progress);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animDefaultLock, UWidgetAnimation* animSelectLock, UWidgetAnimation* animSelectInLock, UImage* imageNewIcon, UTextBlock* textItemName);
    
};

