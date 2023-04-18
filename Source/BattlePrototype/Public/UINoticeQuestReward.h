#pragma once
#include "CoreMinimal.h"
#include "EItemIcon.h"
#include "EItemRarity.h"
#include "UIBase.h"
#include "UINoticeQuestReward.generated.h"

class UImage;
class UOverlay;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUINoticeQuestReward : public UUIBase {
    GENERATED_BODY()
public:
    UUINoticeQuestReward();
protected:
    UFUNCTION(BlueprintCallable)
    bool UpdateCursor();
    
    UFUNCTION(BlueprintCallable)
    bool SetRewardText(FName questId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemRarity(UImage* imageRarity, EItemRarity rarity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemCategoryIcon(UImage* imageCategory, EItemIcon Category);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenStartReward(FName questId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeRarity(UImage* rarity1, UImage* rarity2, UImage* rarity3);
    
public:
    UFUNCTION(BlueprintCallable)
    void initializeQuestRewardChoiceIndex(int32 Index, UUIBase* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UTextBlock* textIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeOverlay(UOverlay* overlay1, UOverlay* overlay2, UOverlay* overlay3);
    
    UFUNCTION(BlueprintCallable)
    void InitializeCategory(UImage* category1, UImage* category2, UImage* category3);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getQuestRewardResult() const;
    
};

