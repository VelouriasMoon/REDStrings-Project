#pragma once
#include "CoreMinimal.h"
#include "UIPhotoModeIndex.h"
#include "UIPhotoModeIndexSlider.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIPhotoModeIndexSlider : public UUIPhotoModeIndex {
    GENERATED_BODY()
public:
    UUIPhotoModeIndexSlider();
private:
    UFUNCTION(BlueprintCallable)
    void InitializeSlider(UImage* imageSlider);
    
};

