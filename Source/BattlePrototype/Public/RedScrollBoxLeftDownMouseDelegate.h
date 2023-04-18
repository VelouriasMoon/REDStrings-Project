#pragma once
#include "CoreMinimal.h"
#include "RedScrollBoxLeftDownMouseDelegate.generated.h"

class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRedScrollBoxLeftDownMouse, int32, Cursor, UUserWidget*, pWidget);

