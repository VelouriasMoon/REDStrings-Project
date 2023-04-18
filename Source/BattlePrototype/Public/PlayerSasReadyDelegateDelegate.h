#pragma once
#include "CoreMinimal.h"
#include "EPlayerInputSASReadyType.h"
#include "PlayerSasReadyDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerSasReadyDelegate, EPlayerInputSASReadyType, ReadyType);

