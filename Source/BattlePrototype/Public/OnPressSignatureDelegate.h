#pragma once
#include "CoreMinimal.h"
#include "ERSGamepadInputName.h"
#include "ERSGamepadLayoutType.h"
#include "OnPressSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPressSignature, ERSGamepadLayoutType, layout, ERSGamepadInputName, Key);

