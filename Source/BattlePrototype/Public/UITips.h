#pragma once
#include "CoreMinimal.h"
#include "EHelpTutorial.h"
#include "UIBase.h"
#include "UITips.generated.h"

class UImage;
class UTextBlock;
class UUIGuide;
class UUIHelpParts;
class UUITutoTipsParts;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUITips : public UUIBase {
    GENERATED_BODY()
public:
    UUITips();
    UFUNCTION(BlueprintCallable)
    void UpdateStateTips(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void Start(EHelpTutorial helpID, bool notPauseControll, bool notCloseOfPause, bool IsFade);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupTextSize();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeTips(UUIGuide* uGuide, UTextBlock* textGuide, UUITutoTipsParts* ututotipsdata, UImage* imageFade);
    
    UFUNCTION(BlueprintCallable)
    void InitializeArrow(int32 Index, UUIHelpParts* arrow);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAnime(UWidgetAnimation* Out, UWidgetAnimation* In, UWidgetAnimation* default_none, UWidgetAnimation* default_);
    
};

