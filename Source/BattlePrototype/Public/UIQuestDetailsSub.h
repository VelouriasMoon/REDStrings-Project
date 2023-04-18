#pragma once
#include "CoreMinimal.h"
#include "EItemIcon.h"
#include "EItemRarity.h"
#include "UIBase.h"
#include "UIQuestDetailsSub.generated.h"

class UCanvasPanel;
class UHorizontalBox;
class UImage;
class UOverlay;
class UREDScrollBoxSimple;
class USpacer;
class UTextBlock;
class UUIQuestIcon;
class UUIQuestNamePlate;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIQuestDetailsSub : public UUIBase {
    GENERATED_BODY()
public:
    UUIQuestDetailsSub();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemRarity(UImage* imageRarity, EItemRarity rarity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemIcon(UImage* imageCategory, EItemIcon Category);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UREDScrollBoxSimple* ScrollBox, UTextBlock* textTitle, UTextBlock* textIndexClient, UTextBlock* textIndexLocation, UTextBlock* textIndexProgress, UTextBlock* textIndexReward, UTextBlock* textClient, UTextBlock* TextLocation, USpacer* spacerDescription1, USpacer* spacerDescription2, UUIQuestIcon* UIQuestIcon, UUIQuestNamePlate* UIQuestNamePlate, UCanvasPanel* questPanel);
    
    UFUNCTION(BlueprintCallable)
    void InitializeReward(int32 Index, UOverlay* textSet, UImage* imageItemRarity, UImage* imageItemCategory);
    
    UFUNCTION(BlueprintCallable)
    void InitializeProgress(int32 Index, UHorizontalBox* HorizontalBox, UOverlay* iconSet, UImage* imageItemRarity, UImage* imageItemCategory, UTextBlock* TextBlock, UOverlay* numSet, UTextBlock* textProgressCurrent, UTextBlock* textProgressSlash, UTextBlock* textProgressTarget);
    
};

