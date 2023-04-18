#pragma once
#include "CoreMinimal.h"
#include "OnChangedImageImageDelegate.generated.h"

class ADebuggingItemImage;
class UTexture;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangedImageImage, const ADebuggingItemImage*, InItem, UTexture*, Texture);

