#pragma once
#include "CoreMinimal.h"
#include "OnSliderSettingChangedIntDelegate.generated.h"

class ADebuggingItemInt;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSliderSettingChangedInt, const ADebuggingItemInt*, InItem);

