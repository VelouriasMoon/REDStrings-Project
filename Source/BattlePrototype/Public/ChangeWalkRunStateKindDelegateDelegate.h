#pragma once
#include "CoreMinimal.h"
#include "PlayerWalkRunStateKind.h"
#include "ChangeWalkRunStateKindDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeWalkRunStateKindDelegate, PlayerWalkRunStateKind, NewKind);

