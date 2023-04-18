#pragma once
#include "CoreMinimal.h"
#include "PlayerAnimKind.h"
#include "ChangeAnimKindDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChangeAnimKindDelegate, PlayerAnimKind, NewKind, PlayerAnimKind, OldKind);

