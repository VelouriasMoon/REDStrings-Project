#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "UIBase.h"
#include "UIItemListIndex.generated.h"

class UBorder;
class UImage;
class UOverlay;
class UREDOverlay;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIItemListIndex : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor ColorNumHave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor ColorMaxNumHave;
    
public:
    UUIItemListIndex();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetItemInfoR(const FName& ItemId, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetItemInfoL(const FName& ItemId, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animSelectL, UWidgetAnimation* animSelectInL, UBorder* borderHaveL, UWidgetAnimation* animSelectR, UWidgetAnimation* animSelectInR, UBorder* borderHaveR, UWidgetAnimation* animChangeR, UWidgetAnimation* animChangeL, UImage* imageNewIconL, UTextBlock* textItemNameL, UTextBlock* textNumHaveL, UOverlay* overlayR, UImage* imageNewIconR, UTextBlock* textItemNameR, UTextBlock* textNumHaveR);
    
    UFUNCTION(BlueprintCallable)
    void InitializeOverlay(UREDOverlay* listLset, UREDOverlay* listRset);
    
};

