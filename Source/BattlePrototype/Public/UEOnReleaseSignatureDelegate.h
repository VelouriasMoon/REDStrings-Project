#pragma once
#include "CoreMinimal.h"
#include "ERSGamepadInputName.h"
#include "ERSGamepadLayoutType.h"
#include "UEOnReleaseSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUEOnReleaseSignature, ERSGamepadLayoutType, layout, ERSGamepadInputName, Key);

