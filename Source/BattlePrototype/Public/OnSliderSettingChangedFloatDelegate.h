#pragma once
#include "CoreMinimal.h"
#include "OnSliderSettingChangedFloatDelegate.generated.h"

class ADebuggingItemFloat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSliderSettingChangedFloat, const ADebuggingItemFloat*, InItem);

