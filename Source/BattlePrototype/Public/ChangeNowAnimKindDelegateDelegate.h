#pragma once
#include "CoreMinimal.h"
#include "PlayerAnimKind.h"
#include "ChangeNowAnimKindDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChangeNowAnimKindDelegate, PlayerAnimKind, NewKind, PlayerAnimKind, OldKind);

