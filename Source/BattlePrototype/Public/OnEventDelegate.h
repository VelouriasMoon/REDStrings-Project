#pragma once
#include "CoreMinimal.h"
#include "OnEventDelegate.generated.h"

class ADebuggingItemEvent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEvent, const ADebuggingItemEvent*, InItem);

