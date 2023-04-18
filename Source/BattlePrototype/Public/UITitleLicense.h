#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UITitleLicense.generated.h"

class UREDScrollBoxSimple;
class UREDTextBlock;
class UUIGuide;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUITitleLicense : public UUIBase {
    GENERATED_BODY()
public:
    UUITitleLicense();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animDefault, UREDTextBlock* textTitle, UREDTextBlock* textHelp, UREDScrollBoxSimple* ScrollBox, UUIGuide* UIGuide);
    
};

