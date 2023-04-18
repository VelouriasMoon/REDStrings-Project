#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "UIBase.h"
#include "UIQuestMenu.generated.h"

class UBorder;
class UREDScrollBox;
class UTextBlock;
class UUIGuide;
class UUIMainContents;
class UUIQuestChoice;
class UUIQuestDetailsBonds;
class UUIQuestDetailsMain;
class UUIQuestDetailsSub;
class UUIQuestListIndex;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIQuestMenu : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ListElementSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ListOffsetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ListIndexClass;
    
public:
    UUIQuestMenu();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetContentsChange(bool IsChange);
    
protected:
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
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isPlayingProgramAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isEndMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool isEndErrorPopup();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animInfoWindow, UWidgetAnimation* animInfoWindowIn, UWidgetAnimation* animInfoWindowOut, UBorder* borderAllColor, UREDScrollBox* ScrollBox, UUIQuestListIndex* uiListIndexBase, UUIQuestChoice* childQuestPopup, UUIBase* childErrorPopup, UUIQuestDetailsMain* childDetailsMain, UUIQuestDetailsSub* childDetailsSub, UUIQuestDetailsBonds* childDetailsBounds);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeCommonParts(UUIMainContents* UIMainContents, UTextBlock* textHelp, UUIGuide* uiKeyGuide);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeCategory(int32 Category, UUserWidget* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UWidgetAnimation* animUnselect, UTextBlock* textCategory);
    
    UFUNCTION(BlueprintCallable)
    void InitializeArrowLR(int32 Index, UUserWidget* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision);
    
};

