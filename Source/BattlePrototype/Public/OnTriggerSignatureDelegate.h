#pragma once
#include "CoreMinimal.h"
#include "ERSGamepadInputName.h"
#include "ERSGamepadLayoutType.h"
#include "OnTriggerSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTriggerSignature, ERSGamepadLayoutType, layout, ERSGamepadInputName, Key);

