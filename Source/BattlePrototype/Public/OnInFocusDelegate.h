#pragma once
#include "CoreMinimal.h"
#include "OnInFocusDelegate.generated.h"

class ADebuggingItemBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInFocus, const ADebuggingItemBase*, InItem);

