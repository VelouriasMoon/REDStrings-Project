#pragma once
#include "CoreMinimal.h"
#include "EGameOverResult.h"
#include "UIBase.h"
#include "UIGameOver.generated.h"

class UTextBlock;
class UUIGuide;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIGameOver : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultIndex;
    
public:
    UUIGameOver();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartGameOver();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnd() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOutRetry, UWidgetAnimation* animOutTitle, UTextBlock* textGameOver, UTextBlock* textDescription, UTextBlock* textRetry, UTextBlock* textReturnToTitle, UUIGuide* childKeyGuide, UUserWidget* childWidget, UWidgetAnimation* animChildDefault, UWidgetAnimation* animChildIn, UWidgetAnimation* animChildOutRetry, UWidgetAnimation* animChildOutTitle);
    
    UFUNCTION(BlueprintCallable)
    void initializeIndex(int32 Index, UUIBase* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animDecision);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName getTargetBossID();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameOverResult getResult() const;
    
};

