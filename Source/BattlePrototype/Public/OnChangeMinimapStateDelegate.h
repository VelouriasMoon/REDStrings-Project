#pragma once
#include "CoreMinimal.h"
#include "EChangeMinimapStateType.h"
#include "OnChangeMinimapStateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnChangeMinimapState, EChangeMinimapStateType, changeType, FName, ID);

