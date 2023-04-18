#pragma once
#include "CoreMinimal.h"
#include "RedScrollBoxUnFocusMouseDelegate.generated.h"

class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRedScrollBoxUnFocusMouse, int32, isMouseScroll, int32, Cursor, UUserWidget*, pWidget);

