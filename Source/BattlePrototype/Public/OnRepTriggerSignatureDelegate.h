#pragma once
#include "CoreMinimal.h"
#include "ERSGamepadInputName.h"
#include "ERSGamepadLayoutType.h"
#include "OnRepTriggerSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRepTriggerSignature, ERSGamepadLayoutType, layout, ERSGamepadInputName, Key);

