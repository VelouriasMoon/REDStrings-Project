#pragma once
#include "CoreMinimal.h"
#include "PlayerWalkRunStateKind.h"
#include "ChangeNowWalkRunStateKindDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeNowWalkRunStateKindDelegate, PlayerWalkRunStateKind, NewKind);

