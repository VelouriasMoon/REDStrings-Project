#pragma once
#include "CoreMinimal.h"
#include "ETitleFlow.h"
#include "OnEventCursorSelectStartDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnEventCursorSelectStart, ETitleFlow, Cursor);

