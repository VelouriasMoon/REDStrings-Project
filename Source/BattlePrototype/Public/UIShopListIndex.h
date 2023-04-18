#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "UIBase.h"
#include "UIShopListIndex.generated.h"

class UImage;
class UPaperFlipbook;
class UREDHorizonFlipbookWidget;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIShopListIndex : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor ColorNumHave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor ColorMaxNumHave;
    
public:
    UUIShopListIndex();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetItemInfo(const FName& ItemId, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UImage* imageNewIcon, UTextBlock* textItemName, UTextBlock* textNumHave, UTextBlock* textNumPrice, UTextBlock* textNumBuySell);
    
    UFUNCTION(BlueprintCallable)
    void InitializeArrowLR(bool IsRight, UREDHorizonFlipbookWidget* Widget, UPaperFlipbook* defaultPF, UPaperFlipbook* selectPF, UPaperFlipbook* selectInPF, UPaperFlipbook* selectOutPF, UPaperFlipbook* decisionPF);
    
};

