#pragma once
#include "CoreMinimal.h"
#include "OnMinimapChangeFloorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnMinimapChangeFloor, int32, floor);

