#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UITarget.generated.h"

class USizeBox;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUITarget : public UUIBase {
    GENERATED_BODY()
public:
    UUITarget();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetSize(float Size);
    
    UFUNCTION(BlueprintCallable)
    void SetFlagDisturb(bool isDisturb);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefaultNone, UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animChange, UWidgetAnimation* animOut2, USizeBox* sizeBox0, USizeBox* sizeBoxAdd);
    
    UFUNCTION(BlueprintCallable)
    void Change();
    
};

