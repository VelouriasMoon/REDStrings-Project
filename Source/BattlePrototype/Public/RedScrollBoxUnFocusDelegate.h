#pragma once
#include "CoreMinimal.h"
#include "RedScrollBoxUnFocusDelegate.generated.h"

class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRedScrollBoxUnFocus, UUserWidget*, pWidget);

