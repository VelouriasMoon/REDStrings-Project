#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/SlateWrapperTypes.h"
#include "EHorizonUIInputMode.h"
#include "HorizonWidgetFunctionLibrary.generated.h"

class APlayerController;
class UCanvasPanelSlot;
class UUserWidget;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable)
class HORIZONUI_API UHorizonWidgetFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHorizonWidgetFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static UWidget* SetWidgetVisibility(UUserWidget* UserWidget, FName WidgetName, ESlateVisibility eVisiblity);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* GetWidgetFromNameRecursively(UUserWidget* pUserWidget, const FName& InWidgetName);
    
    UFUNCTION(BlueprintCallable)
    static UWidgetAnimation* GetUserWidgetAnimation(UUserWidget* pUserWidget, const FName& animeName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUserIndex(UWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    static UCanvasPanelSlot* GetParentCanvasPanelSlot(UWidget* pWidget);
    
    UFUNCTION(BlueprintCallable)
    static EHorizonUIInputMode GetInputMode(const APlayerController* InPC);
    
};

