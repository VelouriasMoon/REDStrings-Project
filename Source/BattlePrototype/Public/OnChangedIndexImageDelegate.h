#pragma once
#include "CoreMinimal.h"
#include "OnChangedIndexImageDelegate.generated.h"

class ADebuggingItemImage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangedIndexImage, const ADebuggingItemImage*, InItem);

