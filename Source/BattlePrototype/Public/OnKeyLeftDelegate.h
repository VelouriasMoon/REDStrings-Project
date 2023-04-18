#pragma once
#include "CoreMinimal.h"
#include "OnKeyLeftDelegate.generated.h"

class ADebuggingItemBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnKeyLeft, const ADebuggingItemBase*, InItem, bool, IsRepeat, int32, InSpeed);

