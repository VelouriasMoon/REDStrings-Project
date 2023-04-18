#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIShopTransfer.generated.h"

class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIShopTransfer : public UUIBase {
    GENERATED_BODY()
public:
    UUIShopTransfer();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animBuy, UWidgetAnimation* animSell, UWidgetAnimation* animTrade, UTextBlock* textTransfer1, UTextBlock* textTransfer2);
    
};

