#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "VectorArgumentDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVectorArgumentDelegate, FVector, Vector);

