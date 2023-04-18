#pragma once
#include "CoreMinimal.h"
#include "OnEventCharaSelectStartDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnEventCharaSelectStart, int32, Cursor);

