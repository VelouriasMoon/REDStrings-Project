#pragma once
#include "CoreMinimal.h"
#include "EOperationRestriction.h"
#include "ContentsRestrictionDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FContentsRestrictionDelegate, EOperationRestriction, Contents, bool, bOpen);

