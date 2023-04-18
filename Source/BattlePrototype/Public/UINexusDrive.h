#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UINexusDrive.generated.h"

class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUINexusDrive : public UUIBase {
    GENERATED_BODY()
public:
    UUINexusDrive();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState);
    
public:
    UFUNCTION(BlueprintCallable)
    bool SetUsing(bool IsUsing);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetupText();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UTextBlock* pTextBlock, UWidgetAnimation* pAnimDefault1, UWidgetAnimation* pAnimIn1, UWidgetAnimation* pAnimOut1, UWidgetAnimation* pAnimChange1, UWidgetAnimation* pAnimDefault2, UWidgetAnimation* pAnimIn2, UWidgetAnimation* pAnimOut2, UWidgetAnimation* pAnimChange2);
    
};

