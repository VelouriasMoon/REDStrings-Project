#pragma once
#include "CoreMinimal.h"
#include "ERSInputDeviceType.h"
#include "ChangeInputTypeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeInputTypeDelegate, ERSInputDeviceType, Type);

