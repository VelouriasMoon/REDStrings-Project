#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UITargetBrain.generated.h"

class UBorder;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUITargetBrain : public UUIBase {
    GENERATED_BODY()
public:
    UUITargetBrain();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateButton();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEnable(bool IsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableDecide() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefaultNone, UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animDecision, UWidgetAnimation* animDefault2, UWidgetAnimation* animIn2, UWidgetAnimation* animOut2, UWidgetAnimation* animChange1_2, UWidgetAnimation* animChange2_1, UBorder* borderButtonSet);
    
    UFUNCTION(BlueprintCallable)
    void Decide();
    
    UFUNCTION(BlueprintCallable)
    void CloseThis();
    
};

