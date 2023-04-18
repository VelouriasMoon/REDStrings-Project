#pragma once
#include "CoreMinimal.h"
#include "OnChangedFloatDelegate.generated.h"

class ADebuggingItemFloat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangedFloat, const ADebuggingItemFloat*, InItem);

