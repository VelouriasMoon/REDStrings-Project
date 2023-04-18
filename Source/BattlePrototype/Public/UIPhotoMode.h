#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIPhotoMode.generated.h"

class UOverlay;
class USpacer;
class UUIPhotoModeIndex;
class UUIPhotoModeParts;
class UWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIPhotoMode : public UUIBase {
    GENERATED_BODY()
public:
    UUIPhotoMode();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeUIOnOffParentList(const TArray<UWidget*>& uIOnOffParentList);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault1, UWidgetAnimation* animDefault2, UWidgetAnimation* animIn, UWidgetAnimation* animOut1, UWidgetAnimation* animOut2, UWidgetAnimation* animChange1, UWidgetAnimation* animChange2, UUIPhotoModeParts* UIPhotoModeParts, UUIPhotoModeIndex* uiPhotoModeIndex1, UUIPhotoModeIndex* uiPhotoModeIndex2, UUIPhotoModeIndex* uiPhotoModeIndex3, UUIPhotoModeIndex* uiPhotoModeIndex4, UUIPhotoModeIndex* uiPhotoModeIndex5, UUIPhotoModeIndex* uiPhotoModeIndex6, UUIPhotoModeIndex* uiPhotoModeIndex7, UUIPhotoModeIndex* uiPhotoModeIndex8, UUIPhotoModeIndex* uiPhotoModeIndex9, USpacer* guideSpacer, USpacer* guideSpacerMenuOnOnff, const TArray<UOverlay*>& uiOverlayOperationGuideParentList);
    
    UFUNCTION(BlueprintCallable)
    void InitializeHideOnShootList(const TArray<UWidget*>& hideOnShootList);
    
};

