#pragma once
#include "CoreMinimal.h"
#include "RessurectSuccessDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRessurectSuccessDelegate, AActor*, RevivePlayer);

