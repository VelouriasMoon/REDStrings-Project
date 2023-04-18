#pragma once
#include "CoreMinimal.h"
#include "OnComboBoxSettingChangedStringArrayDelegate.generated.h"

class ADebuggingItemStringArray;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnComboBoxSettingChangedStringArray, const ADebuggingItemStringArray*, InItem);

