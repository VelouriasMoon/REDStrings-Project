#pragma once
#include "CoreMinimal.h"
#include "PlayerLongPressDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerLongPressDelegate, bool, bAerial);

