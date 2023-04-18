#pragma once
#include "CoreMinimal.h"
#include "OnEventSaveLoadSelectStartDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnEventSaveLoadSelectStart, bool, menudata, int32, Slot);

