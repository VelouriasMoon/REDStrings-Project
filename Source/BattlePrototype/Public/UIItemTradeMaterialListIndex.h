#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIItemTradeMaterialListIndex.generated.h"

class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIItemTradeMaterialListIndex : public UUIBase {
    GENERATED_BODY()
public:
    UUIItemTradeMaterialListIndex();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetItemInfo(const FName& ItemId, int32 needNum, bool isLackMaterial);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animDefaultMax, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectMax, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectInMax, UWidgetAnimation* animDefaultLack, UWidgetAnimation* animSelectLack, UWidgetAnimation* animSelectInLack, UTextBlock* textItemName, UTextBlock* textNumHave, UTextBlock* textNumNeed);
    
};

