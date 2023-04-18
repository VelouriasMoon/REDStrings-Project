#pragma once
#include "CoreMinimal.h"
#include "PlayerRegenerateDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerRegenerateDelegate, int32, RegenerateHP);

