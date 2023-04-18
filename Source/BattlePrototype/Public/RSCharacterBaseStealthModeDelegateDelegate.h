#pragma once
#include "CoreMinimal.h"
#include "RSCharacterBaseStealthModeDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSCharacterBaseStealthModeDelegate, bool, bStealth);

