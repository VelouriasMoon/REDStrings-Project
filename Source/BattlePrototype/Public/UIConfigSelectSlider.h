#pragma once
#include "CoreMinimal.h"
#include "UIConfigSelectBase.h"
#include "UIConfigSelectSlider.generated.h"

class UREDImage;
class UREDOverlay;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIConfigSelectSlider : public UUIConfigSelectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxX;
    
public:
    UUIConfigSelectSlider();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UTextBlock* textTitle, UREDImage* imageSlider, UREDOverlay* gauge_set);
    
};

