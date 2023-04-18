#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "Math/Vector2D.h"
#include "EClearGetterType.h"
#include "EItemIcon.h"
#include "EItemRarity.h"
#include "UIBase.h"
#include "UIClearGetter.generated.h"

class UBorder;
class UCanvasPanel;
class UImage;
class UOverlay;
class UREDScrollBox;
class UREDScrollBoxSimple;
class USpacer;
class UTextBlock;
class UUIBooksTop;
class UUIGuide;
class UUIMainContents;
class UUIQuestChoice;
class UUIQuestIcon;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIClearGetter : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ListElementSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ListOffsetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ListIndexClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FontColorDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FontColorRED;
    
public:
    UUIClearGetter();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemRarity(UImage* imageRarity, EItemRarity rarity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemIcon(UImage* imageCategory, EItemIcon Category);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnClearMission(EClearGetterType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListUpdateElement(int32 Index, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListUnFocusMouse(int32 isMouseScroll, int32 Index, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListUnFocus(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListFocusMouse(int32 isMouseScroll, int32 Index, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListFocus(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UBorder* borderAllColor, UREDScrollBox* scrollBoxMain, UREDScrollBoxSimple* scrollBoxSub, UTextBlock* textTitle, UTextBlock* textIndexProgress, UTextBlock* textIndexReward, USpacer* spacerDescription1, USpacer* spacerDescription2, UUIQuestIcon* UIQuestIcon, UCanvasPanel* questPanel, UOverlay* overlayProgressAll, UImage* imageLineQuest, UTextBlock* textProgressName);
    
    UFUNCTION(BlueprintCallable)
    void InitializeReward(int32 Index, UOverlay* textSet, UImage* imageItemRarity, UImage* imageItemCategory);
    
    UFUNCTION(BlueprintCallable)
    void InitializeProgressTime(UBorder* borderCurrentTime, UTextBlock* textCurrentTimeHH, UTextBlock* textCurrentTimeSeparate1, UTextBlock* textCurrentTimeMM, UTextBlock* textCurrentTimeSeparate2, UTextBlock* textCurrentTimeSS, UTextBlock* textSlash, UOverlay* overlayTargetTime, UTextBlock* textTargetTimeHH, UTextBlock* textTargetTimeSeparate1, UTextBlock* textTargetTimeMM, UTextBlock* textTargetTimeSeparate2, UTextBlock* textTargetTimeSS, UTextBlock* textBest, UOverlay* overlayBestTime, UTextBlock* textBestTimeHH, UTextBlock* textBestTimeSeparate1, UTextBlock* textBestTimeMM, UTextBlock* textBestTimeSeparate2, UTextBlock* textBestTimeSS);
    
    UFUNCTION(BlueprintCallable)
    void InitializeProgressItem(UOverlay* iconSet, UImage* imageItemRarity, UImage* imageItemCategory, UOverlay* numSet, UBorder* borderCurrent, UTextBlock* textProgressCurrent, UTextBlock* textProgressSlash, UTextBlock* textProgressTarget);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeFromMain(UUIMainContents* UIMainContents, UUIGuide* uiKeyGuide, UTextBlock* textHelp);
    
    UFUNCTION(BlueprintCallable)
    void InitializeFromBooks(UUIBooksTop* Parent, UUIQuestChoice* uiQuestPopup);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallEvent(const FString& eventBPFilePath);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddExp(int32 Exp);
    
};

