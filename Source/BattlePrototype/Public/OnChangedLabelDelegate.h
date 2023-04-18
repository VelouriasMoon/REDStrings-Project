#pragma once
#include "CoreMinimal.h"
#include "OnChangedLabelDelegate.generated.h"

class ADebuggingItemLabel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangedLabel, const ADebuggingItemLabel*, InItem);

