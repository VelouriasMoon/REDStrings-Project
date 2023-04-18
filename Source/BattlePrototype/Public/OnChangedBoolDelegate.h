#pragma once
#include "CoreMinimal.h"
#include "OnChangedBoolDelegate.generated.h"

class ADebuggingItemBool;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangedBool, const ADebuggingItemBool*, InItem);

