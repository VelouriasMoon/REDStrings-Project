#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIGeneralChoice.generated.h"

class UImage;
class UREDTextBlock;
class UTextBlock;
class UVerticalBox;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIGeneralChoice : public UUIBase {
    GENERATED_BODY()
public:
    UUIGeneralChoice();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void start4(const FString& TextMain, int32 DefaultIndex, const FString& textIndex1, const FString& textIndex2, const FString& textIndex3, const FString& textIndex4, bool cancelable, int32 CancelIndex, bool IsFade);
    
    UFUNCTION(BlueprintCallable)
    void start3(const FString& TextMain, int32 DefaultIndex, const FString& textIndex1, const FString& textIndex2, const FString& textIndex3, bool cancelable, int32 CancelIndex, bool IsFade);
    
    UFUNCTION(BlueprintCallable)
    void start2(const FString& TextMain, int32 DefaultIndex, const FString& textIndex1, const FString& textIndex2, bool cancelable, int32 CancelIndex, bool IsFade);
    
    UFUNCTION(BlueprintCallable)
    void start1(const FString& TextMain, const FString& textIndex, bool cancelable, int32 CancelIndex, bool IsFade);
    
    UFUNCTION(BlueprintCallable)
    void notice_start2(const FString& TextMain, int32 DefaultIndex, const FString& textIndex1, const FString& textIndex2);
    
    UFUNCTION(BlueprintCallable)
    void notice_start1(const FString& TextMain, const FString& textIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCancel() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UTextBlock* TextMain, UVerticalBox* indexListParent, UImage* imageGhost, UImage* imagepgBlack);
    
    UFUNCTION(BlueprintCallable)
    void initializeIndex(int32 Index, UUIBase* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UREDTextBlock* textIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getResult() const;
    
};

