#pragma once
#include "CoreMinimal.h"
#include "PlayerSasSelectSlowDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerSasSelectSlow, bool, bSlow);

