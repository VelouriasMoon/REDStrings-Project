#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UISaveLoadChoice.generated.h"

class UOverlay;
class UTextBlock;
class UVerticalBox;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUISaveLoadChoice : public UUIBase {
    GENERATED_BODY()
public:
    UUISaveLoadChoice();
    UFUNCTION(BlueprintCallable)
    void UpdateStateSaveLoadChoice(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    bool StartSaveLoadChoice(const FString& textTitle, const FString& TextMain, int32 DefaultIndex, const FString& textIndex1, const FString& textIndex2, int32 textNum, bool cancelable, int32 CancelIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitializeText(UTextBlock* textTitle, UTextBlock* TextMain, UVerticalBox* textVerticalBox, UOverlay* guideOverlay);
    
    UFUNCTION(BlueprintCallable)
    void initializeSaveLoadSelectIndex(int32 Index, UUIBase* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UTextBlock* textIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAnime(UWidgetAnimation* default_none, UWidgetAnimation* default_);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool getResultAct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getResult() const;
    
};

