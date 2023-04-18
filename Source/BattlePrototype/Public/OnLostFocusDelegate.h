#pragma once
#include "CoreMinimal.h"
#include "OnLostFocusDelegate.generated.h"

class ADebuggingItemBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLostFocus, const ADebuggingItemBase*, InItem);

