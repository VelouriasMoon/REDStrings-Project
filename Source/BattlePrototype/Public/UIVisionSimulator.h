#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "EItemIcon.h"
#include "EItemRarity.h"
#include "UIBase.h"
#include "UIVisionSimulator.generated.h"

class ABattleSimulatorManager;
class UBorder;
class UImage;
class UOverlay;
class UREDScrollBox;
class UREDScrollBoxSimple;
class USpacer;
class UTextBlock;
class UUIGuide;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIVisionSimulator : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ListElementSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ListOffsetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ListIndexClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABattleSimulatorManager* m_pBattleSimulatorManager;
    
public:
    UUIVisionSimulator();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemRarity(UImage* imageRarity, EItemRarity rarity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemIcon(UImage* imageCategory, EItemIcon Category);
    
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
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animDefault2, UWidgetAnimation* animChange1, UWidgetAnimation* animChange2, UREDScrollBox* scrollBoxMain, UUIGuide* childGuide, UTextBlock* textScreenTitle, UImage* imageIconDifficulty, UImage* imageIconDifficulty2, UTextBlock* textMissionTitle, UTextBlock* textMissionNumber, UREDScrollBoxSimple* scrollBoxSub, UTextBlock* textOrderTitle, UBorder* borderOrder, UTextBlock* textOrderDetail, UTextBlock* textLocationTitle, UTextBlock* textLocationDetail, UTextBlock* textMissionEnemyTitle, UTextBlock* textMissionEnemy0, UTextBlock* textMissionEnemy1, UTextBlock* textMissionEnemy2, UTextBlock* textMissionEnemy3, UTextBlock* textMissionEnemy4, UTextBlock* textMissionItem, UTextBlock* textOverviewTitle, USpacer* spaceOverview);
    
    UFUNCTION(BlueprintCallable)
    void InitializeMainItems(int32 Index, UOverlay* textSet, UImage* imageItemRarity, UImage* imageItemCategory);
    
    UFUNCTION(BlueprintCallable)
    void InitializeHighScore(int32 Index, UImage* imageFace, UTextBlock* textDifficultyTitle, UTextBlock* textDifficultyDetail, UTextBlock* textTotalScoreTitle, UTextBlock* textTotalScoreNum, UTextBlock* textTotalScorePiont, UTextBlock* textRankTitle, UImage* imageRank, UTextBlock* textRankNone, UTextBlock* textDate, UTextBlock* textTimehh, UTextBlock* textTimeColon, UTextBlock* textTimemm);
    
    UFUNCTION(BlueprintCallable)
    void InitializeCategory(int32 Index, UUIBase* Widget, UImage* imageSeparator, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UTextBlock* textName);
    
    UFUNCTION(BlueprintCallable)
    void InitializeArrowLR(int32 Index, UUIBase* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision);
    
};

