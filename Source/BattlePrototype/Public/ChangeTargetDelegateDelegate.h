#pragma once
#include "CoreMinimal.h"
#include "ChangeTargetDelegateDelegate.generated.h"

class ARSCharacterBase;

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FChangeTargetDelegate, ARSCharacterBase*, Target, bool, bLockOn, bool, bLostTarget);

