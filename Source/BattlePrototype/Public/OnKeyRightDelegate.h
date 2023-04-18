#pragma once
#include "CoreMinimal.h"
#include "OnKeyRightDelegate.generated.h"

class ADebuggingItemBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnKeyRight, const ADebuggingItemBase*, InItem, bool, IsRepeat, int32, InSpeed);

