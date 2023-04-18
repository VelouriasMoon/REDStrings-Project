#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "UIBase.h"
#include "UISASFrame2.generated.h"

class UImage;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUISASFrame2 : public UUIBase {
    GENERATED_BODY()
public:
    UUISASFrame2();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UImage* imageSasFrame, UImage* imageCvFrame, UWidgetAnimation* animDefault, UWidgetAnimation* animFullIn, UWidgetAnimation* animFull, UWidgetAnimation* animFullOut, UWidgetAnimation* animInFull, UWidgetAnimation* animOutFull, UWidgetAnimation* animFullIn2, UWidgetAnimation* animFull2, UWidgetAnimation* animInFull2, UWidgetAnimation* animOutFull2, FLinearColor colorDefault, FLinearColor colorLockSas, FLinearColor colorLockCv);
    
};

