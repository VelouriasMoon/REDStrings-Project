#pragma once
#include "CoreMinimal.h"
#include "NotifyFinishActorDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNotifyFinishActor, AActor*, finisher);

