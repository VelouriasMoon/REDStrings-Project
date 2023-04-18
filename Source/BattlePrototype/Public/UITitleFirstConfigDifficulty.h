#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UITitleFirstConfigDifficulty.generated.h"

class ARSTitleManager;
class UPaperFlipbook;
class UREDHorizonFlipbookWidget;
class UREDTextBlock;
class USpacer;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUITitleFirstConfigDifficulty : public UUIBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARSTitleManager* TitleManager;
    
public:
    UUITitleFirstConfigDifficulty();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTitleManager(ARSTitleManager* NewTitleManager);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isBack() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UTextBlock* textDescription, UTextBlock* textDifficulty, USpacer* guideSpacer);
    
    UFUNCTION(BlueprintCallable)
    void initializeIndex(UUIBase* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UREDTextBlock* textIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitializeArrowLR(bool IsRight, UREDHorizonFlipbookWidget* Widget, UPaperFlipbook* defaultPF, UPaperFlipbook* selectPF, UPaperFlipbook* selectInPF, UPaperFlipbook* selectOutPF, UPaperFlipbook* decisionPF);
    
};

