#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIItemDetails.generated.h"

class UImage;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIItemDetails : public UUIBase {
    GENERATED_BODY()
public:
    UUIItemDetails();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetItemInfo(const FName& ItemId, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animDefaultMax, UWidgetAnimation* animDefaultNoSet, UImage* imageNewIcon, UTextBlock* textItemName, UTextBlock* textParameter, UTextBlock* textItemDescription, UTextBlock* textHave, UTextBlock* textItemHaveNum, UTextBlock* textItemMaxNum, UTextBlock* textItemNumSlash);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearItemInfo();
    
};

