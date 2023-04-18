#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UILoadingChapter.generated.h"

class UImage;
class UREDRetainerBox;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUILoadingChapter : public UUIBase {
    GENERATED_BODY()
public:
    UUILoadingChapter();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetId(int32 ID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsClosable(bool& Closable) const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefaultNone, UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UTextBlock* textTitle, UTextBlock* textInfo, UImage* imageLocation, UREDRetainerBox* retainerBoxNoise1);
    
};

