#pragma once
#include "CoreMinimal.h"
#include "EUIMinmapDistanceIcon.h"
#include "EUIMinmapDistanceIconColor.h"
#include "UIBase.h"
#include "UIMinimapDistance.generated.h"

class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIMinimapDistance : public UUIBase {
    GENERATED_BODY()
public:
    UUIMinimapDistance();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetThumbnail(EUIMinmapDistanceIcon Icon);
    
    UFUNCTION(BlueprintCallable)
    void SetTextColor(EUIMinmapDistanceIconColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetDistance(const FString& Num);
    
    UFUNCTION(BlueprintCallable)
    void InitializeText(UTextBlock* distancenum, UTextBlock* distancetext);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAnime(UWidgetAnimation* default_normal, UWidgetAnimation* default_red);
    
};

