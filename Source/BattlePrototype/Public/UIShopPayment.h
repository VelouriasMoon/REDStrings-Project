#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIShopPayment.generated.h"

class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIShopPayment : public UUIBase {
    GENERATED_BODY()
public:
    UUIShopPayment();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animDefault2, UWidgetAnimation* animDefault3, UTextBlock* textMoneyInHand, UTextBlock* textMoneyAfter, UTextBlock* textSubtotal, UTextBlock* textNumMoneyInHand, UTextBlock* textNumMoneyAfter, UTextBlock* textNumSubtotal);
    
};

