#pragma once
#include "CoreMinimal.h"
#include "EContentsOpening.h"
#include "ContentsOpeningDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FContentsOpeningDelegate, EContentsOpening, Contents, bool, bOpen);

