#pragma once
#include "CoreMinimal.h"
#include "ERSGamepadInputName.h"
#include "ERSGamepadLayoutType.h"
#include "UEOnPushSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUEOnPushSignature, ERSGamepadLayoutType, layout, ERSGamepadInputName, Key);

