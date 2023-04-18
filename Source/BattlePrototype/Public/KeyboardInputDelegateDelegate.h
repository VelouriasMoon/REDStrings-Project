#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "KeyboardInputDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKeyboardInputDelegate, FKey, KeyName);

