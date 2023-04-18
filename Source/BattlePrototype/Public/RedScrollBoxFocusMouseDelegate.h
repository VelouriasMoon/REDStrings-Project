#pragma once
#include "CoreMinimal.h"
#include "RedScrollBoxFocusMouseDelegate.generated.h"

class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRedScrollBoxFocusMouse, int32, isMouseScroll, int32, Cursor, UUserWidget*, pWidget);

