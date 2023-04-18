#pragma once
#include "CoreMinimal.h"
#include "OnChangedIntDelegate.generated.h"

class ADebuggingItemInt;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangedInt, const ADebuggingItemInt*, InItem);

