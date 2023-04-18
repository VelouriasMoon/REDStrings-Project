#pragma once
#include "CoreMinimal.h"
#include "OnKeySelectDelegate.generated.h"

class ADebuggingItemBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnKeySelect, const ADebuggingItemBase*, InItem, bool, IsRepeat);

