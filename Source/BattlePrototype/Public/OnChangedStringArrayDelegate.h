#pragma once
#include "CoreMinimal.h"
#include "OnChangedStringArrayDelegate.generated.h"

class ADebuggingItemStringArray;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangedStringArray, const ADebuggingItemStringArray*, InItem);

