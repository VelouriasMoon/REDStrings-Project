#pragma once
#include "CoreMinimal.h"
#include "RedScrollBoxUpdateElementDelegate.generated.h"

class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRedScrollBoxUpdateElement, int32, Index, UUserWidget*, pWidget);

