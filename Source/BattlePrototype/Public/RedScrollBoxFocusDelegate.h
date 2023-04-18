#pragma once
#include "CoreMinimal.h"
#include "RedScrollBoxFocusDelegate.generated.h"

class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRedScrollBoxFocus, UUserWidget*, pWidget);

