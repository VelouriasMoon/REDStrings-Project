#include "HorizonWidgetFunctionLibrary.h"

class APlayerController;
class UCanvasPanelSlot;
class UUserWidget;
class UWidget;
class UWidgetAnimation;

UWidget* UHorizonWidgetFunctionLibrary::SetWidgetVisibility(UUserWidget* UserWidget, FName WidgetName, ESlateVisibility eVisiblity) {
    return NULL;
}

UWidget* UHorizonWidgetFunctionLibrary::GetWidgetFromNameRecursively(UUserWidget* pUserWidget, const FName& InWidgetName) {
    return NULL;
}

UWidgetAnimation* UHorizonWidgetFunctionLibrary::GetUserWidgetAnimation(UUserWidget* pUserWidget, const FName& animeName) {
    return NULL;
}

int32 UHorizonWidgetFunctionLibrary::GetUserIndex(UWidget* InWidget) {
    return 0;
}

UCanvasPanelSlot* UHorizonWidgetFunctionLibrary::GetParentCanvasPanelSlot(UWidget* pWidget) {
    return NULL;
}

EHorizonUIInputMode UHorizonWidgetFunctionLibrary::GetInputMode(const APlayerController* InPC) {
    return EHorizonUIInputMode::Invalidated;
}

UHorizonWidgetFunctionLibrary::UHorizonWidgetFunctionLibrary() {
}

