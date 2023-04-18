#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIPhotoModeParts.generated.h"

class UImage;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIPhotoModeParts : public UUIBase {
    GENERATED_BODY()
public:
    UUIPhotoModeParts();
private:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(const TArray<UWidgetAnimation*>& animLogos, UTextBlock* textCopyright);
    
    UFUNCTION(BlueprintCallable)
    void InitializeFinderList(const TArray<UImage*>& imageFinderList);
    
};

