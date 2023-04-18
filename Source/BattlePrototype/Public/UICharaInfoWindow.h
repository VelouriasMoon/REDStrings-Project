#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UICharaInfoWindow.generated.h"

class UImage;
class UREDOverlay;
class UREDScrollBoxSimple;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUICharaInfoWindow : public UUIBase {
    GENERATED_BODY()
public:
    UUICharaInfoWindow();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault1, UWidgetAnimation* animDefault2, UWidgetAnimation* animDefault1_2, UWidgetAnimation* animDefault2_1, UTextBlock* textCharaName, UTextBlock* textCategoryName, UTextBlock* textCharaInfo, UTextBlock* textCharaDetails, UImage* charaImage, UREDScrollBoxSimple* scrollBox1, UREDScrollBoxSimple* scrollBox2, UREDOverlay* mousehitthubnail);
    
};

